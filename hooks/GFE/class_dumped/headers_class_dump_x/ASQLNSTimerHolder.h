/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSTimer;

@interface ASQLNSTimerHolder : _ABAddressBookAddRecord
{
    NSTimer *timer;
    struct ASQLNSTimerBasedTransactionModel *m_transacitonModel;
    double delay;
}

- (void)setTimer:(id)fp8;
- (id)timer;
- (void)dealloc;
- (BOOL)timerStarted;
- (void)startTimer;
- (void)onTimer:(id)fp8;
- (id)initWithDelay:(double)fp8 transactionModel:(struct ASQLNSTimerBasedTransactionModel *)fp16;

@end
