//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVURLAsset, HLSAssetDownloadSession, HLSPlaylist, NSUUID;

@interface HLSAsset : NSObject
{
    HLSPlaylist *_playlist;
    AVURLAsset *_asset;
    HLSAssetDownloadSession *_downloadSession;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HLSAssetDownloadSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(readonly, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) HLSPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (id)initWithPlaylist:(id)arg1 asset:(id)arg2;

@end

