//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADVASTViewController, NSString, NSURL;

@protocol ADVASTViewControllerDelegate <NSObject>
- (void)vastReady:(ADVASTViewController *)arg1;

@optional
- (void)responsClickActionWithUrlString:(NSString *)arg1;
- (void)vastDidDismissFullScreen:(ADVASTViewController *)arg1;
- (void)vastError:(ADVASTViewController *)arg1 error:(int)arg2;
- (void)vastOpenBrowseWithUrl:(NSURL *)arg1;
- (void)vastTrackingEvent:(NSString *)arg1;
- (void)vastVideoAllPlayEnd:(ADVASTViewController *)arg1;
- (void)vastVideoPlayStatus:(int)arg1;
- (void)vastWillPresentFullScreen:(ADVASTViewController *)arg1;
@end

