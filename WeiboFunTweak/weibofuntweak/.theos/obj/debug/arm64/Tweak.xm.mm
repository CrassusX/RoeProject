#line 1 "Tweak.xm"

#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class WFSlideSegmentController; 
static void (*_logos_orig$_ungrouped$WFSlideSegmentController$setShouldHideAd$)(_LOGOS_SELF_TYPE_NORMAL WFSlideSegmentController* _LOGOS_SELF_CONST, SEL, _Bool ); static void _logos_method$_ungrouped$WFSlideSegmentController$setShouldHideAd$(_LOGOS_SELF_TYPE_NORMAL WFSlideSegmentController* _LOGOS_SELF_CONST, SEL, _Bool ); static _Bool (*_logos_orig$_ungrouped$WFSlideSegmentController$shouldHideAd)(_LOGOS_SELF_TYPE_NORMAL WFSlideSegmentController* _LOGOS_SELF_CONST, SEL); static _Bool _logos_method$_ungrouped$WFSlideSegmentController$shouldHideAd(_LOGOS_SELF_TYPE_NORMAL WFSlideSegmentController* _LOGOS_SELF_CONST, SEL); 

#line 1 "Tweak.xm"


static void _logos_method$_ungrouped$WFSlideSegmentController$setShouldHideAd$(_LOGOS_SELF_TYPE_NORMAL WFSlideSegmentController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, _Bool  shouldHideAd) {
 	HBLogDebug(@"-[<WFSlideSegmentController: %p> setShouldHideAd:%d]", self, shouldHideAd); 
 	_logos_orig$_ungrouped$WFSlideSegmentController$setShouldHideAd$(self, _cmd, shouldHideAd); 
 }
static _Bool _logos_method$_ungrouped$WFSlideSegmentController$shouldHideAd(_LOGOS_SELF_TYPE_NORMAL WFSlideSegmentController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) { 
	HBLogDebug(@"-[<WFSlideSegmentController: %p> shouldHideAd]", self); 
	_Bool  r = _logos_orig$_ungrouped$WFSlideSegmentController$shouldHideAd(self, _cmd); 
	HBLogDebug(@"iOSRE:shouldHideAd = %d", r); 
	return YES; 
 }

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WFSlideSegmentController = objc_getClass("WFSlideSegmentController"); MSHookMessageEx(_logos_class$_ungrouped$WFSlideSegmentController, @selector(setShouldHideAd:), (IMP)&_logos_method$_ungrouped$WFSlideSegmentController$setShouldHideAd$, (IMP*)&_logos_orig$_ungrouped$WFSlideSegmentController$setShouldHideAd$);MSHookMessageEx(_logos_class$_ungrouped$WFSlideSegmentController, @selector(shouldHideAd), (IMP)&_logos_method$_ungrouped$WFSlideSegmentController$shouldHideAd, (IMP*)&_logos_orig$_ungrouped$WFSlideSegmentController$shouldHideAd);} }
#line 14 "Tweak.xm"
