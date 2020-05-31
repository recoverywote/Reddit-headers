//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSString;
@protocol IBGSurveysRequestDelegate;

@interface IBGSurveysRequest : IBGNetworkRequest
{
    id <IBGSurveysRequestDelegate> _delegate;
    NSString *_dataUrl;
    NSString *_requestedLocale;
}

@property(copy, nonatomic) NSString *requestedLocale; // @synthesize requestedLocale=_requestedLocale;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(nonatomic) __weak id <IBGSurveysRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initForDefaultLocaleWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 forLocale:(id)arg2;

@end

