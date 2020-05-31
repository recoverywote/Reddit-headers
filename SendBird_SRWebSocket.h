//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SendBirdSDK/NSStreamDelegate-Protocol.h>

@class NSArray, NSInputStream, NSMutableArray, NSMutableData, NSMutableSet, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLRequest, SendBird_SRDelegateController, SendBird_SRIOConsumerPool, SendBird_SRProxyConnect, SendBird_SRSecurityPolicy;
@protocol OS_dispatch_data, OS_dispatch_queue, SendBird_SRWebSocketDelegate;

@interface SendBird_SRWebSocket : NSObject <NSStreamDelegate>
{
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } *_kvoLock;
    int _propertyLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_data> *_readBuffer;
    unsigned long long _readBufferOffset;
    NSObject<OS_dispatch_data> *_outputBuffer;
    unsigned long long _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long long _currentFrameCount;
    unsigned long long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    SendBird_SRSecurityPolicy *_securityPolicy;
    _Bool _requestRequiresSSL;
    _Bool _streamSecurityValidated;
    unsigned char _currentReadMaskKey[4];
    unsigned long long _currentReadMaskOffset;
    _Bool _closeWhenFinishedWriting;
    _Bool _failed;
    NSURLRequest *_urlRequest;
    _Bool _sentClose;
    _Bool _didFail;
    _Bool _cleanupScheduled;
    int _closeCode;
    _Bool _isPumping;
    NSMutableSet *_scheduledRunloops;
    SendBird_SRWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    SendBird_SRIOConsumerPool *_consumerPool;
    SendBird_SRProxyConnect *_proxyConnect;
    _Bool _allowsUntrustedSSLCertificates;
    long long _readyState;
    NSURL *_url;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    NSArray *_requestCookies;
    NSString *_protocol;
    SendBird_SRDelegateController *_delegateController;
}

+ (_Bool)automaticallyNotifiesObserversOfReadyState;
@property(readonly, nonatomic) SendBird_SRDelegateController *delegateController; // @synthesize delegateController=_delegateController;
@property(nonatomic) _Bool allowsUntrustedSSLCertificates; // @synthesize allowsUntrustedSSLCertificates=_allowsUntrustedSSLCertificates;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSArray *requestCookies; // @synthesize requestCookies=_requestCookies;
@property(readonly, nonatomic) struct __CFHTTPMessage *receivedHTTPHeaders; // @synthesize receivedHTTPHeaders=_receivedHTTPHeaders;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property(nonatomic) __weak id <SendBird_SRWebSocketDelegate> delegate;
- (void)safeHandleEvent:(unsigned long long)arg1 stream:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendFrameWithOpcode:(long long)arg1 data:(id)arg2;
- (void)_pumpScanner;
- (_Bool)_innerPumpScanner;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_readUntilHeaderCompleteWithCallback:(CDUnknownBlockType)arg1;
- (void)_cleanupSelfReference:(id)arg1;
- (void)_scheduleCleanup;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2 dataLength:(unsigned long long)arg3;
- (void)_addConsumerWithDataLength:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 readToCurrentFrame:(_Bool)arg3 unmaskBytes:(_Bool)arg4;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_pumpWriting;
- (void)_readFrameNew;
- (void)_readFrameContinue;
- (void)_handleFrameHeader:(CDStruct_6a6a01a4)arg1 curData:(id)arg2;
- (void)_handleFrameWithData:(id)arg1 opCode:(long long)arg2;
- (void)closeConnection;
- (void)handleCloseWithData:(id)arg1;
- (void)handlePong:(id)arg1;
- (void)_handlePingWithData:(id)arg1;
- (void)forceDisconnect;
- (_Bool)sendPing:(id)arg1 error:(id *)arg2;
- (_Bool)sendDataNoCopy:(id)arg1 error:(id *)arg2;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
- (_Bool)sendString:(id)arg1 error:(id *)arg2;
- (void)send:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_closeWithProtocolError:(id)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)close;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_updateSecureStreamOptions;
- (void)didConnect;
- (void)_readHTTPHeader;
- (void)_HTTPHeadersDidFinish;
- (_Bool)_checkHandshake:(struct __CFHTTPMessage *)arg1;
- (void)_connectionDoneWithError:(id)arg1 readStream:(id)arg2 writeStream:(id)arg3;
- (void)open;
@property long long readyState; // @synthesize readyState=_readyState;
- (void)dealloc;
- (void)assertOnWorkQueue;
- (id)initWithURL:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(_Bool)arg3;
- (id)initWithURL:(id)arg1 securityPolicy:(id)arg2;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;
- (id)initWithURLRequest:(id)arg1 securityPolicy:(id)arg2;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2 allowsUntrustedSSLCertificates:(_Bool)arg3;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2 securityPolicy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

