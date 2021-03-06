//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MutableTooltipModel-Protocol.h"

@class NSString, UIColor, UIView;
@protocol ViewContext;

@interface TooltipModel : NSObject <MutableTooltipModel>
{
    _Bool _isTransitioning;
    id <ViewContext> _viewContext;
    unsigned long long _tooltipType;
    unsigned long long _priority;
    UIView *_anchorView;
    long long _arrowPosition;
    NSString *_customText;
    NSString *_analyticsSource;
    NSString *_analyticsId;
    double _maxWidth;
    double _bubbleHInset;
    double _textVInset;
    double _textHInset;
    double _delay;
    UIColor *_textColor;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double textHInset; // @synthesize textHInset=_textHInset;
@property(nonatomic) double textVInset; // @synthesize textVInset=_textVInset;
@property(nonatomic) double bubbleHInset; // @synthesize bubbleHInset=_bubbleHInset;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSString *analyticsId; // @synthesize analyticsId=_analyticsId;
@property(copy, nonatomic) NSString *analyticsSource; // @synthesize analyticsSource=_analyticsSource;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(readonly, nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long tooltipType; // @synthesize tooltipType=_tooltipType;
@property(readonly, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
- (id)initWithViewContext:(id)arg1 tooltipType:(unsigned long long)arg2 anchorView:(id)arg3 buildBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

