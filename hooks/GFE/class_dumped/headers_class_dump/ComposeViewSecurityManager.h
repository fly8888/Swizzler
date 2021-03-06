//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "SecuritySelectionListViewProtocol.h"
#import "UIPopoverControllerDelegate.h"

@class EmailVC, NSMutableArray, RowSMIMESecurityComposeView, SecurityInfoViewer, SmimeModuleAccessor, SmimePinManager, UIPopoverController;

@interface ComposeViewSecurityManager : NSObject <SecuritySelectionListViewProtocol, UIPopoverControllerDelegate>
{
    RowSMIMESecurityComposeView *securityCell;
    SmimeModuleAccessor *smimeModuleAccessor;
    SecurityInfoViewer *infoViewer;
    struct UIAListener *secureEmailEngineListener;
    SmimePinManager *smimePinManager;
    int lastSelectedId;
    NSMutableArray *availableSelectionsId;
    EmailVC *parent;
    int _securityState;
    int _securityOldState;
    BOOL _msgClassificationEnabled;
    BOOL _pinValidatedAtLeastOnce;
    UIPopoverController *_popover;
}

@property(nonatomic) int securityState; // @synthesize securityState=_securityState;
@property(retain, nonatomic) SecurityInfoViewer *infoViewer; // @synthesize infoViewer;
@property(retain, nonatomic) SmimePinManager *smimePinManager; // @synthesize smimePinManager;
@property(nonatomic) EmailVC *parent; // @synthesize parent;
@property(retain, nonatomic) SmimeModuleAccessor *smimeModuleAccessor; // @synthesize smimeModuleAccessor;
@property(retain, nonatomic) RowSMIMESecurityComposeView *securityCell; // @synthesize securityCell;
- (void)dismissBAIPinView;
- (void)removeUnavailableEmbededAttachmentsFromComposeEmail;
- (int)getSecuritySelectionId:(int)arg1;
- (id)getViewNavigationController;
- (void)gmmNavigationControllerRequested:(id)arg1;
- (void)DestroyEncodedOutputData:(int)arg1;
- (void)CloseEncodingUI;
- (void)ShowEncodingUI;
- (void)RemoveGreyBanner;
- (void)AddGreyBannerText:(id)arg1;
- (int)WeHaveAllAttachments:(struct AnEmail *)arg1 newMail:(struct AnEmail *)arg2;
- (_Bool)WeHaveEntireBody:(struct AnEmail *)arg1;
- (void)dealWithReplyForward:(unsigned long)arg1 securityState:(int)arg2 replyMessage:(BOOL)arg3 forwardMessage:(BOOL)arg4;
- (void)updateSecurityChoice:(unsigned long)arg1 securityState:(int)arg2 replyMessage:(BOOL)arg3 forwardMessage:(BOOL)arg4;
- (int)setupSecurityChoice:(unsigned long)arg1 replyMessage:(BOOL)arg2 forwardMessage:(BOOL)arg3;
- (void)ListenForMessage:(id)arg1;
- (void)showFailureAlertForCertStatus:(int)arg1 forEmailAddress:(id)arg2;
- (void)dismissCertificateLookUpAlert;
- (void)showCertificateLookUpAlert;
- (void)passwordVerified;
- (unsigned int)StartLookupCertificate:(unsigned long)arg1 emailAdress:(struct GxUTF8String *)arg2 contactName:(struct GxUTF8String *)arg3 contactId:(unsigned long)arg4;
- (BOOL)showPasswordEntryUI:(unsigned short)arg1 usage:(int)arg2;
- (void)handleEncodeOutgoingMail:(unsigned short)arg1;
- (void)updateSecurityCellForSelectedOption:(int)arg1;
- (void)securitySelectionButtonSelected:(id)arg1;
- (void)addComposeSecurityOptionsInView:(int)arg1;
- (void)disableSecuritySelectionButton;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)cancelAction;
- (void)saveAction:(int)arg1;
- (void)dealloc;
- (void)removeSecurityCell;
- (BOOL)setUpSecurityCell;
- (void)showSecurityCell;
- (id)init;

@end

