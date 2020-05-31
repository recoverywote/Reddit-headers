//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSDictionary;
@protocol IBGPushNotificationRegisterationRequestDelegate;

@interface IBGPushNotificationRegisterationRequest : IBGNetworkRequest
{
    NSDictionary *_parameters;
    id <IBGPushNotificationRegisterationRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <IBGPushNotificationRegisterationRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;

@end

