//
//  ViewController.m
//  UnDebuggable
//
//  Created by Bernhard Mueller on 1/26/17.
//  Copyright © 2017 Bernhard Mueller. All rights reserved.
//

#import "ViewController.h"
#import <CommonCrypto/CommonDigest.h>
#import <dlfcn.h>
#import <sys/types.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/sysctl.h>
#include <dlfcn.h>
#include <mach-o/dyld.h>
#import "AESCrypt.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UILabel *theLabel;
@property (weak, nonatomic) IBOutlet UITextField *theTextField;
@property (weak, nonatomic) IBOutlet UIButton *bVerify;

@end

@implementation ViewController

- (void)showJailbreakAlert {
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Jailbreak Detected!"
                                                message:@"This function is unavailable on jailbroken devices."
                                               delegate:self
                                      cancelButtonTitle:@"OK"
                                      otherButtonTitles:nil];
    [alert show];
    exit(0);
}


int xyz(char *dst) {
    const struct mach_header * header;
    Dl_info dlinfo;

    if (dladdr(xyz, &dlinfo) == 0 || dlinfo.dli_fbase == NULL) {
        NSLog(@" Error: Could not resolve symbol xyz");
        [NSThread exit];
    }

    while(1) {
        //TODO: REPLACE SIGNATURE VERIFICATION!
        header = dlinfo.dli_fbase;  // Pointer on the Mach-O header
        struct load_command * cmd = (struct load_command *)(header + 1); // First load command
        // Now iterate through load command
        //to find __text section of __TEXT segment
        for (uint32_t i = 0; cmd != NULL && i < header->ncmds; i++) {
            if (cmd->cmd == LC_SEGMENT) {
                // __TEXT load command is a LC_SEGMENT load command
                struct segment_command * segment = (struct segment_command *)cmd;
                if (!strcmp(segment->segname, "__TEXT")) {
                    // Stop on __TEXT segment load command and go through sections
                    // to find __text section
                    struct section * section = (struct section *)(segment + 1);
                    for (uint32_t j = 0; section != NULL && j < segment->nsects; j++) {
                        if (!strcmp(section->sectname, "__text"))
                            break; //Stop on __text section load command
                        section = (struct section *)(section + 1);
                    }
                    // Get here the __text section address, the __text section size
                    // and the virtual memory address so we can calculate
                    // a pointer on the __text section
                    uint32_t * textSectionAddr = (uint32_t *)section->addr;
                    uint32_t textSectionSize = section->size;
                    uint32_t * vmaddr = segment->vmaddr;
                    char * textSectionPtr = (char *)((int)header + (int)textSectionAddr - (int)vmaddr);
                    // Calculate the signature of the data,
                    // store the result in a string
                    // and compare to the original one
                    unsigned char digest[CC_MD5_DIGEST_LENGTH];
                    CC_MD5(textSectionPtr, textSectionSize, digest);     // calculate the signature
                    for (int i = 0; i < sizeof(digest); i++)             // fill signature
                        sprintf(dst + (2 * i), "%02x", digest[i]);
                
                    // return strcmp(originalSignature, signature) == 0;    // verify signatures match
                    
                    return 0;
                }
            }
            cmd = (struct load_command *)((uint8_t *)cmd + cmd->cmdsize);
        }
    }
    
}

- (void)protectAgainstDebugger {
    int                 junk;
    int                 mib[4];
    struct kinfo_proc   info;
    size_t              size;
    
    info.kp_proc.p_flag = 0;
    
    // Initialize mib, which tells sysctl the info we want, in this case
    // we're looking for information about a specific process ID.
    
    mib[0] = CTL_KERN;
    mib[1] = KERN_PROC;
    mib[2] = KERN_PROC_PID;
    mib[3] = getpid();
    

    while(1) {
     
        size = sizeof(info);
        junk = sysctl(mib, sizeof(mib) / sizeof(*mib), &info, &size, NULL, 0);
        assert(junk == 0);

        // We're being debugged if the P_TRACED flag is set.
        
        if ((info.kp_proc.p_flag & P_TRACED) != 0) {
            exit(0);
        }
        
        sleep(1);
        
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    typedef int (*ptrace_ptr_t)(int _request, pid_t _pid, caddr_t _addr, int _data);
    void* handle = dlopen(0, RTLD_GLOBAL | RTLD_NOW);
    ptrace_ptr_t ptrace_ptr = dlsym(handle, "ptrace");
    ptrace_ptr(31, 0, 0, 0);
    dlclose(handle);
    
    [NSThread detachNewThreadSelector:@selector(protectAgainstDebugger) toTarget:self withObject:nil];
    
    isJailbroken = NO;
    
    if (!TARGET_IPHONE_SIMULATOR){

        if ([[NSFileManager defaultManager] fileExistsAtPath:@"/Applications/Cydia.app"]){
            isJailbroken = YES;
        }else if([[NSFileManager defaultManager] fileExistsAtPath:@"/Library/MobileSubstrate/MobileSubstrate.dylib"]){
            isJailbroken = YES;
        }else if([[NSFileManager defaultManager] fileExistsAtPath:@"/bin/bash"]){
            isJailbroken = YES;
        }else if([[NSFileManager defaultManager] fileExistsAtPath:@"/usr/sbin/sshd"]){
            isJailbroken = YES;
        }else if([[NSFileManager defaultManager] fileExistsAtPath:@"/etc/apt"]){
            isJailbroken = YES;
        }
        
        NSError *error;
        NSString *stringToBeWritten = @"ABCD";
        [stringToBeWritten writeToFile:@"/private/wut.txt" atomically:YES
                              encoding:NSUTF8StringEncoding error:&error];
        if(error == nil){
            //Device is jailbroken
            isJailbroken = YES;
        } else {
            [[NSFileManager defaultManager] removeItemAtPath:@"/private/wut.txt" error:nil];
        }
        
        if([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"cydia://package/com.example.package"]]){
            //Device is jailbroken
            isJailbroken = YES;
        }
    }else{
        isJailbroken = YES;
    }
    
    self.theLabel.numberOfLines = 1;
    self.theLabel.adjustsFontSizeToFitWidth = true;
    [self.theLabel sizeToFit];
}

- (IBAction)handleButtonClick:(id)sender {
    
    xyz(signature);
    
    NSLog(@"Code Signature: %s", signature);
    
     NSString *encryptedData = [AESCrypt encrypt:[NSString stringWithCString:"shakennotstirred" encoding:NSASCIIStringEncoding] password:[NSString stringWithCString:"e538c06835bec6870db99f0732c6d9bc" encoding:NSASCIIStringEncoding]];
    
    NSLog(@"Encrypted: %@", encryptedData);
    
    NSString *decrypted = [AESCrypt decrypt:[NSString stringWithCString:solution encoding:NSASCIIStringEncoding] password:[NSString stringWithCString:signature encoding:NSASCIIStringEncoding]];
    
    // NSLog(@"Decrypted: %@", decrypted);
    
    UIAlertView *alert;
    
    if(decrypted == NULL) {
        alert = [[UIAlertView alloc] initWithTitle:@"Decryption Failed."
                                           message:@"TAMPERING WITH THIS APP IS STRICTLY PROHIBITED."
                                          delegate:self
                                 cancelButtonTitle:@"OK"
                                 otherButtonTitles:nil];
    } else {
        if(isJailbroken) {
            [self showJailbreakAlert];
        } else {

            if ([self.theTextField.text isEqualToString:decrypted]) {
                alert = [[UIAlertView alloc] initWithTitle:@"Congratulations!"
                                                                message:@"You found the secret!!"
                                                               delegate:self
                                                      cancelButtonTitle:@"OK"
                                                      otherButtonTitles:nil];
                
            } else {
                alert = [[UIAlertView alloc] initWithTitle:@"Verification Failed."
                                                                message:@"This is not the string you are looking for. Try again."
                                                               delegate:self
                                                      cancelButtonTitle:@"OK"
                                                      otherButtonTitles:nil];
            }
                
        }
    }
    
    memset(signature, 0, 32);

    [alert show];
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
