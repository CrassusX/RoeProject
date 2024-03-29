//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAdStore, NSData, NSNumber, NSString;

@protocol IMAdStoreDelegate <NSObject>
- (void)adStore:(IMAdStore *)arg1 didLoadAdWithResponse:(NSData *)arg2 impId:(NSString *)arg3 insertionTS:(NSNumber *)arg4 vastTag:(NSData *)arg5 clientID:(NSString *)arg6;
- (void)adStore:(IMAdStore *)arg1 failedToLoadAdWithErrorCode:(int)arg2 andDescription:(NSString *)arg3 clientID:(NSString *)arg4;
- (_Bool)adStore:(IMAdStore *)arg1 shouldDeleteAdOnFetchFromDBForMarkupType:(NSString *)arg2;
- (_Bool)adStoreShouldHandlePrefetch;
@end

