//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIStackView;

@interface FooterButtonsViewController : UIViewController
{
    NSArray *_buttons;
    UIStackView *_containerView;
    struct UIEdgeInsets _buttonInsets;
}

@property(nonatomic) struct UIEdgeInsets buttonInsets; // @synthesize buttonInsets=_buttonInsets;
@property(nonatomic) __weak UIStackView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (id)analyticsPageType;
- (void)setButtonTitle:(id)arg1 forControlState:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)setButtonHidden:(_Bool)arg1 atIndex:(long long)arg2;
- (void)setButtonEnabled:(_Bool)arg1 atIndex:(long long)arg2;
- (void)setAllButtonsEnabled:(_Bool)arg1;
- (void)setupContainerWithSubviews:(id)arg1;
- (void)viewDidLoad;
- (id)initWithButtons:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)initWithButtons:(id)arg1;

@end

