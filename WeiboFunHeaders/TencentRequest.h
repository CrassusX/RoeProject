//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSMutableDictionary, NSString, NSURLConnection;

@interface TencentRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    id <TencentRequestDelegate> _delegate;
    NSString *_url;
    NSString *_httpMethod;
    NSMutableDictionary *_params;
    NSURLConnection *_connection;
    NSMutableData *_responseText;
    NSMutableDictionary *_httpHeaders;
}

+ (id)getRequestWithParams:(id)arg1 httpMethod:(id)arg2 delegate:(id)arg3 requestURL:(id)arg4;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
- (void)cancel;
- (void)connect;
- (void)connectWithRequest:(id)arg1;
@property(readonly, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <TencentRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failWithError:(id)arg1;
- (id)formError:(long long)arg1 userInfo:(id)arg2;
- (id)generateOtherPostBody;
- (id)generatePostBody;
- (void)handleResponseData:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
- (_Bool)loading;
@property(readonly, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (id)parseJsonResponse:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSMutableData *responseText; // @synthesize responseText=_responseText;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void)utfAppendBody:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
