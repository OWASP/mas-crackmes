//
//  ViewController.m
//  UnDebuggable
//
//  Created by Bernhard Mueller on 1/26/17.
//  Copyright © 2017 Bernhard Mueller. All rights reserved.
//

#import "ViewController.h"
#include "maxpower.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *theLabel;
@property (weak, nonatomic) IBOutlet UILabel *Hint;
@property (weak, nonatomic) IBOutlet UITextField *theTextField;
@property (weak, nonatomic) IBOutlet UIButton *bVerify;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.Hint.numberOfLines = 1;
    self.Hint.adjustsFontSizeToFitWidth = true;
    [self.Hint sizeToFit];
    
    self.theLabel.hidden = true;
    
    NSString *hiddenText = [NSString stringWithCString:do_it() encoding:NSASCIIStringEncoding];
    
    self.theLabel.text = hiddenText;

}


- (IBAction)buttonClick:(id)sender {

    UIAlertView *alert;
    
    if ([self.theTextField.text isEqualToString:self.theLabel.text]) {
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
    
    [alert show];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
