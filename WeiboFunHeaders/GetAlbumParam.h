//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RennParam.h"

@class NSString;

@interface GetAlbumParam : RennParam
{
    NSString *_albumId;
    NSString *_ownerId;
}

@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;

@end
