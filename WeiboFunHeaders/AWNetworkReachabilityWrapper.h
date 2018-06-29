//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AWNetworkReachabilityWrapper : NSObject
{
    NSString *hostname_;
    struct __SCNetworkReachability *reachability_;
    id <AWNetworkReachabilityDelegate> _delegate;
    id <AWNetworkReachabilityDelegate> delegate_;
}

+ (id)reachabilityWithHostname:(id)arg1 callbackDelegate:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <AWNetworkReachabilityDelegate> delegate; // @synthesize delegate=delegate_;
- (void)gotCallback:(struct __SCNetworkReachability *)arg1 flags:(unsigned int)arg2;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=hostname_;
- (id)initWithHostname:(id)arg1 callbackDelegate:(id)arg2;
- (void)notifyDelegateNotReachable;
- (_Bool)scheduleInCurrentRunLoop;
- (_Bool)unscheduleFromCurrentRunLoop;

@end
