//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class BaseView;
@protocol CaptureCellContentViewProtocol;

@interface CaptureCell : BaseCollectionViewCell
{
    BaseView<CaptureCellContentViewProtocol> *_mainContentView;
}

+ (id)reuseIdentifierForContentClass:(Class)arg1;
+ (Class)contentViewClassForContentClass:(Class)arg1;
+ (struct CGSize)calculatedSizeWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseView<CaptureCellContentViewProtocol> *mainContentView; // @synthesize mainContentView=_mainContentView;
- (void)becomeFirstResponderIfNeeded;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithContent:(id)arg1 screen:(id)arg2;

@end

