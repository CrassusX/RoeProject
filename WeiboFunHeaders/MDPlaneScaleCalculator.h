//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDSizeContext;

__attribute__((visibility("hidden")))
@interface MDPlaneScaleCalculator : NSObject
{
    long long project;
    float mViewportRatio;
    float mViewportWidth;
    float mViewportHeight;
    float mTextureWidth;
    float mTextureHeight;
    MDSizeContext *_sizeContext;
}

- (void).cxx_destruct;
- (void)calculate;
- (float)getTextureHeight;
- (float)getTextureRatio;
- (float)getTextureWidth;
- (float)getViewportHeight;
- (float)getViewportWidth;
- (id)initWithScale:(long long)arg1 sizeContext:(id)arg2;
@property(nonatomic) __weak MDSizeContext *sizeContext; // @synthesize sizeContext=_sizeContext;
- (void)setViewportRatio:(float)arg1;

@end
