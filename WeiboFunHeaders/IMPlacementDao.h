//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMPlacementDao : NSObject
{
}

- (void)cleanUpWithTimeToLive:(long long)arg1 expiredCount:(long long *)arg2;
- (id)createTableSQL;
- (void)deleteAllPlacements;
- (id)getAllPlacements;
- (id)init;
- (void)updateTableForPlacementId:(long long)arg1 withAdType:(id)arg2 withTP:(id)arg3 maxLimit:(long long)arg4 overflow:(long long *)arg5;

@end
