//
//  RegistrationViewController.m
//  passportamerica
//
//  Created by Ray Fernandez on 1/30/12.
//  Copyright (c) 2012 Passport America. All rights reserved.
//

#import "RegistrationViewController.h"

@implementation RegistrationViewController

@synthesize scrollView, txtFirstName, txtLastName, txtAge, txtGender, txtAddress1, txtAddress2, txtCity, txtState, txtCountry, txtPostal, txtEmail, txtPhone, txtAccount, txtCgAcct;

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    scrollView.showsHorizontalScrollIndicator = NO;
	scrollView.showsVerticalScrollIndicator = YES;
	scrollView.scrollsToTop = YES;
    scrollView.contentSize = CGSizeMake(320, 1044);
    
    [super viewDidLoad];
}

-(void) validateData {
    
    NSString *regEmail = txtEmail.text;
    NSError *error = NULL;
    
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\b[A-Z0-9._%-]+@[A-Z0-9.-]+\.[A-Z]{2,4}\b" options:0 error:&error];
    NSTextCheckingResult *match = [regex firstMatchInString:regEmail options:0 range:NSMakeRange(0, [regEmail length])];
    
}

-(void) postRegData {
    
    
    
}

-(IBAction)submitReg:(id)sender{
    [self validateData];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
