//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface Broadcast : NSObject
{
    NSString *_videoId;
    NSURL *_hlsURL;
    NSURL *_rtmpURL;
    NSURL *_rtmpConnectionURL;
    NSString *_streamerKey;
    NSString *_postTitle;
    NSString *_postId;
    NSURL *_shareURL;
    NSString *_postSharingPermalinkIncludingDomain;
}

@property(readonly, copy, nonatomic) NSString *postSharingPermalinkIncludingDomain; // @synthesize postSharingPermalinkIncludingDomain=_postSharingPermalinkIncludingDomain;
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(readonly, copy, nonatomic) NSString *postTitle; // @synthesize postTitle=_postTitle;
@property(readonly, copy, nonatomic) NSString *streamerKey; // @synthesize streamerKey=_streamerKey;
@property(readonly, copy, nonatomic) NSURL *rtmpConnectionURL; // @synthesize rtmpConnectionURL=_rtmpConnectionURL;
@property(readonly, copy, nonatomic) NSURL *rtmpURL; // @synthesize rtmpURL=_rtmpURL;
@property(readonly, copy, nonatomic) NSURL *hlsURL; // @synthesize hlsURL=_hlsURL;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

