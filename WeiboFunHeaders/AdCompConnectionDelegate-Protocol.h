//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdCompAdClickResponse, AdCompAdDisplayResponse, AdCompAdGetResponse, AdCompConnection, NSError, NSMutableArray;

@protocol AdCompConnectionDelegate <NSObject>
- (void)adConnection:(AdCompConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)adConnection:(AdCompConnection *)arg1 didReceiveAdContent:(NSMutableArray *)arg2;
- (void)adConnection:(AdCompConnection *)arg1 didReceiveClickResponse:(AdCompAdClickResponse *)arg2;
- (void)adConnection:(AdCompConnection *)arg1 didReceiveDisplayResponse:(AdCompAdDisplayResponse *)arg2;
- (void)adConnection:(AdCompConnection *)arg1 didReceiveGetResponse:(AdCompAdGetResponse *)arg2;
- (void)adConnectionDealloc:(AdCompConnection *)arg1;
- (void)adConnectionDidFinishLoading:(AdCompConnection *)arg1;
- (_Bool)isNeedCache;
@end

