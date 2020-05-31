//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "CaptureCellContentViewProtocol-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BaseLabel, BaseTextField, CaptureContentTextEntry, CaptureScreen, NSString, TextFieldAccessoryButton;

@interface CaptureTextEntryView : BaseView <UITextFieldDelegate, ObjectObserverProtocol, CaptureCellContentViewProtocol>
{
    CaptureScreen *_screen;
    CaptureContentTextEntry *_content;
    BaseTextField *_textField;
    BaseLabel *_descriptionLabel;
    TextFieldAccessoryButton *_accessoryButton;
}

+ (double)heightForDescriptionString:(id)arg1;
+ (struct CGSize)calculatedSizeWithData:(id)arg1;
@property(retain, nonatomic) TextFieldAccessoryButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) BaseLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) BaseTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) CaptureContentTextEntry *content; // @synthesize content=_content;
@property(nonatomic) __weak CaptureScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)didTapRightViewIcon:(id)arg1;
- (void)prepareForReuse;
- (void)becomeFirstResponderIfNeeded;
- (void)layoutSubviews;
- (void)configureTextFieldRightView;
- (struct UIEdgeInsets)normalTextInsets;
- (void)configureWithContent:(id)arg1 screen:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

