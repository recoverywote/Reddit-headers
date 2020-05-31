//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSParagraphStyle, UIColor, UIFont;

@interface RichTextConfig : NSObject
{
    UIFont *_codeFont;
    UIFont *_boldFont;
    UIFont *_italicFont;
    UIFont *_boldItalicFont;
    UIFont *_paragraphFont;
    UIFont *_tableHeaderFont;
    UIColor *_tableRowColor;
    UIColor *_regularTextColor;
    UIColor *_codeSpanBackgroundColor;
    UIColor *_spoilerExposedBackgroundColor;
    UIColor *_spoilerObfuscatedBackgroundColor;
    double _blockquoteIndent;
    NSParagraphStyle *_paragraphStyle;
    long long _defaultTableColumnAlignment;
}

+ (void)setCurrentConfig:(id)arg1;
+ (id)currentConfig;
+ (void)initialize;
@property(nonatomic) long long defaultTableColumnAlignment; // @synthesize defaultTableColumnAlignment=_defaultTableColumnAlignment;
@property(copy, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(nonatomic) double blockquoteIndent; // @synthesize blockquoteIndent=_blockquoteIndent;
@property(retain, nonatomic) UIColor *spoilerObfuscatedBackgroundColor; // @synthesize spoilerObfuscatedBackgroundColor=_spoilerObfuscatedBackgroundColor;
@property(retain, nonatomic) UIColor *spoilerExposedBackgroundColor; // @synthesize spoilerExposedBackgroundColor=_spoilerExposedBackgroundColor;
@property(retain, nonatomic) UIColor *codeSpanBackgroundColor; // @synthesize codeSpanBackgroundColor=_codeSpanBackgroundColor;
@property(retain, nonatomic) UIColor *regularTextColor; // @synthesize regularTextColor=_regularTextColor;
@property(retain, nonatomic) UIColor *tableRowColor; // @synthesize tableRowColor=_tableRowColor;
@property(retain, nonatomic) UIFont *tableHeaderFont; // @synthesize tableHeaderFont=_tableHeaderFont;
@property(retain, nonatomic) UIFont *paragraphFont; // @synthesize paragraphFont=_paragraphFont;
@property(retain, nonatomic) UIFont *boldItalicFont; // @synthesize boldItalicFont=_boldItalicFont;
@property(retain, nonatomic) UIFont *italicFont; // @synthesize italicFont=_italicFont;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *codeFont; // @synthesize codeFont=_codeFont;
- (void).cxx_destruct;
- (id)superscriptAttributesForLevel:(double)arg1;
- (id)headingFontForLevel:(long long)arg1;
- (id)init;

@end

