//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IBGPoweredByView, NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;

@interface IBGThankYouHUDView : UIView
{
    UILayoutGuide *_centerLayoutGuide;
    UIView *_containerView;
    UIImageView *_thankYouImageView;
    UILabel *_thankYouLabel;
    UILabel *_messageLabel;
    IBGPoweredByView *_poweredByView;
    NSLayoutConstraint *_imageCompactHeight;
    NSLayoutConstraint *_imageRegularHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *imageRegularHeight; // @synthesize imageRegularHeight=_imageRegularHeight;
@property(retain, nonatomic) NSLayoutConstraint *imageCompactHeight; // @synthesize imageCompactHeight=_imageCompactHeight;
@property(retain, nonatomic) IBGPoweredByView *poweredByView; // @synthesize poweredByView=_poweredByView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *thankYouLabel; // @synthesize thankYouLabel=_thankYouLabel;
@property(retain, nonatomic) UIImageView *thankYouImageView; // @synthesize thankYouImageView=_thankYouImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILayoutGuide *centerLayoutGuide; // @synthesize centerLayoutGuide=_centerLayoutGuide;
- (void).cxx_destruct;
- (void)updateSizeClassConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)init;

@end
