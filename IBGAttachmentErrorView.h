//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol IBGAttachmentErrorViewDelegate;

@interface IBGAttachmentErrorView : UIView
{
    id <IBGAttachmentErrorViewDelegate> _delegate;
    UILabel *_reloadLabel;
    UIImageView *_reloadImageView;
    UIView *_enclosingView;
}

+ (id)outboundReloadImage;
+ (id)inboundReloadImage;
@property(retain, nonatomic) UIView *enclosingView; // @synthesize enclosingView=_enclosingView;
@property(retain, nonatomic) UIImageView *reloadImageView; // @synthesize reloadImageView=_reloadImageView;
@property(retain, nonatomic) UILabel *reloadLabel; // @synthesize reloadLabel=_reloadLabel;
@property(nonatomic) __weak id <IBGAttachmentErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadIsTapped;
- (void)updateConstraints;
- (void)applyOutboundTheme;
- (void)applyInboundTheme;
- (id)init;

@end

