//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Branch/BNCAppleAdClientProtocol-Protocol.h>

@class NSString;

@interface BNCAppleAdClient : NSObject <BNCAppleAdClientProtocol>
{
    Class _adClientClass;
    SEL _adClientSharedClient;
    SEL _adClientRequestAttribution;
    id _adClient;
}

@property(retain, nonatomic) id adClient; // @synthesize adClient=_adClient;
@property(nonatomic) SEL adClientRequestAttribution; // @synthesize adClientRequestAttribution=_adClientRequestAttribution;
@property(nonatomic) SEL adClientSharedClient; // @synthesize adClientSharedClient=_adClientSharedClient;
@property(retain, nonatomic) Class adClientClass; // @synthesize adClientClass=_adClientClass;
- (void).cxx_destruct;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isAdClientAvailable;
- (id)loadAdClient;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

