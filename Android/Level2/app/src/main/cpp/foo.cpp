//
// Created by Bernhard Mueller on 3/13/17.
//

#include <jni.h>
#include <string.h>
#include <sys/ptrace.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>

static char out[24];
static bool initialized = false;

static int child_pid;

void *monitor_pid(void *) {

    int status;

    waitpid(child_pid, &status, 0);

    if (status != 11) {

        // If this is a release build, the child will segfault (status 11). Otherwise, waitpid() should never return.

        _exit(0); // Commit seppuku
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
    return 79 ^ 207;
}

int sub_0_1() {
    return sub_0_0() ^ 79;
}

int sub_0_2() {
    return sub_0_1() ^ 53;
}

int sub_0_3() {
    return sub_0_2() ^ 215;
}

int sub_0_4() {
    return sub_0_3() ^ 121;
}

int sub_1_0 () {
    return 203 ^ 198;
}

int sub_1_1() {
    return sub_1_0() ^ 23;
}

int sub_1_2() {
    return sub_1_1() ^ 24;
}

int sub_1_3() {
    return sub_1_2() ^ 238;
}

int sub_1_4() {
    return sub_1_3() ^ 132;
}

int sub_2_0 () {
    return 117 ^ 10;
}

int sub_2_1() {
    return sub_2_0() ^ 237;
}

int sub_2_2() {
    return sub_2_1() ^ 119;
}

int sub_2_3() {
    return sub_2_2() ^ 22;
}

int sub_2_4() {
    return sub_2_3() ^ 146;
}

int sub_3_0 () {
    return 151 ^ 70;
}

int sub_3_1() {
    return sub_3_0() ^ 45;
}

int sub_3_2() {
    return sub_3_1() ^ 66;
}

int sub_3_3() {
    return sub_3_2() ^ 145;
}

int sub_3_4() {
    return sub_3_3() ^ 65;
}

int sub_4_0 () {
    return 100 ^ 50;
}

int sub_4_1() {
    return sub_4_0() ^ 169;
}

int sub_4_2() {
    return sub_4_1() ^ 105;
}

int sub_4_3() {
    return sub_4_2() ^ 107;
}

int sub_4_4() {
    return sub_4_3() ^ 150;
}

int sub_5_0 () {
    return 166 ^ 177;
}

int sub_5_1() {
    return sub_5_0() ^ 75;
}

int sub_5_2() {
    return sub_5_1() ^ 85;
}

int sub_5_3() {
    return sub_5_2() ^ 92;
}

int sub_5_4() {
    return sub_5_3() ^ 38;
}

int sub_6_0 () {
    return 149 ^ 249;
}

int sub_6_1() {
    return sub_6_0() ^ 213;
}

int sub_6_2() {
    return sub_6_1() ^ 194;
}

int sub_6_3() {
    return sub_6_2() ^ 145;
}

int sub_6_4() {
    return sub_6_3() ^ 202;
}

int sub_7_0 () {
    return 13 ^ 166;
}

int sub_7_1() {
    return sub_7_0() ^ 199;
}

int sub_7_2() {
    return sub_7_1() ^ 225;
}

int sub_7_3() {
    return sub_7_2() ^ 154;
}

int sub_7_4() {
    return sub_7_3() ^ 113;
}

int sub_8_0 () {
    return 197 ^ 73;
}

int sub_8_1() {
    return sub_8_0() ^ 113;
}

int sub_8_2() {
    return sub_8_1() ^ 27;
}

int sub_8_3() {
    return sub_8_2() ^ 95;
}

int sub_8_4() {
    return sub_8_3() ^ 214;
}

int sub_9_0 () {
    return 67 ^ 133;
}

int sub_9_1() {
    return sub_9_0() ^ 229;
}

int sub_9_2() {
    return sub_9_1() ^ 71;
}

int sub_9_3() {
    return sub_9_2() ^ 80;
}

int sub_9_4() {
    return sub_9_3() ^ 70;
}

int sub_10_0 () {
    return 51 ^ 246;
}

int sub_10_1() {
    return sub_10_0() ^ 159;
}

int sub_10_2() {
    return sub_10_1() ^ 159;
}

int sub_10_3() {
    return sub_10_2() ^ 168;
}

int sub_10_4() {
    return sub_10_3() ^ 77;
}

int sub_11_0 () {
    return 35 ^ 156;
}

int sub_11_1() {
    return sub_11_0() ^ 2;
}

int sub_11_2() {
    return sub_11_1() ^ 134;
}

int sub_11_3() {
    return sub_11_2() ^ 99;
}

int sub_11_4() {
    return sub_11_3() ^ 57;
}

int sub_12_0 () {
    return 44 ^ 213;
}

int sub_12_1() {
    return sub_12_0() ^ 243;
}

int sub_12_2() {
    return sub_12_1() ^ 152;
}

int sub_12_3() {
    return sub_12_2() ^ 176;
}

int sub_12_4() {
    return sub_12_3() ^ 78;
}

int sub_13_0 () {
    return 189 ^ 19;
}

int sub_13_1() {
    return sub_13_0() ^ 208;
}

int sub_13_2() {
    return sub_13_1() ^ 63;
}

int sub_13_3() {
    return sub_13_2() ^ 174;
}

int sub_13_4() {
    return sub_13_3() ^ 131;
}

int sub_14_0 () {
    return 3 ^ 84;
}

int sub_14_1() {
    return sub_14_0() ^ 18;
}

int sub_14_2() {
    return sub_14_1() ^ 133;
}

int sub_14_3() {
    return sub_14_2() ^ 73;
}

int sub_14_4() {
    return sub_14_3() ^ 169;
}

int sub_15_0 () {
    return 27 ^ 86;
}

int sub_15_1() {
    return sub_15_0() ^ 120;
}

int sub_15_2() {
    return sub_15_1() ^ 81;
}

int sub_15_3() {
    return sub_15_2() ^ 158;
}

int sub_15_4() {
    return sub_15_3() ^ 142;
}

int sub_16_0 () {
    return 65 ^ 105;
}

int sub_16_1() {
    return sub_16_0() ^ 82;
}

int sub_16_2() {
    return sub_16_1() ^ 40;
}

int sub_16_3() {
    return sub_16_2() ^ 25;
}

int sub_16_4() {
    return sub_16_3() ^ 35;
}

int sub_17_0 () {
    return 154 ^ 136;
}

int sub_17_1() {
    return sub_17_0() ^ 242;
}

int sub_17_2() {
    return sub_17_1() ^ 76;
}

int sub_17_3() {
    return sub_17_2() ^ 233;
}

int sub_17_4() {
    return sub_17_3() ^ 32;
}

int sub_18_0 () {
    return 161 ^ 132;
}

int sub_18_1() {
    return sub_18_0() ^ 35;
}

int sub_18_2() {
    return sub_18_1() ^ 124;
}

int sub_18_3() {
    return sub_18_2() ^ 235;
}

int sub_18_4() {
    return sub_18_3() ^ 177;
}

int sub_19_0 () {
    return 34 ^ 253;
}

int sub_19_1() {
    return sub_19_0() ^ 235;
}

int sub_19_2() {
    return sub_19_1() ^ 94;
}

int sub_19_3() {
    return sub_19_2() ^ 195;
}

int sub_19_4() {
    return sub_19_3() ^ 207;
}

int sub_20_0 () {
    return 7 ^ 11;
}

int sub_20_1() {
    return sub_20_0() ^ 126;
}

int sub_20_2() {
    return sub_20_1() ^ 23;
}

int sub_20_3() {
    return sub_20_2() ^ 9;
}

int sub_20_4() {
    return sub_20_3() ^ 5;
}

int sub_21_0 () {
    return 131 ^ 250;
}

int sub_21_1() {
    return sub_21_0() ^ 176;
}

int sub_21_2() {
    return sub_21_1() ^ 55;
}

int sub_21_3() {
    return sub_21_2() ^ 24;
}

int sub_21_4() {
    return sub_21_3() ^ 149;
}

int sub_22_0 () {
    return 47 ^ 58;
}

int sub_22_1() {
    return sub_22_0() ^ 5;
}

int sub_22_2() {
    return sub_22_1() ^ 210;
}

int sub_22_3() {
    return sub_22_2() ^ 76;
}

int sub_22_4() {
    return sub_22_3() ^ 230;
}

extern "C"
JNIEXPORT void JNICALL Java_sg_vantagepoint_uncrackable2_MainActivity_init(JNIEnv *env, jobject) {

    anti_debug();

    initialized = true;
}


extern "C"
JNIEXPORT jboolean JNICALL Java_sg_vantagepoint_uncrackable2_CodeCheck_bar(JNIEnv *env, jobject, jbyteArray in) {

    jbyte out[24];

    if (initialized) {

        memset(out, 0, 24);

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

        jbyte *buffer = env->GetByteArrayElements(in, NULL);
        jsize size = env->GetArrayLength(in);

        if (size == 23) {
            if (strncmp((char *) buffer, (char *) out, 23) == 0) {
                return true;
            }
        }
    }

    return false;
}
