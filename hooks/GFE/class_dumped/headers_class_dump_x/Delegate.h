/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface Delegate : _ABAddressBookAddRecord
{
    id target;
    SEL selector;
}

- (void)setSelector:(SEL)fp8;
- (SEL)selector;
- (void)setTarget:(id)fp8;
- (id)target;
- (BOOL)isEqual:(id)fp8;
- (void)callWithObject:(id)fp8 withObject:(id)fp12;
- (void)callWithObject:(id)fp8;
- (void)call;
- (id)init:(id)fp8 selector:(SEL)fp12;

@end

