//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMNetworkConnectionDelegate.h"
#import "IMNetworkWebViewDelegate.h"

@class IMNetworkOperation, IMNetworkSyncConnection, IMNetworkWebView, NSString;

@interface IMNetworkServiceProvider : NSObject <IMNetworkConnectionDelegate, IMNetworkWebViewDelegate>
{
    id <IMNetworkDelegate> _delegate;
    IMNetworkOperation *_networkOperation;
    IMNetworkWebView *_networkWebView;
    IMNetworkSyncConnection *_syncConnection;
    unsigned long long _startTime;
}

+ (id)getNetworkStats;
+ (void)initOperationQueue;
+ (void)resetNetworkStats;
- (void).cxx_destruct;
- (_Bool)canProcessRequest:(id)arg1;
- (void)cancelConnection;
@property(nonatomic) __weak id <IMNetworkDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getQueuePriorityForNetworkConnectionPriority:(int)arg1;
- (id)initWithWebViewPreference:(long long)arg1 backgroundColor:(id)arg2;
- (void)makeConnection:(id)arg1 imNetworkConnectionPriority:(int)arg2 delegate:(id)arg3;
- (id)makeSyncConnection:(id)arg1;
- (void)networkConnectionRequest:(id)arg1 didGetHeaders:(id)arg2;
- (void)networkConnectionRequest:(id)arg1 didGetResponse:(id)arg2;
@property(retain, nonatomic) IMNetworkOperation *networkOperation; // @synthesize networkOperation=_networkOperation;
@property(retain, nonatomic) IMNetworkWebView *networkWebView; // @synthesize networkWebView=_networkWebView;
- (void)networkWebViewRequest:(id)arg1 didGetResponse:(id)arg2;
- (_Bool)networkWebViewRequest:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 withIMRequest:(id)arg4;
- (unsigned long long)receivedBytesForResponse:(id)arg1;
- (void)removeConfigs:(id)arg1 fromRequest:(id)arg2;
- (void)sendCallbackForNetworkDidGetResponseForRequest:(id)arg1 response:(id)arg2;
- (unsigned long long)sentBytesForRequest:(id)arg1;
- (void)setReceivedStatsForResponse:(id)arg1;
- (void)setSentStatsForRequest:(id)arg1;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) IMNetworkSyncConnection *syncConnection; // @synthesize syncConnection=_syncConnection;
- (unsigned long long)sizeOfHeaders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
