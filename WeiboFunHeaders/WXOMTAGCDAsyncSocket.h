//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString, NSURL, WXOMTAGCDAsyncReadPacket, WXOMTAGCDAsyncSocketPreBuffer, WXOMTAGCDAsyncWritePacket;

@interface WXOMTAGCDAsyncSocket : NSObject
{
    unsigned int flags;
    unsigned short config;
    id <WXOMTAGCDAsyncSocketDelegate> delegate;
    struct dispatch_queue_s *delegateQueue;
    int socket4FD;
    int socket6FD;
    int socketUN;
    NSURL *socketUrl;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSData *connectInterfaceUN;
    struct dispatch_queue_s *socketQueue;
    struct dispatch_source_s *accept4Source;
    struct dispatch_source_s *accept6Source;
    struct dispatch_source_s *acceptUNSource;
    struct dispatch_source_s *connectTimer;
    struct dispatch_source_s *readSource;
    struct dispatch_source_s *writeSource;
    struct dispatch_source_s *readTimer;
    struct dispatch_source_s *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    WXOMTAGCDAsyncReadPacket *currentRead;
    WXOMTAGCDAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    WXOMTAGCDAsyncSocketPreBuffer *preBuffer;
    struct {
        long long version;
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType copyDescription;
    } streamContext;
    struct __CFReadStream *readStream;
    struct __CFWriteStream *writeStream;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
    double alternateAddressDelay;
}

+ (id)CRData;
+ (id)CRLFData;
+ (id)LFData;
+ (id)ZeroData;
+ (void)cfstreamThread;
+ (id)gaiError:(int)arg1;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (id)hostFromAddress:(id)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (void)ignore:(id)arg1;
+ (_Bool)isIPv4Address:(id)arg1;
+ (_Bool)isIPv6Address:(id)arg1;
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
+ (unsigned short)portFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (void)scheduleCFStreams:(id)arg1;
+ (void)startCFStreamThreadIfNeeded;
+ (void)stopCFStreamThreadIfNeeded;
+ (void)unscheduleCFStreams:(id)arg1;
+ (id)urlFromSockaddrUN:(const struct sockaddr_un *)arg1;
- (void).cxx_destruct;
- (_Bool)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
- (_Bool)acceptOnUrl:(id)arg1 error:(id *)arg2;
- (_Bool)addStreamsToRunLoop;
@property double alternateAddressDelay;
@property _Bool autoDisconnectOnClosedReadStream;
- (id)badConfigError:(id)arg1;
- (id)badParamError:(id)arg1;
- (_Bool)bindSocket:(int)arg1 toInterface:(id)arg2 error:(id *)arg3;
- (void)closeSocket:(int)arg1;
- (void)closeUnusedSocket:(int)arg1;
- (void)closeWithError:(id)arg1;
- (void)completeCurrentRead;
- (void)completeCurrentWrite;
- (void)connectSocket:(int)arg1 address:(id)arg2 stateIndex:(int)arg3;
- (id)connectTimeoutError;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToUrl:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
- (_Bool)connectWithAddressUN:(id)arg1 error:(id *)arg2;
@property(readonly) NSData *connectedAddress;
@property(readonly) NSString *connectedHost;
- (id)connectedHost4;
- (id)connectedHost6;
- (id)connectedHostFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
@property(readonly) unsigned short connectedPort;
- (unsigned short)connectedPort4;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
@property(readonly) NSURL *connectedUrl;
- (id)connectedUrlFromSocketUN:(int)arg1;
- (id)connectionClosedError;
- (_Bool)createReadAndWriteStream;
- (int)createSocket:(int)arg1 connectInterface:(id)arg2 errPtr:(id *)arg3;
- (void)dealloc;
@property __weak id <WXOMTAGCDAsyncSocketDelegate> delegate;
@property struct dispatch_queue_s *delegateQueue;
- (void)didConnect:(int)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)disconnect;
- (void)disconnectAfterReading;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (_Bool)doAccept:(int)arg1;
- (void)doConnectTimeout;
- (void)doReadData;
- (void)doReadEOF;
- (void)doReadTimeout;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)doWriteData;
- (void)doWriteTimeout;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (_Bool)enableBackgroundingOnSocket;
- (_Bool)enableBackgroundingOnSocketWithCaveat;
- (_Bool)enableBackgroundingOnSocketWithCaveat:(_Bool)arg1;
- (void)endConnectTimeout;
- (void)endCurrentRead;
- (void)endCurrentWrite;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (void)getDelegate:(id *)arg1 delegateQueue:(struct dispatch_queue_s **)arg2;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
- (id)getInterfaceAddressFromUrl:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2 socketQueue:(struct dispatch_queue_s *)arg3;
- (id)initWithSocketQueue:(struct dispatch_queue_s *)arg1;
@property(readonly) _Bool isConnected;
@property(readonly) _Bool isDisconnected;
@property(readonly) _Bool isIPv4;
@property(getter=isIPv4Enabled) _Bool IPv4Enabled;
@property(getter=isIPv4PreferredOverIPv6) _Bool IPv4PreferredOverIPv6;
@property(readonly) _Bool isIPv6;
@property(getter=isIPv6Enabled) _Bool IPv6Enabled;
@property(readonly) NSData *localAddress;
@property(readonly) NSString *localHost;
- (id)localHost4;
- (id)localHost6;
- (id)localHostFromSocket4:(int)arg1;
- (id)localHostFromSocket6:(int)arg1;
@property(readonly) unsigned short localPort;
- (unsigned short)localPort4;
- (unsigned short)localPort6;
- (unsigned short)localPortFromSocket4:(int)arg1;
- (unsigned short)localPortFromSocket6:(int)arg1;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (void)markSocketQueueTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)maybeClose;
- (void)maybeDequeueRead;
- (void)maybeDequeueWrite;
- (_Bool)openStreams;
- (id)otherError:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (_Bool)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (_Bool)preConnectWithUrl:(id)arg1 error:(id *)arg2;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (id)readMaxedOutError;
- (struct __CFReadStream *)readStream;
- (id)readTimeoutError;
- (_Bool)registerForStreamCallbacksIncludingReadWrite:(_Bool)arg1;
- (void)removeStreamsFromRunLoop;
- (void)resumeReadSource;
- (void)resumeWriteSource;
- (void)setDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2 synchronously:(_Bool)arg3;
- (void)setDelegate:(id)arg1 synchronously:(_Bool)arg2;
- (void)setDelegateQueue:(struct dispatch_queue_s *)arg1 synchronously:(_Bool)arg2;
@property(retain) id userData;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (int)socket4FD;
- (int)socket6FD;
- (int)socketFD;
- (void)startConnectTimeout:(double)arg1;
- (void)suspendReadSource;
- (void)suspendWriteSource;
- (void)synchronouslySetDelegate:(id)arg1;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)synchronouslySetDelegateQueue:(struct dispatch_queue_s *)arg1;
- (void)unmarkSocketQueueTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (struct __CFWriteStream *)writeStream;
- (id)writeTimeoutError;

@end
