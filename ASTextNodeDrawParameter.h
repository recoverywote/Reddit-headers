//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface ASTextNodeDrawParameter : NSObject
{
    struct ASTextKitAttributes _rendererAttributes;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _textContainerInsets;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)rendererForBounds:(struct CGRect)arg1;
- (id)initWithRendererAttributes:(struct ASTextKitAttributes)arg1 backgroundColor:(id)arg2 textContainerInsets:(struct UIEdgeInsets)arg3;

@end

