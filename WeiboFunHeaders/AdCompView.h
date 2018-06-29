//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CLLocation, NSObject;

@interface AdCompView : UIView
{
    _Bool isReady;
    id <AdCompViewDelegate> _delegate;
    CLLocation *_location;
    NSObject *_adData;
}

+ (id)requestAdInstlWithDelegate:(id)arg1 withAdPlatType:(int)arg2;
+ (id)requestOfSize:(struct CGSize)arg1 withDelegate:(id)arg2 withAdPlatType:(int)arg3;
+ (id)requestSpreadActivityWithDelegate:(id)arg1 withAdPlatType:(int)arg2;
+ (id)requestWithDelegate:(id)arg1 withAdPlatType:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *adData; // @synthesize adData=_adData;
- (void)clickAdInstlAction;
- (void)dealloc;
@property(nonatomic) __weak id <AdCompViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initAdInstWithDelegate:(id)arg1;
- (id)initBannerSize:(struct CGSize)arg1 withDelegate:(id)arg2;
- (id)initBannerWithDelegate:(id)arg1;
- (id)initWithAdPlatType:(int)arg1;
@property(nonatomic) _Bool isReady; // @synthesize isReady;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)pauseRequestAd;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)requestGet:(int)arg1;
- (void)resumeRequestAd;
- (_Bool)showWithRootViewController:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
