//
//  RegistrationViewController.h
//  passportamerica
//
//  Created by Ray Fernandez on 1/30/12.
//  Copyright (c) 2012 Passport America. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RegistrationViewController : UIViewController{
    
    IBOutlet UIScrollView *scrollView;
    IBOutlet UITextField  *txtFirstName;
    IBOutlet UITextField  *txtLastName;
    IBOutlet UITextField  *txtAge;
    IBOutlet UITextField  *txtGender;
    IBOutlet UITextField  *txtAddress1;
    IBOutlet UITextField  *txtAddress2;
    IBOutlet UITextField  *txtCity;
    IBOutlet UITextField  *txtState;
    IBOutlet UITextField  *txtCountry;
    IBOutlet UITextField  *txtPostal;
    IBOutlet UITextField  *txtEmail;
    IBOutlet UITextField  *txtPhone;
    IBOutlet UITextField  *txtAccount;
    IBOutlet UITextField  *txtCgAcct;
    
}

@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@property (nonatomic, strong) IBOutlet UITextField  *txtFirstName;
@property (nonatomic, strong) IBOutlet UITextField  *txtLastName;
@property (nonatomic, strong) IBOutlet UITextField  *txtAge;
@property (nonatomic, strong) IBOutlet UITextField  *txtGender;
@property (nonatomic, strong) IBOutlet UITextField  *txtAddress1;
@property (nonatomic, strong) IBOutlet UITextField  *txtAddress2;
@property (nonatomic, strong) IBOutlet UITextField  *txtCity;
@property (nonatomic, strong) IBOutlet UITextField  *txtState;
@property (nonatomic, strong) IBOutlet UITextField  *txtCountry;
@property (nonatomic, strong) IBOutlet UITextField  *txtPostal;
@property (nonatomic, strong) IBOutlet UITextField  *txtEmail;
@property (nonatomic, strong) IBOutlet UITextField  *txtPhone;
@property (nonatomic, strong) IBOutlet UITextField  *txtAccount;
@property (nonatomic, strong) IBOutlet UITextField  *txtCgAcct;

-(void) validateData;
-(void) postRegData;
-(IBAction)submitReg:(id)sender;

@end
