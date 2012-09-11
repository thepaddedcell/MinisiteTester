//
//  FlipsideViewController.h
//  MinisiteTester
//
//  Created by Craig Stanford on 27/08/12.
//  Copyright (c) 2012 Craig Stanford. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller withURL:(NSURL*)url;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UITextView* textView;

- (IBAction)done:(id)sender;

@end
