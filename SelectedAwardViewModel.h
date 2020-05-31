//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSNumber, NSString, NSURL, UIColor, UIImage;

@interface SelectedAwardViewModel : NSObject
{
    _Bool _shouldShowChatBox;
    _Bool _isChatBoxEnabled;
    _Bool _isProcessing;
    _Bool _enableActionButton;
    _Bool _enableEditOptions;
    _Bool _shouldHideOptionsInfo;
    _Bool _shouldHidePrice;
    _Bool _shouldUpdateActionButtonBackground;
    NSString *_name;
    NSURL *_iconImageURL;
    NSAttributedString *_attributedPrice;
    NSString *_timeLeftText;
    NSAttributedString *_itemDescription;
    NSString *_optionsText;
    UIImage *_optionsIcon;
    NSString *_actionButtonText;
    NSString *_awardInfoText;
    unsigned long long _awardInfoIconType;
    UIImage *_defaultSubredditIcon;
    UIColor *_subredditColor;
    NSURL *_subredditIconURL;
    NSNumber *_subredditCoins;
    unsigned long long _chatMessageLengthLimit;
    NSString *_chatPlaceholder;
}

@property(readonly, nonatomic) _Bool shouldUpdateActionButtonBackground; // @synthesize shouldUpdateActionButtonBackground=_shouldUpdateActionButtonBackground;
@property(readonly, nonatomic) _Bool shouldHidePrice; // @synthesize shouldHidePrice=_shouldHidePrice;
@property(readonly, nonatomic) _Bool shouldHideOptionsInfo; // @synthesize shouldHideOptionsInfo=_shouldHideOptionsInfo;
@property(readonly, nonatomic) _Bool enableEditOptions; // @synthesize enableEditOptions=_enableEditOptions;
@property(readonly, nonatomic) _Bool enableActionButton; // @synthesize enableActionButton=_enableActionButton;
@property(readonly, nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(readonly, nonatomic) NSString *chatPlaceholder; // @synthesize chatPlaceholder=_chatPlaceholder;
@property(readonly, nonatomic) unsigned long long chatMessageLengthLimit; // @synthesize chatMessageLengthLimit=_chatMessageLengthLimit;
@property(readonly, nonatomic) _Bool isChatBoxEnabled; // @synthesize isChatBoxEnabled=_isChatBoxEnabled;
@property(readonly, nonatomic) _Bool shouldShowChatBox; // @synthesize shouldShowChatBox=_shouldShowChatBox;
@property(readonly, nonatomic) NSNumber *subredditCoins; // @synthesize subredditCoins=_subredditCoins;
@property(readonly, nonatomic) NSURL *subredditIconURL; // @synthesize subredditIconURL=_subredditIconURL;
@property(readonly, nonatomic) UIColor *subredditColor; // @synthesize subredditColor=_subredditColor;
@property(readonly, nonatomic) UIImage *defaultSubredditIcon; // @synthesize defaultSubredditIcon=_defaultSubredditIcon;
@property(readonly, nonatomic) unsigned long long awardInfoIconType; // @synthesize awardInfoIconType=_awardInfoIconType;
@property(readonly, nonatomic) NSString *awardInfoText; // @synthesize awardInfoText=_awardInfoText;
@property(readonly, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(readonly, nonatomic) UIImage *optionsIcon; // @synthesize optionsIcon=_optionsIcon;
@property(readonly, nonatomic) NSString *optionsText; // @synthesize optionsText=_optionsText;
@property(readonly, nonatomic) NSAttributedString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSString *timeLeftText; // @synthesize timeLeftText=_timeLeftText;
@property(readonly, nonatomic) NSAttributedString *attributedPrice; // @synthesize attributedPrice=_attributedPrice;
@property(readonly, nonatomic) NSURL *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithAward:(id)arg1 subreddit:(id)arg2 subredditCoins:(id)arg3 target:(unsigned long long)arg4 options:(unsigned long long)arg5;

@end

