//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGPickerCollectionViewDelegate-Protocol.h>
#import <Instabug/UINavigationControllerDelegate-Protocol.h>

@class IBGPickerCollectionViewController, NSString, UIViewController;
@protocol IBGPickerCollectionViewDelegate;

@interface IBGGalleryHelper : NSObject <UINavigationControllerDelegate, IBGPickerCollectionViewDelegate>
{
    id <IBGPickerCollectionViewDelegate> _delegate;
    UIViewController *_controller;
    IBGPickerCollectionViewController *_picker;
}

@property(retain, nonatomic) IBGPickerCollectionViewController *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <IBGPickerCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissedWithImportError:(_Bool)arg1;
- (void)dismissedGallery;
- (void)dismissedGalleryWithAsset:(id)arg1;
- (void)dismissedGalleryWithImage:(id)arg1;
- (void)showAlertForDeniedGalleryPermission;
- (void)showGalleryWithAuthorizedAccess;
- (void)showGallery;
- (id)initWithController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
