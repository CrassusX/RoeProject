//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMVastNodeBaseParser.h"

@class IMAvidVerification;

@interface IMAvidVerificationParser : IMVastNodeBaseParser
{
    _Bool _isVerification;
    _Bool _isJavascriptResource;
    IMAvidVerification *_avidVerification;
}

+ (id)parserElementName;
- (void).cxx_destruct;
@property(retain, nonatomic) IMAvidVerification *avidVerification; // @synthesize avidVerification=_avidVerification;
- (id)createParserForElement:(id)arg1 attributes:(id)arg2;
- (_Bool)endParsingForElement:(id)arg1 value:(id)arg2;
- (void)foundCDATA:(id)arg1;
@property(nonatomic) _Bool isJavascriptResource; // @synthesize isJavascriptResource=_isJavascriptResource;
@property(nonatomic) _Bool isVerification; // @synthesize isVerification=_isVerification;

@end

