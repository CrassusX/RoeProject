//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IMAsset, IMNativeLandingPageProcessor, NSArray, NSString;

@protocol IMNativeLandingPageProcessorDelegate
- (void)imNativeLandingPageProcessorDidDismissScreen:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidLeaveApplication:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidPresentScreen:(IMNativeLandingPageProcessor *)arg1;
- (IMAsset *)imNativeLandingPageProcessorGetRootAsset:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorSendTelemetryEventForEvent:(NSString *)arg1 WithProductID:(NSString *)arg2;
- (void)imNativeLandingPageProcessorWillDismissScreen:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillPresentScreen:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorfireEvents:(NSArray *)arg1 withEvent:(NSString *)arg2 trackerType:(NSString *)arg3 showTime:(unsigned long long)arg4;

@optional
- (void)imNativeLandingPageProcessorDidDismissEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidPresentEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillDismissEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillPresentEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
@end

