//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CommentTreeNodeCommandOptions, CommentTreeNodeHeaderOptions;

@interface CommentTreeNodeOptions : NSObject
{
    _Bool _isInModQueue;
    _Bool _isInModMode;
    _Bool _isModerator;
    _Bool _isPanningEnabled;
    _Bool _shouldIgnoreLeveling;
    _Bool _shouldHighlightBackground;
    _Bool _shouldShowOverlay;
    _Bool _shouldHighlightBasedOnAwards;
    _Bool _shouldShowHighlightedAwardAnimation;
    CommentTreeNodeHeaderOptions *_headerOptions;
    CommentTreeNodeCommandOptions *_commandOptions;
}

+ (id)defaultCommentTreeNodeOptions;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowHighlightedAwardAnimation; // @synthesize shouldShowHighlightedAwardAnimation=_shouldShowHighlightedAwardAnimation;
@property(nonatomic) _Bool shouldHighlightBasedOnAwards; // @synthesize shouldHighlightBasedOnAwards=_shouldHighlightBasedOnAwards;
@property(nonatomic) _Bool shouldShowOverlay; // @synthesize shouldShowOverlay=_shouldShowOverlay;
@property(nonatomic) _Bool shouldHighlightBackground; // @synthesize shouldHighlightBackground=_shouldHighlightBackground;
@property(nonatomic) _Bool shouldIgnoreLeveling; // @synthesize shouldIgnoreLeveling=_shouldIgnoreLeveling;
@property(nonatomic) _Bool isPanningEnabled; // @synthesize isPanningEnabled=_isPanningEnabled;
@property(nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(nonatomic) _Bool isInModMode; // @synthesize isInModMode=_isInModMode;
@property(nonatomic) _Bool isInModQueue; // @synthesize isInModQueue=_isInModQueue;
@property(retain, nonatomic) CommentTreeNodeCommandOptions *commandOptions; // @synthesize commandOptions=_commandOptions;
@property(retain, nonatomic) CommentTreeNodeHeaderOptions *headerOptions; // @synthesize headerOptions=_headerOptions;
- (id)init;

@end

