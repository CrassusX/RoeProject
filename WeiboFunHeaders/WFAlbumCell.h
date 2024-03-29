//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TTImageViewDelegate.h"

@class NSDateFormatter, NSString, TTImageView, UIImageView, UILabel, WFAlbum;

__attribute__((visibility("hidden")))
@interface WFAlbumCell : UITableViewCell <TTImageViewDelegate>
{
    UILabel *_bodyLabel;
    UILabel *_descLabel;
    TTImageView *_imageView2;
    UIImageView *_digupIcon;
    UILabel *_typeTagLabel;
    UIImageView *_contentBackView;
    NSDateFormatter *_dateFormatter;
    WFAlbum *_album;
    UILabel *_timeLabel;
    UILabel *_digUpLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
- (void)dealloc;
@property(readonly, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(readonly, nonatomic) UILabel *digUpLabel; // @synthesize digUpLabel=_digUpLabel;
@property(readonly, nonatomic) TTImageView *imageView2; // @synthesize imageView2=_imageView2;
- (void)imageView:(id)arg1 willSendARequest:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)refreshLastUpdated;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UILabel *typeTagLabel; // @synthesize typeTagLabel=_typeTagLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

