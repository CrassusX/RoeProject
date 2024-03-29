//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMRenderView;

@interface IMBaseProcessor : NSObject
{
    id <IMRichMediaDelegate> _delegate;
    IMRenderView *_renderView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IMRichMediaDelegate> delegate; // @synthesize delegate=_delegate;
- (void)executeJavascript:(id)arg1;
- (id)initWithRenderView:(id)arg1;
@property(nonatomic) __weak IMRenderView *renderView; // @synthesize renderView=_renderView;
- (void)sendCallbackForRichMediaAdDidDismissScreen;
- (void)sendCallbackForRichMediaAdDidPerformUserInteraction:(id)arg1;
- (void)sendCallbackForRichMediaAdDidPresentScreen;
- (void)sendCallbackForRichMediaAdIncentActionComplete:(id)arg1;
- (void)sendCallbackForRichMediaAdWillDismissScreen;
- (void)sendCallbackForRichMediaAdWillLeaveApplication;
- (void)sendCallbackForRichMediaAdWillPresentScreen;
- (void)showAlertWithMessage:(id)arg1;

@end

