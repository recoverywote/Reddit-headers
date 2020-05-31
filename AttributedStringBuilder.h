//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSMutableAttributedString;

@interface AttributedStringBuilder : NSObject
{
    NSDictionary *_defaultAttributes;
    NSMutableAttributedString *_result;
}

@property(retain, nonatomic) NSMutableAttributedString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
- (void).cxx_destruct;
- (void)appendNonBreakingSpace;
- (void)appendWordJoiner;
- (id)attributesWithDefault:(id)arg1;
- (void)addAttributesToEntireRange:(id)arg1;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)appendString:(id)arg1 attributes:(id)arg2;
- (void)appendString:(id)arg1;
- (void)appendIcon:(id)arg1 font:(id)arg2 baselineAligned:(_Bool)arg3;
- (void)appendIcon:(id)arg1 baselineAligned:(_Bool)arg2;
- (void)appendIcon:(id)arg1;
- (void)removeLastSpace;
- (void)appendLink:(id)arg1 withText:(id)arg2;
- (void)appendBulletSeparatorWithAttributes:(id)arg1;
- (void)appendBulletSeparator;
- (void)appendSpaces:(unsigned long long)arg1;
- (void)appendFixedWidthSpace:(double)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithDefaultFont:(id)arg1 textColor:(id)arg2;
- (id)initWithDefaultAttributes:(id)arg1;
- (void)appendPostEventInfo:(id)arg1 date:(id)arg2 theme:(id)arg3;

@end

