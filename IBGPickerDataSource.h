//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/UICollectionViewDataSource-Protocol.h>

@class NSString, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, PHVideoRequestOptions;

@interface IBGPickerDataSource : NSObject <UICollectionViewDataSource>
{
    PHFetchResult *_fetchResults;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    PHVideoRequestOptions *_videoRequestOptions;
    struct CGSize _thumbnailSize;
}

@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) PHVideoRequestOptions *videoRequestOptions; // @synthesize videoRequestOptions=_videoRequestOptions;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) PHFetchResult *fetchResults; // @synthesize fetchResults=_fetchResults;
- (void).cxx_destruct;
- (int)requestImageForPHAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)requestIBGAssetForPHAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageForAsset:(id)arg1 inCell:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reset;
- (id)assetAtIndex:(unsigned long long)arg1;
- (long long)lastItemIndex;
- (void)fetchImagesFromGallery;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

