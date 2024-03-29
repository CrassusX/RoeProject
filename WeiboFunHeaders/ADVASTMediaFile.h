//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface ADVASTMediaFile : NSObject
{
    _Bool _scalable;
    _Bool _maintainAspectRatio;
    int _bitrate;
    int _width;
    int _height;
    NSString *_id_;
    NSString *_delivery;
    NSString *_type;
    NSString *_apiFramework;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *apiFramework; // @synthesize apiFramework=_apiFramework;
@property(readonly, nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, copy, nonatomic) NSString *delivery; // @synthesize delivery=_delivery;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (id)initWithId:(id)arg1 delivery:(id)arg2 type:(id)arg3 bitrate:(id)arg4 width:(id)arg5 height:(id)arg6 scalable:(id)arg7 maintainAspectRatio:(id)arg8 apiFramework:(id)arg9 url:(id)arg10;
@property(readonly, nonatomic) _Bool maintainAspectRatio; // @synthesize maintainAspectRatio=_maintainAspectRatio;
@property(readonly, nonatomic) _Bool scalable; // @synthesize scalable=_scalable;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) int width; // @synthesize width=_width;

@end

