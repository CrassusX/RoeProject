//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AdCompAdapter : NSObject
{
    _Bool _adTestMode;
    _Bool bIgnoreShowRequest;
    _Bool bIgnoreClickRequest;
    int _adPlatType;
    int configVer;
    int adType;
    NSString *showUrlStr;
    NSString *clickUrlStr;
}

+ (void)linkMutableString:(id)arg1 Dict:(id)arg2;
+ (void)logRequestHeaders:(id)arg1;
+ (void)metricPing:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int adPlatType; // @synthesize adPlatType=_adPlatType;
@property(nonatomic) _Bool adTestMode; // @synthesize adTestMode=_adTestMode;
@property(nonatomic) int adType; // @synthesize adType;
- (void)adjustAdSize:(struct CGSize *)arg1;
- (_Bool)adjustClickLink:(id)arg1;
@property(nonatomic) _Bool bIgnoreClickRequest; // @synthesize bIgnoreClickRequest;
@property(nonatomic) _Bool bIgnoreShowRequest; // @synthesize bIgnoreShowRequest;
- (void)cleanDummyData;
@property(retain, nonatomic) NSString *clickUrlStr; // @synthesize clickUrlStr;
@property(nonatomic) int configVer; // @synthesize configVer;
- (id)copyRightString;
- (id)getAdGetRequest:(id)arg1;
- (id)getAdReportRequest:(_Bool)arg1 AdContent:(id)arg2;
- (id)getRequestBody:(id)arg1;
- (void)htmlWebViewSizeDefault:(id)arg1;
- (id)makeAdErrorReport:(int)arg1 AdContent:(id)arg2 Arg:(id)arg3;
- (_Bool)parseResponse:(id)arg1 AdContent:(id)arg2 ErrorInfo:(id *)arg3;
- (_Bool)parseResponse:(id)arg1 contentArr:(id)arg2 ErrorInfo:(id *)arg3;
- (void)parseStatus:(int)arg1 ErrorInfo:(id *)arg2;
- (_Bool)parseXMLFoundCharacters:(id)arg1 inElement:(id)arg2 adContent:(id)arg3;
- (_Bool)parseXMLStartElement:(id)arg1 attributes:(id)arg2 adContent:(id)arg3;
- (id)replaceDefineString:(id)arg1 AdContent:(id)arg2;
@property(retain, nonatomic) NSString *showUrlStr; // @synthesize showUrlStr;
- (_Bool)useInternalParser;

@end

