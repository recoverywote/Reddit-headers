//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASNetworkImageNode.h>

@class ASDisplayNode, AVAsset, AVAudioMix, AVPlayer, AVPlayerItem, AVPlayerLayer, AVVideoComposition, NSString, NSURL;
@protocol ASVideoNodeDelegate><ASNetworkImageNodeDelegate;

@interface ASVideoNode : ASNetworkImageNode
{
    struct {
        unsigned int delegateVideNodeShouldChangePlayerStateTo:1;
        unsigned int delegateVideoDidPlayToEnd:1;
        unsigned int delegateDidTapVideoNode:1;
        unsigned int delegateVideoNodeWillChangePlayerStateToState:1;
        unsigned int delegateVideoNodeDidPlayToTimeInterval:1;
        unsigned int delegateVideoNodeDidStartInitialLoading:1;
        unsigned int delegateVideoNodeDidFinishInitialLoading:1;
        unsigned int delegateVideoNodeDidSetCurrentItem:1;
        unsigned int delegateVideoNodeDidStallAtTimeInterval:1;
        unsigned int delegateVideoNodeDidRecoverFromStall:1;
        unsigned int delegateVideoNodeDidFailToLoadValueForKey:1;
    } _delegateFlags;
    _Bool _shouldBePlaying;
    _Bool _shouldAutorepeat;
    _Bool _shouldAutoplay;
    _Bool _shouldAggressivelyRecoverFromStall;
    _Bool _muted;
    long long _playerState;
    AVAsset *_asset;
    NSURL *_assetURL;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    AVPlayerItem *_currentPlayerItem;
    AVPlayer *_player;
    id _timeObserver;
    int _periodicTimeObserverTimescale;
    CDStruct_1b6d18a9 _timeObserverInterval;
    CDStruct_1b6d18a9 _lastPlaybackTime;
    ASDisplayNode *_playerNode;
    NSString *_gravity;
}

- (void).cxx_destruct;
@property int periodicTimeObserverTimescale; // @synthesize periodicTimeObserverTimescale=_periodicTimeObserverTimescale;
@property(readonly) long long playerState; // @synthesize playerState=_playerState;
@property _Bool shouldAggressivelyRecoverFromStall; // @synthesize shouldAggressivelyRecoverFromStall=_shouldAggressivelyRecoverFromStall;
@property _Bool shouldAutorepeat; // @synthesize shouldAutorepeat=_shouldAutorepeat;
@property _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
- (void)dealloc;
- (void)setShouldBePlaying:(_Bool)arg1;
- (_Bool)shouldBePlaying;
- (void)setPlayer:(id)arg1;
- (void)setPlayerNode:(id)arg1;
- (id)playerNode;
- (void)setCurrentItem:(id)arg1;
@property(readonly) AVPlayerItem *currentItem;
- (void)errorWhilePlaying:(id)arg1;
- (void)videoNodeDidStall:(id)arg1;
- (void)didPlayToEnd:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)resetToPlaceholder;
- (_Bool)isStateChangeValid:(long long)arg1;
- (_Bool)isPlaying;
- (void)pause;
- (_Bool)ready;
- (void)play;
@property _Bool muted;
@property(copy) NSString *gravity;
@property __weak id <ASVideoNodeDelegate><ASNetworkImageNodeDelegate> delegate; // @dynamic delegate;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly) AVPlayer *player;
@property(retain) AVAudioMix *audioMix;
@property(retain) AVVideoComposition *videoComposition;
- (void)setAndFetchAsset:(id)arg1 url:(id)arg2;
@property(retain) AVAsset *asset;
@property(copy) NSURL *assetURL;
- (void)setPlayerState:(long long)arg1;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)didExitPreloadState;
- (void)periodicTimeObserver:(CDStruct_1b6d18a9)arg1;
- (void)didEnterPreloadState;
- (void)tapped;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setVideoPlaceholderImage:(id)arg1;
- (void)imageAtTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generatePlaceholderImage;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)removePlayerObservers:(id)arg1;
- (void)addPlayerObservers:(id)arg1;
- (void)removePlayerItemObservers:(id)arg1;
- (void)addPlayerItemObservers:(id)arg1;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (id)constructPlayerItem;
- (id)constructPlayerNode;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;

@end

