//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class NSMutableDictionary;

@interface ASDisplayNode (DynamicColor)
- (void)setBorderStroke:(id)arg1;
- (void)updateThemeProperty;
- (void)associateThemeUpdateBlock:(CDUnknownBlockType)arg1;
- (void)associateSet:(SEL)arg1 themeGet:(SEL)arg2 autoUpdate:(_Bool)arg3;
- (void)associateSet:(SEL)arg1 themeGet:(SEL)arg2;
- (void)removePropertySetter:(SEL)arg1;
@property(readonly, nonatomic) NSMutableDictionary *selectorMappings;
- (void)setAssociatedBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)associatedBlock;
@end

