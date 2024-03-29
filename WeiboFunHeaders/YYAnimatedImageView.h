//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CADisplayLink, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString, UIImage, UIImage<YYAnimatedImage>;

__attribute__((visibility("hidden")))
@interface YYAnimatedImageView : UIImageView
{
    UIImage<YYAnimatedImage> *_curAnimatedImage;
    long long _onceToken;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSOperationQueue *_requestQueue;
    CADisplayLink *_link;
    double _time;
    UIImage *_curFrame;
    unsigned long long _curIndex;
    unsigned long long _totalFrameCount;
    _Bool _loopEnd;
    unsigned long long _curLoop;
    unsigned long long _totalLoop;
    NSMutableDictionary *_buffer;
    _Bool _bufferMiss;
    unsigned long long _maxBufferCount;
    long long _incrBufferCount;
    struct CGRect _curContentsRect;
    _Bool _curImageHasContentsRect;
    _Bool _autoPlayAnimatedImage;
    _Bool _currentIsPlayingAnimation;
    NSString *_runloopMode;
    unsigned long long _maxBufferSize;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool autoPlayAnimatedImage; // @synthesize autoPlayAnimatedImage=_autoPlayAnimatedImage;
- (void)calcMaxBufferCount;
@property(nonatomic) unsigned long long currentAnimatedImageIndex;
- (unsigned long long)currentImageType;
@property(nonatomic) _Bool currentIsPlayingAnimation; // @synthesize currentIsPlayingAnimation=_currentIsPlayingAnimation;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didMoved;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)imageChanged;
- (id)imageForType:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (_Bool)isAnimating;
@property(nonatomic) unsigned long long maxBufferSize; // @synthesize maxBufferSize=_maxBufferSize;
- (void)resetAnimated;
@property(copy, nonatomic) NSString *runloopMode; // @synthesize runloopMode=_runloopMode;
- (void)setAnimationImages:(id)arg1;
- (void)setContentsRect:(struct CGRect)arg1 forImage:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withType:(unsigned long long)arg2;
- (void)startAnimating;
- (void)step:(id)arg1;
- (void)stopAnimating;

@end

