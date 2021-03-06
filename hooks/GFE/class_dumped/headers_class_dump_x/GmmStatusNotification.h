/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString, NSTimer;

@interface GmmStatusNotification : _ABAddressBookAddRecord
{
    int notificationType;
    id <GmmStatusNotificationDelegate> delegate;
    NSString *notificationText;
    NSTimer *minTimer;
    NSTimer *maxTimer;
    double minTime;
    double maxTime;
    BOOL active;
    BOOL unlimited;
    BOOL noisy;
    NSTimer *_minTimer;
    NSTimer *_maxTimer;
}

- (void)setMaxTimer:(id)fp8;
- (id)maxTimer;
- (void)setMinTimer:(id)fp8;
- (id)minTimer;
- (void)setNotificationText:(id)fp8;
- (id)notificationText;
- (void)setNoisy:(BOOL)fp8;
- (BOOL)noisy;
- (void)setUnlimited:(BOOL)fp8;
- (BOOL)unlimited;
- (BOOL)active;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (int)notificationType;
- (void)maxTimerCallback:(id)fp8;
- (void)minTimerCallback:(id)fp8;
- (void)cancel;
- (void)activate;
- (id)initWithType:(int)fp8;
- (id)initWithType:(int)fp8 minTime:(double)fp12 maxTime:(double)fp20;
- (void)dealloc;

@end

