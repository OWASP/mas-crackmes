#ifndef PWNME_ROOTDETECTOR_H
#define PWNME_ROOTDETECTOR_H

static const char* suPaths[] ={
        "/data/local/su",
        "/data/local/bin/su",
        "/data/local/xbin/su",
        "/sbin/su",
        "/su/bin/su",
        "/system/bin/su",
        "/system/bin/.ext/su",
        "/system/bin/failsafe/su",
        "/system/sd/xbin/su",
        "/system/usr/we-need-root/su",
        "/system/xbin/su",
        "/cache/su",
        "/data/su",
        "/dev/su"
};


static const char* pathsThatShouldNotBeWritable[] = {
        "/system",
        "/system/bin",
        "/system/sbin",
        "/system/xbin",
        "/vendor/bin",
        "/sbin",
        "/etc",

};
__attribute__((always_inline))
static inline bool is_supath_detected(){
    int len = sizeof(suPaths) / sizeof(suPaths[0]);
    bool bRet = false;

    for(int i = 0; i < len; i++){
        if(open(suPaths[i], O_RDONLY) >= 0){
            bRet = true;
            break;
        }
        if(my_openat(AT_FDCWD, suPaths[i], O_RDONLY, 0) >= 0){
            bRet = true;
            break;
        }
        if(0 == my_access(0, suPaths[i], R_OK, 0 )){
            bRet = true;
            break;
        }
    }

    return bRet;
}

__attribute__((always_inline))
static inline bool is_systempaths_writeable(){
    int len = sizeof(pathsThatShouldNotBeWritable) / sizeof(pathsThatShouldNotBeWritable[0]);
    bool bRet = false;
    for(int i = 0; i < len; i++){

        if(0 == my_access(AT_FDCWD, pathsThatShouldNotBeWritable[i], W_OK, 0 )){
            bRet = true;
            break;
        }
    }

    return bRet;
}
#endif //PWNME_ROOTDETECTOR_H
