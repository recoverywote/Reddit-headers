//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@protocol _TtP6Reddit36MediaSelectionViewControllerDelegate_;

@interface _TtC6Reddit28MediaSelectionViewController : BaseViewController <PHPhotoLibraryChangeObserver, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: imageManager
    // Error parsing type: , name: photoLibrary
    // Error parsing type: , name: subreddit
    // Error parsing type: , name: $__lazy_storage_$_fetchResult
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: cancelBarButtonItem
    // Error parsing type: , name: nextBarButtonItem
}

- (void).cxx_destruct;
- (id)init;
- (void)didTapNext;
- (void)didTapClose;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2;
@property(nonatomic) __weak id <_TtP6Reddit36MediaSelectionViewControllerDelegate_> delegate; // @synthesize delegate;

@end

