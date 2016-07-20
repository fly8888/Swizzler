//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSURL, UIActivityIndicatorView, UIWebView;

@interface CustomLinkController : UIViewController <UIWebViewDelegate>
{
    NSURL *url;
    UIWebView *myWebView;
    UIActivityIndicatorView *activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView;
@property(retain, nonatomic) UIWebView *myWebView; // @synthesize myWebView;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;

@end
