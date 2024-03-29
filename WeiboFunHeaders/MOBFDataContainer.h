//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFSafariViewControllerDelegate.h"

@class NSString, UIWindow;

@interface MOBFDataContainer : NSObject <SFSafariViewControllerDelegate>
{
    _Bool _isRunning;
    UIWindow *_bgWindow;
    UIWindow *_safariWindow;
    UIWindow *_curKeyWindow;
}

+ (id)_sharedInstance;
+ (void)setDuid:(id)arg1 url:(id)arg2;
- (void).cxx_destruct;
- (void)_setDuid:(id)arg1 url:(id)arg2;
- (void)_updateDuid:(id)arg1 url:(id)arg2;
@property(retain, nonatomic) UIWindow *bgWindow; // @synthesize bgWindow=_bgWindow;
@property(nonatomic) __weak UIWindow *curKeyWindow; // @synthesize curKeyWindow=_curKeyWindow;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
@property(retain, nonatomic) UIWindow *safariWindow; // @synthesize safariWindow=_safariWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

