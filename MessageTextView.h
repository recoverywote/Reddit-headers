//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VerticalLineView.h"

@class AttributedLabel, MessageViewState;
@protocol ViewContext;

@interface MessageTextView : VerticalLineView
{
    id <ViewContext> _viewContext;
    AttributedLabel *_textViewLabel;
    MessageViewState *_viewState;
}

+ (struct CGSize)calculatedSizeOfTextViewWithData:(id)arg1 viewContext:(id)arg2;
+ (id)sizingLabelWithViewContext:(id)arg1;
+ (struct CGSize)calculatedSizeWithData:(id)arg1 viewContext:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MessageViewState *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) AttributedLabel *textViewLabel; // @synthesize textViewLabel=_textViewLabel;
@property(retain, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
- (void)layoutSubviews;
- (void)configureWithViewState:(id)arg1 viewContext:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

