//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGCache.h>

@class NSMutableArray;

@interface IBGVideoCache : IBGCache
{
    NSMutableArray *_cachedModels;
}

@property(retain, nonatomic) NSMutableArray *cachedModels; // @synthesize cachedModels=_cachedModels;
- (void).cxx_destruct;
- (void)unpersistAll;
- (void)removeNotLinkedScreenshots;
- (void)removeNotAttachedVideos;
- (void)removeVideoWithIdentfier:(id)arg1;
- (id)videoForIdentifier:(id)arg1;
- (id)cacheDiskPath;

@end
