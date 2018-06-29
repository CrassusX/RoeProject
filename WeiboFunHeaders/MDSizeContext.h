//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MDSizeContext : NSObject
{
    float textureWidth;
    float textureHeight;
    float textureRatio;
    float viewportWidth;
    float viewportHeight;
    float viewportRatio;
}

- (id)description;
- (float)getTextureRatioValue;
- (float)getViewportRatioValue;
- (id)init;
- (void)updateTextureWidth:(float)arg1 height:(float)arg2;
- (void)updateViewportWidth:(float)arg1 height:(float)arg2;

@end
