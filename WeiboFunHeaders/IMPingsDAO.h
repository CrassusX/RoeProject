//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAdsConfig, IMRdbmsDataStore;

@interface IMPingsDAO : NSObject
{
    IMAdsConfig *_config;
    IMRdbmsDataStore *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
- (_Bool)deleteExpiredPings;
- (_Bool)deleteOldestPing;
- (_Bool)deletePing:(id)arg1;
- (id)getPings;
- (unsigned long long)getTotalPingsCount;
- (id)init;
- (_Bool)insertPing:(id)arg1;
- (_Bool)isValidPing:(id)arg1;
@property(retain, nonatomic) IMRdbmsDataStore *store; // @synthesize store=_store;
- (_Bool)updatePingRetryCount:(id)arg1;

@end
