//
//  MainViewController.h
//  MinisiteTester
//
//  Created by Craig Stanford on 27/08/12.
//  Copyright (c) 2012 Craig Stanford. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UIWebView* webView;

- (IBAction)showInfo:(id)sender;

@end
