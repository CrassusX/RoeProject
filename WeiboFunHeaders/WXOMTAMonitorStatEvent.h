//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXOMTAEvent.h"

#import "WXOMTAEventProtocol.h"

@class NSString, WXOMTAAppMonitorStat;

@interface WXOMTAMonitorStatEvent : WXOMTAEvent <WXOMTAEventProtocol>
{
    WXOMTAAppMonitorStat *_stat;
}

- (void).cxx_destruct;
- (void)encode:(id)arg1;
- (int)getType;
- (id)init;
@property(retain, nonatomic) WXOMTAAppMonitorStat *stat; // @synthesize stat=_stat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

