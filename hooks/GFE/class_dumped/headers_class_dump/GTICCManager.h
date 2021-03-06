//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface GTICCManager : NSObject
{
}

+ (void)setCurrentAuthDelegate:(id)arg1;
+ (void)processAndNotify:(id)arg1;
+ (BOOL)verifyCertificate:(id)arg1 forConnection:(id)arg2;
+ (void)didReceiveAttachmentData:(id)arg1 forConnection:(id)arg2 forFile:(id)arg3 lastBlock:(BOOL)arg4;
+ (BOOL)isSourceApplicationAllowed:(id)arg1;
+ (BOOL)processStreamPushNow:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
+ (BOOL)canSendFileToApplication:(id)arg1;
+ (BOOL)sendStreamPush:(id)arg1;
+ (BOOL)didReceiveStreamPushRequestV2:(id)arg1 annotation:(id)arg2;
+ (BOOL)prepareConnectionForPush:(id)arg1 annotation:(id)arg2;
+ (BOOL)handleURLV2:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 isLocked:(BOOL)arg4;
+ (BOOL)sendActResponseUsingV2:(id)arg1 withStatus:(int)arg2 withProvId:(id)arg3 withPin:(id)arg4 failMsg:(char **)arg5;
+ (BOOL)handleActReq:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4;
+ (BOOL)handleActResp:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4 communication:(id)arg5;
+ (BOOL)handleConReq:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4;
+ (BOOL)handleConResp:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4 communication:(id)arg5;
+ (BOOL)sendRequest:(id *)arg1 toService:(id)arg2 withVersion:(id)arg3 withMethod:(id)arg4 withParams:(id)arg5 withAttachments:(id)arg6 toApplication:(id)arg7 bringToFront:(int)arg8 withError:(id *)arg9;
+ (BOOL)sendFileAttachments:(id)arg1 toConnection:(id)arg2 client:(BOOL)arg3 toApplication:(id)arg4;
+ (BOOL)sendFileAttachments:(id)arg1 toConnection:(id)arg2 client:(BOOL)arg3;
+ (BOOL)sendResponse:(id)arg1 resultValue:(id)arg2 withAttachments:(id)arg3 toApplication:(id)arg4 bringToFront:(int)arg5 withError:(id *)arg6;
+ (BOOL)sendError:(id)arg1 withCode:(int)arg2 withMessage:(id)arg3 withData:(id)arg4 withAttachments:(id)arg5 toApplication:(id)arg6 bringToFront:(int)arg7 withError:(id *)arg8;
+ (BOOL)useStreamFront:(int)arg1;
+ (struct __CFArray *)generateIdentityRef:(struct __SecIdentity **)arg1 forConnection:(id)arg2;
+ (id)getServiceDelegate;
+ (id)getServiceClientDelegate;
+ (void)setServiceDelegate:(id)arg1;
+ (void)setServiceClientDelegate:(id)arg1;
+ (void)bringToFront:(id)arg1;
+ (void)setBackgroundFriendly;
+ (void)completeBackgroundTask;
+ (BOOL)setError:(id *)arg1 withCode:(int)arg2 withDescription:(id)arg3 withInfo:(id)arg4 withDomain:(id)arg5;
+ (id)createAndAddConnection:(id)arg1;
+ (id)connectionForApp:(id)arg1;
+ (void)shutdownICC;
+ (void)removeConnectionForApp:(id)arg1;
+ (BOOL)isConnectedTo:(id)arg1;
+ (BOOL)requestPending;
+ (void)clearPendingRequests;
+ (void)removePendingRequest:(id)arg1;
+ (void)addPendingRequest:(id)arg1 command:(id)arg2 annotation:(id)arg3;
+ (void)processPendingRequests;
+ (BOOL)sendActRequestUsingV2:(id)arg1 withAppId:(id)arg2 withAppName:(id)arg3 withAppVersion:(id)arg4 withNonce:(id)arg5 failMsg:(char **)arg6;
+ (BOOL)sendConRequestUsingV2:(id)arg1 shouldConnect:(BOOL)arg2 shouldAuthorize:(BOOL)arg3 failMsg:(char **)arg4;
+ (BOOL)sendRequestUsingV2:(id)arg1 shouldConnect:(BOOL)arg2 shouldAuthorize:(BOOL)arg3 failMsg:(char **)arg4;
+ (void)sendRequestAsyncV2:(id)arg1 command:(id)arg2 shouldAuthorize:(BOOL)arg3 annotation:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)clearPendingTLSRequests;
+ (void)addPendingTLSRequest:(id)arg1 toService:(id)arg2 withVersion:(id)arg3 withMethod:(id)arg4 withParams:(id)arg5 withAttachments:(id)arg6 toApplication:(id)arg7 bringToFront:(int)arg8;
+ (void)processPendingTLSRequests;
+ (BOOL)cancelPendingTLSRequest:(id)arg1 toApplication:(id)arg2;
+ (void)clearPendingTLSErrors;
+ (void)addPendingTLSError:(id)arg1 withCode:(int)arg2 withMessage:(id)arg3 withData:(id)arg4 withAttachments:(id)arg5 toApplication:(id)arg6 bringToFront:(int)arg7;
+ (void)processPendingTLSError;
+ (void)clearPendingTLSResponses;
+ (void)addPendingTLSResponse:(id)arg1 resultValue:(id)arg2 withAttachments:(id)arg3 toApplication:(id)arg4 bringToFront:(int)arg5;
+ (void)processPendingTLSResponse;
- (void)dealloc;
- (id)init;

@end

