//
//  ViewController.h
//  UnDebuggable
//
//  Created by Bernhard Mueller on 1/26/17.
//  Copyright © 2017 Bernhard Mueller. All rights reserved.
//

#import <UIKit/UIKit.h>

static char signature[33];
static char solution[] = "VaoQcPb6CChCzVmU45BGEKcNMXAYXoZvegJHYO2zqJg=";
static bool isJailbroken;

int xyz(char *);

@interface ViewController : UIViewController

- (void)showJailbreakAlert;
- (void)xyz;

@end

