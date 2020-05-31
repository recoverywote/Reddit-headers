//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "BaseTextViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BaseLabel, BaseTextView, NSString, WarningLabel;
@protocol WarningTextViewDelegate;

@interface WarningTextView : BaseView <BaseTextViewDelegate, UITextViewDelegate>
{
    double _textViewHeight;
    long long _characterLengthWarningThreshold;
    long long _characterLengthLimit;
    id <WarningTextViewDelegate> _delegate;
    BaseLabel *_mainLabel;
    BaseTextView *_textView;
    WarningLabel *_charactersRemainingLabel;
}

@property(retain, nonatomic) WarningLabel *charactersRemainingLabel; // @synthesize charactersRemainingLabel=_charactersRemainingLabel;
@property(retain, nonatomic) BaseTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) __weak id <WarningTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long characterLengthLimit; // @synthesize characterLengthLimit=_characterLengthLimit;
@property(nonatomic) long long characterLengthWarningThreshold; // @synthesize characterLengthWarningThreshold=_characterLengthWarningThreshold;
@property(nonatomic) double textViewHeight; // @synthesize textViewHeight=_textViewHeight;
- (void).cxx_destruct;
- (_Bool)baseTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

