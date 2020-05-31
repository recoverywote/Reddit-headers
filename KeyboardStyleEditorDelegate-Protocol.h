//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KeyboardStyleEditor, UIColor, UIFont;

@protocol KeyboardStyleEditorDelegate <NSObject>
- (void)keyboardStyleEditor:(KeyboardStyleEditor *)arg1 didSelectFontColor:(UIColor *)arg2;
- (void)keyboardStyleEditor:(KeyboardStyleEditor *)arg1 didSelectFontBackgroundColor:(UIColor *)arg2;
- (void)keyboardStyleEditor:(KeyboardStyleEditor *)arg1 didSelectFont:(UIFont *)arg2;
- (void)keyboardStyleEditorDidTapClose:(KeyboardStyleEditor *)arg1;
- (void)keyboardStyleEditorDidTapStyle:(KeyboardStyleEditor *)arg1;
- (void)keyboardStyleEditorDidTapKeyboard:(KeyboardStyleEditor *)arg1;
@end

