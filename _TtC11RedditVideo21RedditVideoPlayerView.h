//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _TtC11RedditVideo15RedditVideoView;

@interface _TtC11RedditVideo21RedditVideoPlayerView : UIView
{
    // Error parsing type: , name: redditVideoView
    // Error parsing type: , name: videoOverlayView
    // Error parsing type: , name: tapAction
    // Error parsing type: , name: onDidTapView
    // Error parsing type: , name: debugLabel
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTapDebug;
- (void)didExitPlayableVisibility;
- (void)didEnterPlayableVisibility;
- (void)pause;
- (void)play;
- (void)preload;
- (void)refreshVideoOverlay;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType onDidTapView;
@property(nonatomic, readonly) _TtC11RedditVideo15RedditVideoView *redditVideoView; // @synthesize redditVideoView;

@end

