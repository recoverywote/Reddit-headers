//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PopupViewControllerProtocol-Protocol.h"

@class LinkView, NSString;
@protocol LinkViewControllerDelegate;

@interface LinkViewController : BaseViewController <PopupViewControllerProtocol>
{
    double _preferredPopupHeight;
    id <LinkViewControllerDelegate> _delegate;
    LinkView *_linkView;
}

@property(retain, nonatomic) LinkView *linkView; // @synthesize linkView=_linkView;
@property(nonatomic) __weak id <LinkViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double preferredPopupHeight; // @synthesize preferredPopupHeight=_preferredPopupHeight;
- (void).cxx_destruct;
- (_Bool)isValidURL:(id)arg1;
- (void)didTapInsertLink:(id)arg1;
- (double)preferredPopupHeightForWidth:(double)arg1;
- (void)viewWillLayoutSubviews;
- (void)configureViewAppearance;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

