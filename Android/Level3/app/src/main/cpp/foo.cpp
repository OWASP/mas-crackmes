//
// Created by Bernhard Mueller on 3/13/17.
//

#include <stdio.h>
#include <unistd.h>
#include <jni.h>
#include <sys/ptrace.h>
#include <pthread.h>
#include <sys/wait.h>
#include <android/log.h>

#define APPNAME "UnCrackable3"

static char out[25];
static char x[25];
static int initialized = 0;

static int child_pid;

void goodbye() {
    raise(SIGABRT);
    _exit(0);
}

int strncmp_with_xor(char *src1, char *src2, char *key)
{
    int i=0;
    while((src1[i]!='\0') || (src2[i]!='\0') || (key[i]!='\0'))
    {
        if(src1[i] > (src2[i] ^ key[i]))
            return 1;
        if(src1[i] < (src2[i] ^ key[i]))
            return 1;
        i++;
    }

    return i;
}

void *__somonitor_loop(void *) {

    char line[512];

    FILE* fp;

    while (1) {
        fp = fopen("/proc/self/maps", "r");

        if (fp)
        {

            while (fgets(line, 512, fp))
            {
                if (strstr(line, "frida") || strstr(line, "xposed")) {

                    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Tampering detected! Terminating...");

                    goodbye();

                }

            }
            fclose(fp);
        } else {
            __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "Error opening /proc/self/maps! Terminating...");

            goodbye();
        }

        usleep(500);
    }

}


__attribute__((constructor)) static void _start(void) {
    pthread_t t;

    pthread_create( &t, NULL, __somonitor_loop, NULL );

    memset(x, 0, 25);

    initialized += 1;

    return;
}


void *monitor_pid(void *) {

    int status;

    waitpid(child_pid, &status, 0);

    if (status != 11) {

        // If this is a release build, the child will segfault (status 11). Otherwise, waitpid() should never return.

        goodbye(); // Commit seppuku
    }

    pthread_exit(NULL);

}

void anti_debug() {

    child_pid = fork();

    if (child_pid == 0)
    {
        int ppid = getppid();

        int status;

        if (ptrace(PTRACE_ATTACH, ppid, NULL, NULL) == 0)
        {
            waitpid(ppid, &status, 0);

            ptrace(PTRACE_CONT, ppid, NULL, NULL);

            while (waitpid(ppid, &status, 0)) {

                if (WIFSTOPPED(status)) {
                    // If parent stops, tell it to resume.
                    ptrace(PTRACE_CONT, ppid, NULL, NULL);
                } else {
                    // Parent has exited for some reason.
                    _exit(0);
                }
            }
        }

    } else {
        pthread_t t;

        // Start the monitoring thread

        pthread_create(&t, NULL, monitor_pid, (void *)NULL);
    }
}


int sub_0_0 () {
    return 231 ^ 186;
}

int sub_0_1() {
    return sub_0_0() ^ 251;
}

int sub_0_2() {
    return sub_0_1() ^ 121;
}

int sub_0_3() {
    return sub_0_2() ^ 172;
}

int sub_0_4() {
    return sub_0_3() ^ 110;
}

int sub_1_0 () {
    return 51 ^ 43;
}

int sub_1_1() {
    return sub_1_0() ^ 155;
}

int sub_1_2() {
    return sub_1_1() ^ 30;
}

int sub_1_3() {
    return sub_1_2() ^ 158;
}

int sub_1_4() {
    return sub_1_3() ^ 11;
}

int sub_2_0 () {
    return 16 ^ 60;
}

int sub_2_1() {
    return sub_2_0() ^ 111;
}

int sub_2_2() {
    return sub_2_1() ^ 245;
}

int sub_2_3() {
    return sub_2_2() ^ 198;
}

int sub_2_4() {
    return sub_2_3() ^ 97;
}

int sub_3_0 () {
    return 9 ^ 140;
}

int sub_3_1() {
    return sub_3_0() ^ 144;
}

int sub_3_2() {
    return sub_3_1() ^ 161;
}

int sub_3_3() {
    return sub_3_2() ^ 241;
}

int sub_3_4() {
    return sub_3_3() ^ 86;
}

int sub_4_0 () {
    return 13 ^ 95;
}

int sub_4_1() {
    return sub_4_0() ^ 248;
}

int sub_4_2() {
    return sub_4_1() ^ 125;
}

int sub_4_3() {
    return sub_4_2() ^ 166;
}

int sub_4_4() {
    return sub_4_3() ^ 126;
}

int sub_5_0 () {
    return 5 ^ 12;
}

int sub_5_1() {
    return sub_5_0() ^ 183;
}

int sub_5_2() {
    return sub_5_1() ^ 68;
}

int sub_5_3() {
    return sub_5_2() ^ 148;
}

int sub_5_4() {
    return sub_5_3() ^ 121;
}

int sub_6_0 () {
    return 6 ^ 3;
}

int sub_6_1() {
    return sub_6_0() ^ 124;
}

int sub_6_2() {
    return sub_6_1() ^ 8;
}

int sub_6_3() {
    return sub_6_2() ^ 140;
}

int sub_6_4() {
    return sub_6_3() ^ 180;
}

int sub_7_0 () {
    return 239 ^ 45;
}

int sub_7_1() {
    return sub_7_0() ^ 34;
}

int sub_7_2() {
    return sub_7_1() ^ 65;
}

int sub_7_3() {
    return sub_7_2() ^ 251;
}

int sub_7_4() {
    return sub_7_3() ^ 79;
}

int sub_8_0 () {
    return 5 ^ 212;
}

int sub_8_1() {
    return sub_8_0() ^ 170;
}

int sub_8_2() {
    return sub_8_1() ^ 53;
}

int sub_8_3() {
    return sub_8_2() ^ 100;
}

int sub_8_4() {
    return sub_8_3() ^ 39;
}

int sub_9_0 () {
    return 104 ^ 199;
}

int sub_9_1() {
    return sub_9_0() ^ 75;
}

int sub_9_2() {
    return sub_9_1() ^ 208;
}

int sub_9_3() {
    return sub_9_2() ^ 47;
}

int sub_9_4() {
    return sub_9_3() ^ 27;
}

int sub_10_0 () {
    return 145 ^ 242;
}

int sub_10_1() {
    return sub_10_0() ^ 154;
}

int sub_10_2() {
    return sub_10_1() ^ 149;
}

int sub_10_3() {
    return sub_10_2() ^ 153;
}

int sub_10_4() {
    return sub_10_3() ^ 246;
}

int sub_11_0 () {
    return 134 ^ 160;
}

int sub_11_1() {
    return sub_11_0() ^ 240;
}

int sub_11_2() {
    return sub_11_1() ^ 88;
}

int sub_11_3() {
    return sub_11_2() ^ 4;
}

int sub_11_4() {
    return sub_11_3() ^ 147;
}

int sub_12_0 () {
    return 208 ^ 22;
}

int sub_12_1() {
    return sub_12_0() ^ 9;
}

int sub_12_2() {
    return sub_12_1() ^ 151;
}

int sub_12_3() {
    return sub_12_2() ^ 161;
}

int sub_12_4() {
    return sub_12_3() ^ 163;
}

int sub_13_0 () {
    return 53 ^ 115;
}

int sub_13_1() {
    return sub_13_0() ^ 176;
}

int sub_13_2() {
    return sub_13_1() ^ 143;
}

int sub_13_3() {
    return sub_13_2() ^ 75;
}

int sub_13_4() {
    return sub_13_3() ^ 47;
}

int sub_14_0 () {
    return 170 ^ 45;
}

int sub_14_1() {
    return sub_14_0() ^ 202;
}

int sub_14_2() {
    return sub_14_1() ^ 207;
}

int sub_14_3() {
    return sub_14_2() ^ 119;
}

int sub_14_4() {
    return sub_14_3() ^ 230;
}

int sub_15_0 () {
    return 204 ^ 200;
}

int sub_15_1() {
    return sub_15_0() ^ 63;
}

int sub_15_2() {
    return sub_15_1() ^ 0;
}

int sub_15_3() {
    return sub_15_2() ^ 69;
}

int sub_15_4() {
    return sub_15_3() ^ 107;
}

int sub_16_0 () {
    return 174 ^ 224;
}

int sub_16_1() {
    return sub_16_0() ^ 249;
}

int sub_16_2() {
    return sub_16_1() ^ 220;
}

int sub_16_3() {
    return sub_16_2() ^ 219;
}

int sub_16_4() {
    return sub_16_3() ^ 184;
}

int sub_17_0 () {
    return 180 ^ 100;
}

int sub_17_1() {
    return sub_17_0() ^ 107;
}

int sub_17_2() {
    return sub_17_1() ^ 233;
}

int sub_17_3() {
    return sub_17_2() ^ 153;
}

int sub_17_4() {
    return sub_17_3() ^ 197;
}

int sub_18_0 () {
    return 27 ^ 70;
}

int sub_18_1() {
    return sub_18_0() ^ 190;
}

int sub_18_2() {
    return sub_18_1() ^ 177;
}

int sub_18_3() {
    return sub_18_2() ^ 213;
}

int sub_18_4() {
    return sub_18_3() ^ 221;
}

int sub_19_0 () {
    return 126 ^ 239;
}

int sub_19_1() {
    return sub_19_0() ^ 146;
}

int sub_19_2() {
    return sub_19_1() ^ 172;
}

int sub_19_3() {
    return sub_19_2() ^ 159;
}

int sub_19_4() {
    return sub_19_3() ^ 48;
}

int sub_20_0 () {
    return 199 ^ 226;
}

int sub_20_1() {
    return sub_20_0() ^ 116;
}

int sub_20_2() {
    return sub_20_1() ^ 208;
}

int sub_20_3() {
    return sub_20_2() ^ 47;
}

int sub_20_4() {
    return sub_20_3() ^ 185;
}

int sub_21_0 () {
    return 243 ^ 61;
}

int sub_21_1() {
    return sub_21_0() ^ 198;
}

int sub_21_2() {
    return sub_21_1() ^ 153;
}

int sub_21_3() {
    return sub_21_2() ^ 2;
}

int sub_21_4() {
    return sub_21_3() ^ 155;
}

int sub_22_0 () {
    return 102 ^ 214;
}

int sub_22_1() {
    return sub_22_0() ^ 129;
}

int sub_22_2() {
    return sub_22_1() ^ 162;
}

int sub_22_3() {
    return sub_22_2() ^ 108;
}

int sub_22_4() {
    return sub_22_3() ^ 236;
}

int sub_23_0 () {
    return 98 ^ 17;
}

int sub_23_1() {
    return sub_23_0() ^ 45;
}

int sub_23_2() {
    return sub_23_1() ^ 60;
}

int sub_23_3() {
    return sub_23_2() ^ 54;
}

int sub_23_4() {
    return sub_23_3() ^ 64;
}



extern "C"
JNIEXPORT void JNICALL Java_sg_vantagepoint_uncrackable3_MainActivity_init(JNIEnv *env, jobject, jbyteArray xk) {

    anti_debug();

    strncpy(x, (char*)xk, 25);

    initialized += 1;
}


extern "C"
JNIEXPORT jlong JNICALL Java_sg_vantagepoint_uncrackable3_MainActivity_baz(JNIEnv *env, jobject) {

    return 2378563664;
}

extern "C"
JNIEXPORT jboolean JNICALL Java_sg_vantagepoint_uncrackable3_CodeCheck_bar(JNIEnv *env, jobject, jbyteArray in) {

    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "bar called\n");

    jbyte out[25];

    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME, "codecheck: initialized = %d", initialized);

    if (initialized == 2) {

        memset(out, 0, 25);
        out[0] = sub_0_4();
        out[1] = sub_1_4();
        out[2] = sub_2_4();
        out[3] = sub_3_4();
        out[4] = sub_4_4();
        out[5] = sub_5_4();
        out[6] = sub_6_4();
        out[7] = sub_7_4();
        out[8] = sub_8_4();
        out[9] = sub_9_4();
        out[10] = sub_10_4();
        out[11] = sub_11_4();
        out[12] = sub_12_4();
        out[13] = sub_13_4();
        out[14] = sub_14_4();
        out[15] = sub_15_4();
        out[16] = sub_16_4();
        out[17] = sub_17_4();
        out[18] = sub_18_4();
        out[19] = sub_19_4();
        out[20] = sub_20_4();
        out[21] = sub_21_4();
        out[22] = sub_22_4();
        out[23] = sub_23_4();

        jbyte *buffer = env->GetByteArrayElements(in, NULL);
        jsize size = env->GetArrayLength(in);

        if (size == 24) {
            if (strncmp_with_xor((char*)in, (char*)out, x) != 25) {
                return true;
            }
        }
    }

    return false;
}
