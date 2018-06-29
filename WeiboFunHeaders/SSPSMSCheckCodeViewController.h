//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SSPSMSButtonCell, SSPSMSCheckCodeCell, SSPSendCodeModel, UIAlertView, UITableView;

@interface SSPSMSCheckCodeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UIGestureRecognizerDelegate>
{
    UITableView *_tableView;
    NSArray *_cellArray;
    SSPSMSCheckCodeCell *_checkCodeCell;
    SSPSMSButtonCell *_buttonCell;
    _Bool _isFirst;
    _Bool _showVoice;
    UIAlertView *_checkBackAlertView;
    _Bool _isSendCode;
    _Bool _isVerifyCode;
    SSPSendCodeModel *_sendCodeModel;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (void)_checkBack;
- (void)_doneAct;
- (void)_getCode;
- (void)_getVoiceCode;
- (void)_setupUI;
- (void)_showVoice;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (long long)preferredStatusBarStyle;
@property(nonatomic) __weak SSPSendCodeModel *sendCodeModel; // @synthesize sendCodeModel=_sendCodeModel;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)valueChanged;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
