//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HTMLKit/HTMLNode.h>

@class HTMLDOMTokenList, HTMLOrderedDictionary, NSMutableDictionary, NSString;

@interface HTMLElement : HTMLNode
{
    HTMLOrderedDictionary *_attributes;
    long long _htmlNamespace;
    NSString *_tagName;
}

@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, nonatomic) long long htmlNamespace; // @synthesize htmlNamespace=_htmlNamespace;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)outerHTML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setInnerHTML:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (void)removeAttribute:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)hasAttribute:(id)arg1;
@property(readonly, nonatomic) HTMLDOMTokenList *classList;
@property(copy, nonatomic) NSString *className;
@property(copy, nonatomic) NSString *elementId;
- (id)initWithTagName:(id)arg1 namespace:(long long)arg2 attributes:(id)arg3;
- (id)initWithTagName:(id)arg1 attributes:(id)arg2;
- (id)initWithTagName:(id)arg1;
- (id)init;

@end

