//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MUXSDKStats/MUXSDKPlayDispatchDelegate-Protocol.h>

@class NSDictionary, NSMutableSet;
@protocol MUXSDKCustomerPlayerDataStoring, MUXSDKCustomerVideoDataStoring;

@interface MUXSDKPlayerBindingManager : NSObject <MUXSDKPlayDispatchDelegate>
{
    id <MUXSDKCustomerPlayerDataStoring> _customerPlayerDataStore;
    id <MUXSDKCustomerVideoDataStoring> _customerVideoDataStore;
    NSDictionary *_viewControllers;
    NSMutableSet *_playerReadyBindings;
}

@property(retain, nonatomic) NSMutableSet *playerReadyBindings; // @synthesize playerReadyBindings=_playerReadyBindings;
@property(nonatomic) __weak NSDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <MUXSDKCustomerVideoDataStoring> customerVideoDataStore; // @synthesize customerVideoDataStore=_customerVideoDataStore;
@property(nonatomic) __weak id <MUXSDKCustomerPlayerDataStoring> customerPlayerDataStore; // @synthesize customerPlayerDataStore=_customerPlayerDataStore;
- (void).cxx_destruct;
- (void)videoChangedForPlayer:(id)arg1;
- (void)playbackStartedForPlayer:(id)arg1;
- (void)dispatchDataEventForPlayerName:(id)arg1 playerData:(id)arg2 videoData:(id)arg3 videoChange:(_Bool)arg4;
- (void)newViewForPlayer:(id)arg1;
- (_Bool)hasInitializedPlayerBinding:(id)arg1;
- (void)onPlayerDestroyed:(id)arg1;
- (id)init;

@end

