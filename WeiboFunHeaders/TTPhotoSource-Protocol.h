//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTModel.h"

@class NSString;

@protocol TTPhotoSource <TTModel>
@property(readonly, nonatomic) long long maxPhotoIndex;
@property(readonly, nonatomic) long long numberOfPhotos;
- (id <TTPhoto>)photoAtIndex:(long long)arg1;
@property(copy, nonatomic) NSString *title;
@end
