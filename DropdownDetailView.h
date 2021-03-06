//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseLabel, DropdownView;

@interface DropdownDetailView : BaseView
{
    BaseLabel *_mainLabel;
    BaseLabel *_detailLabel;
    DropdownView *_dropdownView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DropdownView *dropdownView; // @synthesize dropdownView=_dropdownView;
@property(retain, nonatomic) BaseLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (double)maxTextViewWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

