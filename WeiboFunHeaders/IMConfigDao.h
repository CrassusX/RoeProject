//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKeyValueStore, NSMutableArray;

@interface IMConfigDao : NSObject
{
    IMKeyValueStore *_configStore;
    NSMutableArray *_configsSaved;
}

- (void).cxx_destruct;
- (void)clearAll;
@property(retain, nonatomic) IMKeyValueStore *configStore; // @synthesize configStore=_configStore;
@property(retain, nonatomic) NSMutableArray *configsSaved; // @synthesize configsSaved=_configsSaved;
- (void)getConfig:(id)arg1;
- (id)init;
- (_Bool)isConfigInCache:(id)arg1;
- (double)lastUpdatedTimeStamp:(id)arg1;
- (void)putConfig:(id)arg1;
- (void)setLastUpdatedTimeStamp:(double)arg1 forConfig:(id)arg2;

@end

