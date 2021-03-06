//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ContentImageViewDelegate-Protocol.h"
#import "FeedPostAwardsNodeDelegate-Protocol.h"
#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseLabel, BaseTextView, FeedPostHlsVideoView, FeedPostImageView, FeedPostOptions, FeedPostThumbnailView, FeedPostVideoView, FeedPostYouTubeEmbeddedView, IntrinsicSizeNodeWrapper, NSString, Post, UITextView, _TtC6Reddit18FeedPostAwardsNode;
@protocol FeedPostCrosspostViewDelegate, FeedPostImageViewDelegate><FeedPostVideoViewDelegate><FeedPostHlsVideoViewDelegate><FeedPostYouTubeEmbeddedViewDelegate><FeedPostAwardsNodeDelegate, ViewContext;

@interface FeedPostCrosspostView : BaseView <RUIThemeUpdateCallbackProtocol, ContentImageViewDelegate, FeedPostAwardsNodeDelegate>
{
    id <FeedPostCrosspostViewDelegate> _delegate;
    Post *_parentPost;
    Post *_crosspost;
    FeedPostOptions *_options;
    BaseTextView *_headerTextView;
    IntrinsicSizeNodeWrapper *_awardsWrapper;
    _TtC6Reddit18FeedPostAwardsNode *_awardsNode;
    UITextView *_textView;
    FeedPostThumbnailView *_thumbnailImageView;
    FeedPostImageView *_imageView;
    FeedPostVideoView *_videoView;
    FeedPostHlsVideoView *_feedPostHlsVideoView;
    FeedPostYouTubeEmbeddedView *_youTubeEmbeddedView;
    BaseLabel *_metadataLabel;
    id <FeedPostImageViewDelegate><FeedPostVideoViewDelegate><FeedPostHlsVideoViewDelegate><FeedPostYouTubeEmbeddedViewDelegate><FeedPostAwardsNodeDelegate> _crosspostContentViewsDelegate;
    id <ViewContext> _viewContext;
}

+ (_Bool)shouldShowThumbnailForPost:(id)arg1 parentPost:(id)arg2 useCompactView:(_Bool)arg3;
+ (double)calculatedHeightForViewContext:(id)arg1 width:(double)arg2 withParentPost:(id)arg3 crosspost:(id)arg4 withFeedPostOptions:(id)arg5 delegate:(id)arg6;
+ (_Bool)shouldForceCompactViewForCrosspost:(id)arg1 withOptions:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) __weak id <FeedPostImageViewDelegate><FeedPostVideoViewDelegate><FeedPostHlsVideoViewDelegate><FeedPostYouTubeEmbeddedViewDelegate><FeedPostAwardsNodeDelegate> crosspostContentViewsDelegate; // @synthesize crosspostContentViewsDelegate=_crosspostContentViewsDelegate;
@property(retain, nonatomic) BaseLabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) FeedPostYouTubeEmbeddedView *youTubeEmbeddedView; // @synthesize youTubeEmbeddedView=_youTubeEmbeddedView;
@property(retain, nonatomic) FeedPostHlsVideoView *feedPostHlsVideoView; // @synthesize feedPostHlsVideoView=_feedPostHlsVideoView;
@property(retain, nonatomic) FeedPostVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) FeedPostImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FeedPostThumbnailView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) _TtC6Reddit18FeedPostAwardsNode *awardsNode; // @synthesize awardsNode=_awardsNode;
@property(retain, nonatomic) IntrinsicSizeNodeWrapper *awardsWrapper; // @synthesize awardsWrapper=_awardsWrapper;
@property(retain, nonatomic) BaseTextView *headerTextView; // @synthesize headerTextView=_headerTextView;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) Post *crosspost; // @synthesize crosspost=_crosspost;
@property(retain, nonatomic) Post *parentPost; // @synthesize parentPost=_parentPost;
@property(nonatomic) __weak id <FeedPostCrosspostViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedPostAwardsNodeNeedsLayoutUpdate:(id)arg1;
- (void)feedPostAwardsNode:(id)arg1 didTapAwardsForPost:(id)arg2 award:(id)arg3;
- (void)contentImageViewDidTapImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)themeDidChange:(id)arg1;
- (void)didBecomeFullyVisible;
- (void)noLongerPastVisibilityThreshold;
- (void)didPassVisibilityThreshold;
- (void)didEndDisplaying;
- (void)willBeginDisplaying;
- (void)didTapPost:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool shouldForceCompactView;
- (void)prepareForReuse;
- (_Bool)isValidCrosspost;
- (void)configureWithParentPost:(id)arg1 crosspost:(id)arg2 withFeedPostOptions:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)initWithViewContext:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithViewContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

