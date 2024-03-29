//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMAdUnit.h"

#import "IMMoatViewability.h"

@class IMRenderView, NSString;

@interface IMBannerAdUnit : IMAdUnit <IMMoatViewability>
{
    long long _defaultRefreshIntervalConfig;
    long long _minRefreshIntervalConfig;
}

- (void)createIASViewability;
- (void)createMoatViewabilityWithParameters:(id)arg1 forCreativeType:(long long)arg2;
@property long long defaultRefreshIntervalConfig; // @synthesize defaultRefreshIntervalConfig=_defaultRefreshIntervalConfig;
- (id)displayName;
- (id)getAdReqParams;
- (void)imRenderViewAppearOnScreen:(id)arg1;
- (void)imRenderViewFinishedLoading:(id)arg1;
- (id)initWithPlacementId:(long long)arg1 frame:(struct CGRect)arg2;
- (_Bool)isActive;
@property long long minRefreshIntervalConfig; // @synthesize minRefreshIntervalConfig=_minRefreshIntervalConfig;
- (void)submitEventForLoadFailedOnActive;
- (long long)webViewPreference;
- (id)webviewBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IMRenderView *renderView;
@property(readonly) Class superclass;

@end

