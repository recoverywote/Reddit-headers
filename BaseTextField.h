//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import <RedditUI/RUIThemeUpdateCallbackProtocol-Protocol.h>

@class NSString, UIView;

@interface BaseTextField : UITextField <RUIThemeUpdateCallbackProtocol>
{
    _Bool _disableSpecialCharacters;
    struct UIEdgeInsets _textInsets;
}

+ (id)standardTextField;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) _Bool disableSpecialCharacters; // @synthesize disableSpecialCharacters=_disableSpecialCharacters;
- (void)textFieldDidChange:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) UIView *inputAccessoryView; // @dynamic inputAccessoryView;
@property(readonly) Class superclass;

@end

