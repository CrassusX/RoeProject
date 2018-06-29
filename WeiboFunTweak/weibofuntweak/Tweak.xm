%hook WFSlideSegmentController

- (void)setShouldHideAd:(_Bool )shouldHideAd {
 	%log; 
 	%orig; 
 }
- (_Bool )shouldHideAd { 
	%log; 
	_Bool  r = %orig; 
	HBLogDebug(@"iOSRE:shouldHideAd = %d", r); 
	return YES; 
 }
%end
