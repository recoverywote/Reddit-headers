//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class AFHTTPSessionManager, NSString, RedditService;

@interface UploadRequestManager : NSObject <NSXMLParserDelegate>
{
    RedditService *_service;
    AFHTTPSessionManager *_uploadManager;
    long long _uploadCount;
}

@property(nonatomic) long long uploadCount; // @synthesize uploadCount=_uploadCount;
@property(readonly, nonatomic) AFHTTPSessionManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(nonatomic) __weak RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)uploadToAmazonS3:(id)arg1 attachPost:(id)arg2 withFilepath:(id)arg3 successHandler:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (void)uploadVideoFilePath:(id)arg1 attachPost:(id)arg2 successHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)uploadImageFilePath:(id)arg1 apiUrl:(id)arg2 parameters:(id)arg3 successHandler:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
- (void)uploadImageFilePath:(id)arg1 successHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool isUploading;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

