/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTCompressibleDrawerVC.h"

#import "GTCompressibleDrawerVCDelegate-Protocol.h"

@class GTCalendarDatePickerViewController, GTCalendarInfiniteListViewController;

@interface GTCalendarDrawerVC : GTCompressibleDrawerVC <GTCompressibleDrawerVCDelegate>
{
    GTCalendarDatePickerViewController *_datePickerVC;
    GTCalendarInfiniteListViewController *_infiniteListViewController;
    id <GTCalendarViewDataSource> _viewDataSourceDelegate;
    id <GTDataLoadingProtocol> _dataLoadingDelegate;
    id <GTCalendarViewControllerDelegate> _controlDelegate;
}

- (void)setControlDelegate:(id)fp8;
- (id)controlDelegate;
- (void)setDataLoadingDelegate:(id)fp8;
- (id)dataLoadingDelegate;
- (void)setViewDataSourceDelegate:(id)fp8;
- (id)viewDataSourceDelegate;
- (void)setInfiniteListViewController:(id)fp8;
- (id)infiniteListViewController;
- (void)setDatePickerVC:(id)fp8;
- (id)datePickerVC;
- (void)timeZoneChanged;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)setupCalendarDrawerForInterfaceOrientation:(int)fp8 animated:(BOOL)fp12;
- (void)compressibleDrawerVCDidLayout:(id)fp8;
- (void)compressibleDrawerVCDidStartDragging:(id)fp8;
- (void)updateDefaultSplitPosition;
- (void)setDrawerBeforeMaster:(BOOL)fp8;
- (void)compressibleDrawerVCDidEndDragging:(id)fp8;
- (float)preferredSplitPositionForOrientation:(int)fp8 proposedPosition:(float)fp12;
- (void)viewWillUnload;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)openDrawer;
- (void)setDrawerVC:(id)fp8;
- (void)setGripperView:(id)fp8;
- (id)calendarDrawer;
- (id)calendarDividerView;
- (void)setupDrawerContent;
- (id)init;
- (void)dealloc;

@end
