//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAggregateAssetDownloadTask, HLSPlaylist, NSMutableSet;

@interface HLSAssetDownload : NSObject
{
    HLSPlaylist *_playlist;
    AVAggregateAssetDownloadTask *_task;
    NSMutableSet *_assetIdentifiers;
}

@property(readonly, nonatomic) NSMutableSet *assetIdentifiers; // @synthesize assetIdentifiers=_assetIdentifiers;
@property(readonly, nonatomic) AVAggregateAssetDownloadTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) HLSPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (id)initWithPlaylist:(id)arg1 task:(id)arg2;

@end

