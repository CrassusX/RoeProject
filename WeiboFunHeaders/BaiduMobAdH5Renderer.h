//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaiduMobAdHTMLRenderer.h"

@class NSString;

@interface BaiduMobAdH5Renderer : BaiduMobAdHTMLRenderer
{
    _Bool _supportCountdown;
    _Bool _needSendShowLog;
    int _seconds;
    NSString *_htmlString;
}

- (id)adView;
- (void)dismissSplash;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
- (void)load;
@property(nonatomic) _Bool needSendShowLog; // @synthesize needSendShowLog=_needSendShowLog;
@property(nonatomic) int seconds; // @synthesize seconds=_seconds;
@property(nonatomic) _Bool supportCountdown; // @synthesize supportCountdown=_supportCountdown;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
