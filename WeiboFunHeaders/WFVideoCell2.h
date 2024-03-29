//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TTImageViewDelegate.h"

@class NSDateFormatter, NSString, TTImageView, UIImageView, UILabel, WFWeibo;

__attribute__((visibility("hidden")))
@interface WFVideoCell2 : UITableViewCell <TTImageViewDelegate>
{
    UIImageView *_viewIcon;
    UIImageView *_commentIcon;
    UILabel *_typeTagLabel;
    UIImageView *_contentBackView;
    TTImageView *_imageHolderView;
    NSDateFormatter *_dateFormatter;
    UILabel *_bodyLabel;
    TTImageView *_imageView2;
    WFWeibo *_weibo;
    UILabel *_timeLabel;
    UILabel *_viewsLabel;
    UILabel *_commentsLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
- (void)clearCell;
@property(readonly, nonatomic) UILabel *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(readonly, nonatomic) UIImageView *contentBackView;
- (id)contentBackgroundImage;
- (id)contentSelectedBackgroundImage;
- (void)dealloc;
@property(readonly, nonatomic) TTImageView *imageView2; // @synthesize imageView2=_imageView2;
- (void)imageView:(id)arg1 willSendARequest:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)refreshLastUpdated;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) WFWeibo *weibo; // @synthesize weibo=_weibo;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UILabel *typeTagLabel; // @synthesize typeTagLabel=_typeTagLabel;
@property(readonly, nonatomic) UILabel *viewsLabel; // @synthesize viewsLabel=_viewsLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

