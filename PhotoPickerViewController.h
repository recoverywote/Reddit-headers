//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CurrentActionSheetProtocol-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class BaseCollectionView, NSString, PHFetchResult, RUIActionSheetViewController, UIImage;
@protocol PhotoPickerViewControllerDelegate;

@interface PhotoPickerViewController : BaseViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UINavigationControllerDelegate, UIImagePickerControllerDelegate, RUIActionSheetViewControllerDelegate, CurrentActionSheetProtocol>
{
    _Bool _shouldUseOverlayBackgroundColor;
    id <PhotoPickerViewControllerDelegate> _delegate;
    PHFetchResult *_photos;
    BaseCollectionView *_collectionView;
    UIImage *_selectedImage;
    RUIActionSheetViewController *_currentActionSheetViewController;
    NSString *_confirmationDialogButtonText;
    struct CGRect _boundingRect;
}

@property(readonly, nonatomic) _Bool shouldUseOverlayBackgroundColor; // @synthesize shouldUseOverlayBackgroundColor=_shouldUseOverlayBackgroundColor;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(copy, nonatomic) NSString *confirmationDialogButtonText; // @synthesize confirmationDialogButtonText=_confirmationDialogButtonText;
@property(nonatomic) __weak RUIActionSheetViewController *currentActionSheetViewController; // @synthesize currentActionSheetViewController=_currentActionSheetViewController;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) PHFetchResult *photos; // @synthesize photos=_photos;
@property(nonatomic) __weak id <PhotoPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RUIActionSheetViewController *actionSheetViewController;
- (void)loadImageForAsset:(id)arg1;
- (void)loadPhotos;
- (void)presentImagePickerForSourceType:(long long)arg1;
- (void)actionSheetViewController:(id)arg1 didGetDismissedFromOutside:(_Bool)arg2;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didTapPhotosButton:(id)arg1;
- (void)didTapCameraButton:(id)arg1;
- (void)showActionSheetWithImage:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)prefersTabBarHidden;
- (id)majorContentView;
- (void)configureViewAppearance;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 confirmationDialogButtonText:(id)arg2 boundingRect:(struct CGRect)arg3 shouldUseOverlayBackgroundColor:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

