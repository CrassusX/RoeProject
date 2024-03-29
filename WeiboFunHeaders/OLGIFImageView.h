//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OLImageView.h"

#import "TLGIFImageViewProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OLGIFImageView : OLImageView <TLGIFImageViewProtocol>
{
    _Bool _showAsGIF;
    _Bool _isLoaded;
    id <TLGIFImageViewDelegate> _imageViewDelegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <TLGIFImageViewDelegate> imageViewDelegate; // @synthesize imageViewDelegate=_imageViewDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void)setData:(id)arg1;
@property(nonatomic) _Bool showAsGIF; // @synthesize showAsGIF=_showAsGIF;

// Remaining properties
@property(nonatomic) unsigned long long currentAnimatedImageIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

