//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGReportAttachmentRequest.h>

@class NSString;

@interface IBGCrashAttachmentRequest : IBGReportAttachmentRequest
{
    NSString *_attachmentURL;
}

@property(retain, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 attachmentPath:(id)arg2 reportID:(id)arg3 delegate:(id)arg4;

@end

