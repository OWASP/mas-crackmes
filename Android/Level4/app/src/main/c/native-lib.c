#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <fcntl.h>
#include <elf.h>
#include <dirent.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <dlfcn.h>

#include <sys/ptrace.h>
#include <sys/prctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>

#include <asm/unistd.h>

// Syscalls
#include "syscall_arch.h"
#include "syscalls.h"
#include "mylibc.h"

// Crypto
#include "mbedtls/md.h"
#include "whitebox/aes_table.c"
#include "swcrypto/pbkdf2.h"

#include "rootdetector/rootdetector.h"
#include <android/api-level.h>


// Android
#include <android/log.h>
#include <jni.h>

#ifdef DEBUG_ENABLED
#define cprintf(...) __android_log_print(ANDROID_LOG_INFO, "PWNME", __VA_ARGS__)
#else
#define cprintf(...)
#endif

/*Frida Detection Strings-Start*/
static const char *FRIDA_THREAD_GMAIN = "gmain";

/*Debug Detection*/
static const char *TRACER_PID = "TracerPid";
static const char *PROC_MAPS = "/proc/self/maps";
static const char *PROC_STATUS = "/proc/self/task/%s/status";
static const char *PROC_TASK = "/proc/self/task";
static const char *PROC_SELF_STATUS = "/proc/self/status";

static const char *LIBC = "libc.so";

//Structure to hold the checksum of executable section of library
typedef struct stTextSection {
    unsigned long offset;
    unsigned long memsize;
    unsigned long checksum;
} textSection;

#ifdef _32_BIT
typedef Elf32_Ehdr Elf_Ehdr;
typedef Elf32_Shdr Elf_Shdr;
#elif _64_BIT
typedef Elf64_Ehdr Elf_Ehdr;
typedef Elf64_Shdr Elf_Shdr;
#endif

static const uint8_t salt[16] = {0x4a, 0xd8, 0x91, 0x93, 0x4b, 0x99, 0xc3, 0xa0,
                                 0x44, 0x5f, 0x66, 0xad, 0x76, 0xea, 0xa1, 0x06};

static const uint8_t pin_hash[32] = {0xb7, 0x0e, 0x29, 0xf6, 0x61, 0xf7, 0x8d, 0xac,
                                     0xf5, 0x41, 0x78, 0x7d, 0xf5, 0x9b, 0xa2, 0x25,
                                     0xe1, 0x44, 0x62, 0x84, 0x88, 0xb4, 0x6b, 0x4c,
                                     0x60, 0x47, 0xd4, 0xce, 0xd3, 0x8a, 0x3a, 0xf7};

/* Extern from libc to manipulate the process name */
extern const char *__progname;

#define MAX_LINE 512
#define MAX_LENGTH 256

static void change_process_name();

static bool is_debugger_attached();

static bool is_fridathreads_detected();

static bool is_libc_tampered(const char *library, struct stTextSection *stTextSection);

static ssize_t read_one_line(int fd, char *buf, unsigned int max_len);

static unsigned long checksum(void *buffer, size_t len);

static int check_execsection_tampered(char *map, textSection *pElfSectArr);

static char *parse_proc_maps_to_fetch_path(const char *lib);

static bool fetch_checksum_of_library(const char *filePath, textSection **pTextSection);

static void detect_threat_loop(void *pargs);

static void detect_root_loop(void *pargs);

static int crash(int randomval);

static int verifyPin(uint8_t *pin);

static void detect_threat_1();

static void detect_threat_2();

static jbyteArray
gXftm3iswpkVgBNDUp(
        JNIEnv *env,
        jobject thiz,
        jbyteArray inBuff,
        jbyte rt);

unsigned int gpCrash = 0xfab972ad;
unsigned int gTamperedFridaState = 0;
unsigned int gTamperedRootState = 0x11111111;
bool gLibcIsRX = false;
textSection *elfSectionArr = 0;

/*
 * Constructor function which will invoke all detection mechanisms when native library is loaded
 */
__attribute__((constructor))
void init() {
    gTamperedFridaState |= 0x00000001;

    if (!gLibcIsRX) {
        // This first to mprotect --x segments with r-x permissions
        char *filepath = parse_proc_maps_to_fetch_path(LIBC);
        fetch_checksum_of_library(filepath, &elfSectionArr);
    }

    pthread_t t1;
    pthread_create(&t1, NULL, (void *) detect_threat_loop, NULL);
}

__attribute__((constructor))
void init2() {

    if (!gLibcIsRX) {
        // This first to mprotect --x segments with r-x permissions
        char *filepath = parse_proc_maps_to_fetch_path(LIBC);
        fetch_checksum_of_library(filepath, &elfSectionArr);
    }

    pthread_t t2;
    pthread_create(&t2, NULL, (void *) detect_root_loop, NULL);

    gTamperedRootState &= 0x01111111;
}

//HARDCODED PIN VALUE: 5971
static jbyteArray
gXftm3iswpkVgBNDUp(
        JNIEnv *env,
        jobject thiz,
        jbyteArray inBuff,
        jbyte rt) {

    // Pin and amount data
    char *buffer;
    char pin[4 + 1];
    char amount[8 + 1];
    uint8_t pinResult = 0x51;

    // Whitebox crypto
    const int block_size = 16;
    uint8_t outBuff[block_size] = {0};

    // Convert Java to native
    jsize num_bytes = (*env)->GetArrayLength(env, inBuff);
    buffer = (char *) malloc(num_bytes);
    jbyte *jinBuff = (*env)->GetByteArrayElements(env, inBuff, 0);

    unsigned char rooted = (unsigned char) rt;
    if (rooted >= 0xFF)
        crash(0x34ED);

    memcpy(buffer, jinBuff, num_bytes);

    memcpy(pin, buffer + 4, 4);
    pin[4] = '\0';
    memcpy(amount, buffer + 8, 8);
    amount[8] = '\0';

    if (gTamperedFridaState < 1)
        crash(0x207A);

    if (gTamperedRootState == 0)
        crash(0x7A20);

    int ret = verifyPin(pin);

    if (ret == 0) {
        pinResult = 0x23;
    }

    if (gTamperedFridaState == 0)
        crash(0x9218);

    detect_threat_1();
    detect_threat_2();
    aes_128_table_encrypt(buffer, outBuff); // Encrypt the pin+amount with whitebox aes crypto

    // Convert native to Java
    // block_size + 1 for passing the output encrypted data and pin result as 1 byte
    jbyteArray jout = (*env)->NewByteArray(env, block_size + 1);
    (*env)->SetByteArrayRegion(env, jout, 0, 1, &pinResult);
    (*env)->SetByteArrayRegion(env, jout, 1, block_size, outBuff);

    // Memory cleanup
    free(buffer);
    my_memset(outBuff, 0, block_size + 1);
    (*env)->ReleaseByteArrayElements(env, inBuff, jinBuff, JNI_ABORT);

    return jout;
}

static JNINativeMethod methods[] = {
        {"gXftm3iswpkVgBNDUp", "([BB)[B", gXftm3iswpkVgBNDUp},
};

jint JNI_OnLoad(JavaVM *jvm, void *v __unused) {
    JNIEnv *env;
    jclass clazz;

    if ((*jvm)->GetEnv(jvm, (void **) &env, JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }

    if ((clazz = (*env)->FindClass(env, "re/pwnme/MainActivity")) == NULL) {
        return JNI_ERR;
    }

    if ((*env)->RegisterNatives(env, clazz, methods, 1) < 0) {
        return JNI_ERR;
    }

    return JNI_VERSION_1_6;
}

/* PIN Hashing and Verification */
__attribute__((always_inline))
static inline int verifyPin(uint8_t *pin) {
    int ret = -1;
    unsigned char *out = (unsigned char *) malloc(32 * sizeof(unsigned char));

    ret = pbkdf2(pin, 4, salt, 16, 32, 32, out);

    if (ret == 0)
        ret = my_memcmp(out, pin_hash, 32);

    return ret;
}

__attribute__((always_inline))
static inline void detect_threat_loop(void *pargs) {
    if (gTamperedFridaState == 0x00000001)
        gTamperedFridaState |= 0x00000010;

    while (1) {
        bool bRet = false;

        if (gTamperedFridaState != 0x00000011) {
            crash(0x8190);
        }

        change_process_name();

        gTamperedFridaState |= 0x00000100;
        bRet = is_debugger_attached();
        if (bRet)
            crash(0xFE0A);


        if (gTamperedFridaState != 0x00000111)
            crash(0x7FCA);


        gTamperedFridaState |= 0x00001000;
        bRet = is_fridathreads_detected();
        if (bRet)
            crash(0x1AD9);

        if (gTamperedFridaState != 0x00001111)
            crash(0xA4FC);


        gTamperedFridaState |= 0x00010000;

        char ch[10] = "", ch1[10] = "";
        __system_property_get("ro.build.version.release", ch);
        __system_property_get("ro.system.build.version.release", ch1);
        int version = my_atoi(ch);
        int version1 = my_atoi(ch1);
        if (version < 10 || version1 < 10) {
            bRet = is_libc_tampered(LIBC, elfSectionArr);
            if (bRet)
                crash(0xF085);
        }

        gTamperedFridaState |= 0x00100000;
        // Code removed
        gTamperedFridaState |= 0x01000000;

        struct timespec timereq;
        timereq.tv_sec = 1;
        timereq.tv_nsec = 0;

        nanosleep(&timereq, NULL);
        if (gTamperedFridaState != 0x01111111) {
            crash(0xAEFD);
        }
        gTamperedFridaState = 0x00000011;
    }
}


__attribute__((always_inline))
static inline void detect_root_loop(void *pargs) {

    if (gTamperedRootState == 0x01111111) {
        gTamperedRootState &= 0x00111111;
    }

    bool bRet = false;

    bRet = is_supath_detected();
    if (bRet)
        crash(0x33E4);

    bRet = is_systempaths_writeable();
    if (bRet)
        crash(0x9891);

    if (gTamperedRootState != 0x00111111)
        crash(0x6848);

    gTamperedRootState &= 0x00011111;

    struct timespec timereq;
    timereq.tv_sec = 1;
    timereq.tv_nsec = 0;

    nanosleep(&timereq, NULL);

    if (gTamperedRootState != 0x00011111)
        crash(0x4324);
}

__attribute__((always_inline))
static inline int crash(int randomval) {
    volatile int *p = gpCrash;
    p += randomval * 2;
    p += *p + randomval;
    p = 0;
    p += *p;

    return *p;
}

/*
 * Change process name to confuse the reverse engineers which process to attach.
 * This function can be called any number of times.
 * Note: its just a fun function to change the process name, not really a protection mechanism
 */
__attribute__((always_inline))
static inline void change_process_name() {
    const char *processName[] = {
            "com.google.vr.vrcore",
            "android.process.media",
            "com.google.android.gms",
            "com.google.android.apps.turbo",
            "com.android.systemui",
            "com.google.android.googlequicksearch",
            "com.google.process.gservices",
            "com.google.android.gm",
            "com.google.android.videos",
            "com.android.chrome:sandboxed_process0"
    };
    if (NULL != __progname) {
        int value = rand() % (sizeof(processName) / sizeof(processName[0]));
        char *currProcName = (char *) __progname;
        my_strlcpy(currProcName, processName[value], my_strlen(processName[value]) + 1);
        currProcName[my_strlen(processName[value])] = '\0';

    }
}


/*
 * Detects if gdb/lldb/ptrace is attached to the process using the value of TracerPid in
 * /proc/self/status. If it is 0, then no debugger is attached.
 */
__attribute__((always_inline))
static inline bool is_debugger_attached() {
    bool bRet = false;
    int fd = my_openat(AT_FDCWD, PROC_SELF_STATUS, O_RDONLY | O_CLOEXEC, 0);
    if (fd != 0) {
        char map[MAX_LINE];
        while ((read_one_line(fd, map, MAX_LINE)) > 0) {

            if (NULL != my_strstr(map, TRACER_PID)) {
                char *saveptr1;
                char *str_pid = my_strtok_r(map, ":", &saveptr1);
                int pid = my_atoi(saveptr1);
                if (pid != 0) {
                    bRet = true;
                }
                break;
            }
        }
        my_close(fd);
    }

    return bRet;
}


/*
 * Detects the presence of frida specific threads
 */
__attribute__((always_inline))
static inline bool is_fridathreads_detected() {

    DIR *dir = opendir(PROC_TASK);
    bool bRet = false;

    if (dir != NULL) {
        struct dirent *entry = NULL;
        while ((entry = readdir(dir)) != NULL) {
            char filePath[MAX_LENGTH];
            my_memset(filePath, 0, MAX_LENGTH);

            if (0 == my_strcmp(entry->d_name, ".") || 0 == my_strcmp(entry->d_name, "..")) {
                continue;
            }
            snprintf(filePath, sizeof(filePath), PROC_STATUS, entry->d_name);

            int fd = my_openat(AT_FDCWD, filePath, O_RDONLY | O_CLOEXEC, 0);
            if (fd != 0) {
                char buf[MAX_LENGTH];
                read_one_line(fd, buf, MAX_LENGTH);
                if (my_strstr(buf, FRIDA_THREAD_GMAIN)) {
                    bRet = true;
                    break;
                }
                my_close(fd);
            }

        }
        closedir(dir);
    }

    return bRet;
}


/*
 * Detects if libc is tampered
 */
__attribute__((always_inline))
static inline bool is_libc_tampered(const char *library, struct stTextSection *stTextSection) {
    bool bRet = false;
    int fd = 0;
    char map[MAX_LINE];

    if ((fd = my_openat(AT_FDCWD, PROC_MAPS, O_RDONLY | O_CLOEXEC, 0)) != 0) {
        while ((read_one_line(fd, map, MAX_LINE)) > 0) {
            if (my_strstr(map, library) != NULL) {
                int ret = check_execsection_tampered(map, stTextSection);
                if (ret != -1) {
                    if (ret == 0) {
                        bRet = true;
                    }
                    break;
                }
            }
        }
    }
    my_close(fd);

    return bRet;
}


/* Utility Functions - Start */

__attribute__((always_inline))
static inline void detect_threat_1() {

    if (is_debugger_attached())
        crash(0x17a3);
}

__attribute__((always_inline))
static inline void detect_threat_2() {

    if (is_fridathreads_detected())
        crash(0x81c6);
}

__attribute__((always_inline))
static inline ssize_t read_one_line(int fd, char *buf, unsigned int max_len) {
    char b;
    ssize_t ret;
    ssize_t bytes_read = 0;

    my_memset(buf, 0, max_len);

    do {
        ret = my_read(fd, &b, 1);

        if (ret != 1) {
            if (bytes_read == 0) {
                // error or EOF
                return -1;
            } else {
                return bytes_read;
            }
        }

        if (b == '\n') {
            return bytes_read;
        }

        *(buf++) = b;
        bytes_read += 1;

    } while (bytes_read < max_len - 1);

    return bytes_read;
}


__attribute__((always_inline))
static inline unsigned long checksum(void *buffer, size_t len) {
    unsigned long seed = 0;
    uint8_t *buf = (uint8_t *) buffer;
    size_t i;
    for (i = 0; i < len; ++i)
        seed += (unsigned long) (*buf++);
    return seed;
}


__attribute__((always_inline))
static inline int check_execsection_tampered(char *map, textSection *pElfSectArr) {
    int ret = -1;
    unsigned long start, end;
    char buf[MAX_LINE];
    char path[MAX_LENGTH];
    char tmp[100];

    my_memset(buf, 0, MAX_LINE);
    my_memset(path, 0, MAX_LENGTH);
    my_memset(tmp, 0, 100);

    sscanf(map, "%lx-%lx %s %s %s %s %s", &start, &end, buf, tmp, tmp, tmp, path);

    if (buf[2] == 'x') {
        ret = 1;

        uint8_t *buffer = (uint8_t *) start;
        unsigned long memsize = end - start;

        if (memsize >= (pElfSectArr->offset + pElfSectArr->memsize)) {
            buffer = (uint8_t *) (start + pElfSectArr->offset);
        }
        memsize = pElfSectArr->memsize;
        unsigned long output = checksum(buffer,
                                        memsize); // TODO memsize is overwritten and goes OOB
        if (output != pElfSectArr->checksum) {
            ret = 0;
        }
    }

    return ret;
}


__attribute__((always_inline))
static inline char *parse_proc_maps_to_fetch_path(const char *lib) {
    int fd = 0;
    char map[MAX_LINE];
    unsigned long start, end;
    char *filepath = NULL;
    if ((fd = my_openat(AT_FDCWD, PROC_MAPS, O_RDONLY | O_CLOEXEC, 0)) != 0) {

        while ((read_one_line(fd, map, MAX_LINE)) > 0) {
            if (my_strstr(map, lib) != NULL) {
                char tmp[MAX_LENGTH];
                char path[MAX_LENGTH];
                char buf[5];
                my_memset(tmp, 0, MAX_LENGTH);
                my_memset(path, 0, MAX_LENGTH);
                my_memset(buf, 0, 5);
                sscanf(map, "%lx-%lx %s %s %s %s %s", &start, &end, buf, tmp, tmp, tmp, path);
                if (buf[2] == 'x') {
                    if (buf[0] != 'r') {
                        int out = mprotect(start, (end - start), PROT_READ | PROT_EXEC);
                        gLibcIsRX = true;
                    }
                    size_t size = my_strlen(path) + 1;
                    filepath = malloc(size);
                    my_strlcpy(filepath, path, size);
                }
            }
        }
        my_close(fd);
    }

    return filepath;
}


__attribute__((always_inline))
static inline bool fetch_checksum_of_library(const char *filePath, textSection **pTextSection) {

    Elf_Ehdr ehdr;
    Elf_Shdr sectHdr;
    int fd;

    fd = my_openat(AT_FDCWD, filePath, O_RDONLY | O_CLOEXEC, 0);
    if (fd < 0) {
        return NULL;
    }

    my_read(fd, &ehdr, sizeof(Elf_Ehdr));
    my_lseek(fd, (off_t) ehdr.e_shoff, SEEK_SET);

    unsigned long memsize = 0;
    unsigned long offset = 0;
    for (int i = 0; i < ehdr.e_shnum; i++) {
        my_memset(&sectHdr, 0, sizeof(Elf_Shdr));
        my_read(fd, &sectHdr, sizeof(Elf_Shdr));

        //Typically PLT and Text Sections are executable sections which are protected
        if (sectHdr.sh_flags & SHF_ALLOC && sectHdr.sh_flags & SHF_EXECINSTR) {
            memsize = sectHdr.sh_size;
            offset = sectHdr.sh_offset;
            break;
        }
    }
    if (memsize == 0) {
        my_close(fd);
        return false;
    }

    *pTextSection = malloc(sizeof(textSection));
    my_lseek(fd, offset, SEEK_SET);
    uint8_t *buffer = malloc(memsize * sizeof(uint8_t));
    my_read(fd, buffer, memsize);
    (*pTextSection)->memsize = memsize;
    (*pTextSection)->offset = offset;
    (*pTextSection)->checksum = checksum(buffer, memsize);

    free(buffer);
    my_close(fd);

    return true;
}

/* Utility Functions - End */