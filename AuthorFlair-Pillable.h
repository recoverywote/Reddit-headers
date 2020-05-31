//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/AuthorFlair.h>

#import "Pillable-Protocol.h"

@class NSString, NSURL;

@interface AuthorFlair (Pillable) <Pillable>
- (id)pillAttributedType;
- (id)pillAttributedStringForAttributes:(id)arg1 pillTextBuilder:(id)arg2 imagesLoaded:(CDUnknownBlockType)arg3;
- (id)pillRichText;
- (id)pillTextColor;
- (id)pillBackgroundColor;
- (id)pillText;

// Remaining properties
@property(readonly, nonatomic) NSURL *bannerImageURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptionString;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *titleString;
@end

