//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIImageView<TLGIFImageViewProtocol>;

@protocol TLGIFImageViewDelegate <NSObject>

@optional
- (void)imageView:(UIImageView<TLGIFImageViewProtocol> *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)imageViewDidFinishLoad:(UIImageView<TLGIFImageViewProtocol> *)arg1;
@end
