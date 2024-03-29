//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaiduMobAdPrerollSlot, NSNumber, NSString;

@interface BaiduMobAdPrerollNative : NSObject
{
    NSString *_publisherId;
    NSString *_adId;
    id <BaiduMobAdPrerollNativeDelegate> _delegate;
    NSNumber *_height;
    NSNumber *_width;
    BaiduMobAdPrerollSlot *_slot;
}

- (void).cxx_destruct;
- (id)AdWithCustomEventInfo:(id)arg1;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void)buildCallbackBlock;
- (id)buildSlotInfo:(id)arg1;
- (id)channelId;
- (void)dealloc;
@property(nonatomic) id <BaiduMobAdPrerollNativeDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)enableLocation;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
- (id)init;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
- (void)request;
@property(retain, nonatomic) BaiduMobAdPrerollSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;

@end

