//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TLImageViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSDateFormatter, NSString, TLThumbView, TTImageView, UIButton, UIImageView, UILabel, UIView, WFCommentButton, WFDigButton, WFFavoriteButton, WFShareButton, WFWeibo;

__attribute__((visibility("hidden")))
@interface WFPostCell : UITableViewCell <TLImageViewDelegate, UIActionSheetDelegate>
{
    UILabel *_bodyLabel;
    TLThumbView *_imageView2;
    WFShareButton *_shareButton;
    WFFavoriteButton *_favoriteButton;
    WFCommentButton *_commentButton;
    WFDigButton *_digUpButton;
    WFDigButton *_digDownButton;
    UIView *_headerView;
    TTImageView *_avatarView;
    UILabel *_userLabel;
    UILabel *_timeLabel;
    UIButton *_reportButton;
    UIImageView *_contentBackView;
    NSDateFormatter *_dateFormatter;
    WFWeibo *_weibo;
}

+ (id)attributedStringForBody:(id)arg1;
+ (double)heightForWeibo:(id)arg1;
+ (struct CGSize)sizeForBody:(id)arg1 inWidth:(double)arg2;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(readonly, nonatomic) TTImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(readonly, nonatomic) WFCommentButton *commentButton;
- (id)contentBackgroundImage;
- (void)copyText:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)dig:(id)arg1;
@property(readonly, nonatomic) WFDigButton *digDownButton;
@property(readonly, nonatomic) WFDigButton *digUpButton;
@property(readonly, nonatomic) WFFavoriteButton *favoriteButton;
- (void)favoriteThis:(id)arg1;
- (void)goComments:(id)arg1;
@property(readonly, nonatomic) TLThumbView *imageView2; // @synthesize imageView2=_imageView2;
- (void)imageView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2;
- (void)imageView:(id)arg1 willSendARequest:(id)arg2;
- (void)imageViewDidStartLoad:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)refreshLastUpdated;
- (void)setBody:(id)arg1;
@property(retain, nonatomic) WFWeibo *weibo; // @synthesize weibo=_weibo;
@property(readonly, nonatomic) WFShareButton *shareButton;
- (void)shareThis:(id)arg1;
- (void)showActions:(id)arg1;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

