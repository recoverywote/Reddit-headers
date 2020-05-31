//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class NSString, ThemeManager;
@protocol ThemeActionSheetDelegate;

@interface ThemeActionSheetController : NSObject <RUIActionSheetViewControllerDelegate>
{
    _Bool _nightMode;
    id <ThemeActionSheetDelegate> _delegate;
    ThemeManager *_themeManager;
}

@property(readonly, nonatomic) ThemeManager *themeManager; // @synthesize themeManager=_themeManager;
@property(nonatomic) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(nonatomic) __weak id <ThemeActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)presentFromController:(id)arg1 fromView:(id)arg2;
- (id)initWithThemeManager:(id)arg1 isNightMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
