//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LoaderContentView.h"

#import "StreamPlayerViewDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, AnalyticsActionInfo, AudioInstance, BaseButton, BaseImageView, BaseView, GradientView, NSDate, NSNumber, NSString, NSTimer, NSURL, PlayerButtonsOverlayView, PlayerProgressView, Post, StreamPlayerView;
@protocol PlayerViewDelegate, TheatrePlayerDelegate;

@interface HlsPlayerView : LoaderContentView <StreamPlayerViewDelegate>
{
    _Bool _shouldOverrideAndDisableAutoplay;
    _Bool _isGIFContent;
    _Bool _isFullscreen;
    _Bool _currentlyLoading;
    _Bool _isSubstantiallyVisible;
    _Bool _tapShouldShowControls;
    _Bool _forcePlay;
    _Bool _isUserScrubbing;
    _Bool _playAfterScrub;
    _Bool _videoControlsShouldBeHidden;
    _Bool _audioControlsShouldBeHidden;
    _Bool _pausedForBackgroundMode;
    _Bool _mutePreviewState;
    _Bool _overwriteExpandoHide;
    _Bool _initializationFailedDueToOffline;
    _Bool _resumeAfterBuffer;
    _Bool _initializationFailedDueTo404;
    id <PlayerViewDelegate> _delegate;
    id <TheatrePlayerDelegate> _theatrePlayerDelegate;
    Post *_post;
    Post *_shareSheetPost;
    BaseImageView *_muteImageView;
    NSString *_videoURLString;
    BaseImageView *_previewImageView;
    double _percentServedThisPage;
    double _lastTimestamp;
    double _maxTimeServed;
    double _maxTimeServedCumulative;
    double _percentServedCumulative;
    long long _timeToFirstFrame;
    NSDate *_loadStartTime;
    long long _retryAttempt;
    GradientView *_gradientView;
    BaseImageView *_collapseImageView;
    BaseImageView *_expandImageView;
    PlayerButtonsOverlayView *_playPauseImageView;
    BaseView *_detachedPreviewViewContainer;
    BaseView *_detachedPreviewView;
    PlayerProgressView *_progressView;
    BaseButton *_timeIndicatorButton;
    StreamPlayerView *_streamPlayerView;
    AudioInstance *_audioInstance;
    AVPlayerItem *_localPlayerItem;
    NSString *_previewImageURLString;
    NSString *_thumbnailVideoURLString;
    NSTimer *_progressBarTimer;
    NSTimer *_fileDoesNotExistRetryTimer;
    NSTimer *_RPANHeartbeatTimer;
    NSTimer *_RPANHeartbeatDelayTimer;
    NSString *_videoPostID;
    NSURL *_videoFileDiskURL;
    AnalyticsActionInfo *_actionInfo;
    struct CGSize _contentVideoSize;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _elapsed;
}

@property(retain, nonatomic) AnalyticsActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) NSURL *videoFileDiskURL; // @synthesize videoFileDiskURL=_videoFileDiskURL;
@property(copy, nonatomic) NSString *videoPostID; // @synthesize videoPostID=_videoPostID;
@property(retain, nonatomic) NSTimer *RPANHeartbeatDelayTimer; // @synthesize RPANHeartbeatDelayTimer=_RPANHeartbeatDelayTimer;
@property(retain, nonatomic) NSTimer *RPANHeartbeatTimer; // @synthesize RPANHeartbeatTimer=_RPANHeartbeatTimer;
@property(retain, nonatomic) NSTimer *fileDoesNotExistRetryTimer; // @synthesize fileDoesNotExistRetryTimer=_fileDoesNotExistRetryTimer;
@property(nonatomic) _Bool initializationFailedDueTo404; // @synthesize initializationFailedDueTo404=_initializationFailedDueTo404;
@property(retain, nonatomic) NSTimer *progressBarTimer; // @synthesize progressBarTimer=_progressBarTimer;
@property(retain, nonatomic) NSString *thumbnailVideoURLString; // @synthesize thumbnailVideoURLString=_thumbnailVideoURLString;
@property(copy, nonatomic) NSString *previewImageURLString; // @synthesize previewImageURLString=_previewImageURLString;
@property(nonatomic) _Bool resumeAfterBuffer; // @synthesize resumeAfterBuffer=_resumeAfterBuffer;
@property(nonatomic) struct CGSize contentVideoSize; // @synthesize contentVideoSize=_contentVideoSize;
@property(nonatomic) _Bool initializationFailedDueToOffline; // @synthesize initializationFailedDueToOffline=_initializationFailedDueToOffline;
@property(nonatomic) _Bool overwriteExpandoHide; // @synthesize overwriteExpandoHide=_overwriteExpandoHide;
@property(nonatomic) _Bool mutePreviewState; // @synthesize mutePreviewState=_mutePreviewState;
@property(nonatomic) _Bool pausedForBackgroundMode; // @synthesize pausedForBackgroundMode=_pausedForBackgroundMode;
@property(nonatomic) _Bool audioControlsShouldBeHidden; // @synthesize audioControlsShouldBeHidden=_audioControlsShouldBeHidden;
@property(nonatomic) _Bool videoControlsShouldBeHidden; // @synthesize videoControlsShouldBeHidden=_videoControlsShouldBeHidden;
@property(nonatomic) _Bool playAfterScrub; // @synthesize playAfterScrub=_playAfterScrub;
@property(nonatomic) _Bool isUserScrubbing; // @synthesize isUserScrubbing=_isUserScrubbing;
@property(retain, nonatomic) AVPlayerItem *localPlayerItem; // @synthesize localPlayerItem=_localPlayerItem;
@property(retain, nonatomic) AudioInstance *audioInstance; // @synthesize audioInstance=_audioInstance;
@property(retain, nonatomic) StreamPlayerView *streamPlayerView; // @synthesize streamPlayerView=_streamPlayerView;
@property(retain, nonatomic) BaseButton *timeIndicatorButton; // @synthesize timeIndicatorButton=_timeIndicatorButton;
@property(retain, nonatomic) PlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) BaseView *detachedPreviewView; // @synthesize detachedPreviewView=_detachedPreviewView;
@property(retain, nonatomic) BaseView *detachedPreviewViewContainer; // @synthesize detachedPreviewViewContainer=_detachedPreviewViewContainer;
@property(retain, nonatomic) PlayerButtonsOverlayView *playPauseImageView; // @synthesize playPauseImageView=_playPauseImageView;
@property(retain, nonatomic) BaseImageView *expandImageView; // @synthesize expandImageView=_expandImageView;
@property(retain, nonatomic) BaseImageView *collapseImageView; // @synthesize collapseImageView=_collapseImageView;
@property(retain, nonatomic) GradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) long long retryAttempt; // @synthesize retryAttempt=_retryAttempt;
@property(retain, nonatomic) NSDate *loadStartTime; // @synthesize loadStartTime=_loadStartTime;
@property(nonatomic) long long timeToFirstFrame; // @synthesize timeToFirstFrame=_timeToFirstFrame;
@property(nonatomic) double percentServedCumulative; // @synthesize percentServedCumulative=_percentServedCumulative;
@property(nonatomic) double maxTimeServedCumulative; // @synthesize maxTimeServedCumulative=_maxTimeServedCumulative;
@property(nonatomic) double maxTimeServed; // @synthesize maxTimeServed=_maxTimeServed;
@property(nonatomic) double lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(nonatomic) double percentServedThisPage; // @synthesize percentServedThisPage=_percentServedThisPage;
@property(nonatomic) CDStruct_1b6d18a9 elapsed; // @synthesize elapsed=_elapsed;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool forcePlay; // @synthesize forcePlay=_forcePlay;
@property(nonatomic) _Bool tapShouldShowControls; // @synthesize tapShouldShowControls=_tapShouldShowControls;
@property(nonatomic) _Bool isSubstantiallyVisible; // @synthesize isSubstantiallyVisible=_isSubstantiallyVisible;
@property(nonatomic) _Bool currentlyLoading; // @synthesize currentlyLoading=_currentlyLoading;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) _Bool isGIFContent; // @synthesize isGIFContent=_isGIFContent;
@property(nonatomic) _Bool shouldOverrideAndDisableAutoplay; // @synthesize shouldOverrideAndDisableAutoplay=_shouldOverrideAndDisableAutoplay;
@property(retain, nonatomic) BaseImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(retain, nonatomic) BaseImageView *muteImageView; // @synthesize muteImageView=_muteImageView;
@property(retain, nonatomic) Post *shareSheetPost; // @synthesize shareSheetPost=_shareSheetPost;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak id <TheatrePlayerDelegate> theatrePlayerDelegate; // @synthesize theatrePlayerDelegate=_theatrePlayerDelegate;
@property(nonatomic) __weak id <PlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)defaultAnalyticsEvent;
- (_Bool)parentIsCarouselView;
- (_Bool)needsToBeConfigured;
- (void)streamPlayerRequestMute:(id)arg1;
- (void)streamPlayerView:(id)arg1 didUpdateLoadedTimeRanges:(id)arg2;
- (void)streamPlayerView:(id)arg1 didUpdateElapsedTime:(CDStruct_1b6d18a9)arg2;
- (void)streamPlayerWillDetach:(id)arg1;
- (void)streamPlayerWillReparent:(id)arg1;
- (void)createSnapshotOfVideo;
- (void)configureTimeIndicatorForStreamPlayerView:(id)arg1 withDuration:(CDStruct_1b6d18a9)arg2;
- (void)streamPlayerView:(id)arg1 durationDidChange:(CDStruct_1b6d18a9)arg2;
- (void)streamPlayerFinishPreloading:(id)arg1;
- (void)streamPlayerDidFailToLoad:(id)arg1 item:(id)arg2;
- (void)streamPlayerDidAudioDetectionFinish:(id)arg1 hasAudioTracks:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)resetTransitionState;
- (void)handleAppDidEnterBackground;
- (void)handleAppDidEnterForeground;
- (_Bool)isPortrait;
- (struct CGSize)contentSize;
- (void)hideExpandoView:(_Bool)arg1;
- (void)hideMuteView:(_Bool)arg1;
- (void)initializePlayPauseView;
- (void)reachedEndActionWithAnimation:(_Bool)arg1;
- (void)streamPlayerReachedEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 playAfterSeek:(_Bool)arg2;
- (void)seekToLatestTimeIfLive;
- (void)stopRPANHeartbeatDelayTimer;
- (void)stopRPANHeartbeatTimer;
- (void)startRPANHeartbeatTimer;
- (void)updateMuteImage:(_Bool)arg1;
- (void)requestVideoPlayer;
- (_Bool)didTapPlayOrMute:(struct CGPoint)arg1;
- (void)collapseTapped:(id)arg1;
- (void)expandTapped:(id)arg1;
- (void)expandAction;
- (void)muteTapped:(id)arg1;
- (void)timeIndicatorButtonTapped;
- (_Bool)muted;
- (void)changeMutedState:(_Bool)arg1;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly, nonatomic) AVPlayer *player;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
- (void)stop;
- (void)playWithPauseIcon;
- (void)pauseWithPlayIcon;
- (void)autoPlayAndDontShowIcon;
- (void)play;
- (void)configureThumbnailVideoURLString:(id)arg1;
- (void)fadeToFullscreenCollapseIcon:(_Bool)arg1;
- (void)fadeToFullscreenExpandIcon:(_Bool)arg1;
- (void)start404RetryTimer;
- (void)startProgressBarMinimizeTimer;
- (void)minimizeProgressBarFromTimer:(id)arg1;
- (void)cancelProgressBarMinimizeTimer;
- (void)toggleFullscreenControls;
- (void)toggleControls;
- (_Bool)isVideoControlsHidden;
- (void)hideControlsAnimated:(_Bool)arg1;
- (void)hideControlsAfterTransition;
- (void)showControlsAll;
- (void)showControlsPartial;
- (void)showControlsAnimated:(_Bool)arg1;
- (void)displayPreviewImage:(id)arg1;
- (void)prepareForReuse;
- (void)clearPlayerData;
- (void)layoutSubviews;
- (void)layoutPlayPauseImageView;
- (void)updatePlayPauseState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)applyStoredMetadata;
- (void)storeMetadata;
- (void)playerViewExited;
- (void)willMoveToSuperview:(id)arg1;
- (void)didPassVisibilityThreshold;
@property(readonly, nonatomic) _Bool isAutoPlayDisabled;
- (void)noLongerPastVisibilityThreshold;
- (void)didEndDisplaying;
- (void)didBecomeFullyVisible;
- (void)configureWithVideoID:(id)arg1 videoURL:(id)arg2 thumbnailURL:(id)arg3 previewImageURL:(id)arg4 contentSize:(struct CGSize)arg5 isGif:(_Bool)arg6 shareSheetPost:(id)arg7;
- (void)configureWithTheatreMediaItem:(id)arg1;
- (void)configureWithPost:(id)arg1 videoId:(id)arg2 onlyShowPreviewImage:(_Bool)arg3;
- (void)configureWithPost:(id)arg1;
- (void)checkReparentStreamPost;
- (void)configurePlayerWithURL:(id)arg1;
- (void)configureWithAsset:(id)arg1 videoId:(id)arg2;
- (void)preparePlayerForConfiguration;
- (void)configurePlayerWithURL:(id)arg1 withVideoId:(id)arg2;
- (void)retry;
- (void)loadVideoUrl;
- (void)removeSnapshotIfPresent;
- (void)disablePlayPauseView:(_Bool)arg1;
- (void)loadAndPlay;
- (void)reachabilityDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (CDStruct_1b6d18a9)playerEventsElapsedTime;
- (double)eventElapsedTimeValue;
- (double)eventSafeDuration;
- (id)videoOrientation;
- (void)calculateMaxTimeServed;
- (double)percentServed;
- (double)getTimeToFirstFrameIfLoaded;
- (double)getTimeToFirstFrame;
- (double)getMaxTimeServedAndResetTimer;
- (double)getMaxTimeServed;
- (void)analyticsSendCallToAction;
- (void)analyticsSendChangePageType;
- (void)analyticsSendServedVideo;
- (id)getMediaTimer;
- (void)analyticsSendPinnedPausedClosed;
- (void)analyticsSendPinnedScrollActivated;
- (void)analyticsSendViewAutoplay;
- (void)analyticsSendScrollPause;
- (void)analyticsSendReplay;
- (void)analyticSendRotateFullscreen;
- (void)analyticSendFullscreen;
- (void)analyticsSendSave;
- (void)analyticsSendOverflow;
- (void)analyticsSendUnmute;
- (void)analyticsSendMute;
- (void)analyticsSendSeek;
- (void)analyticsSendPause;
- (void)analyticsSendPlay;
- (void)analyticsSendFailInitWithError:(id)arg1;
- (void)analyticsSendSuccessfulInit;
@property(readonly, nonatomic) NSNumber *videoTime;
@property(readonly, nonatomic) NSNumber *durationTracker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

