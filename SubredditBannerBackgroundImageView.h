//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, NSURL, UIColor, UIImage;

@interface SubredditBannerBackgroundImageView : UIImageView
{
    _Bool _isImageTiled;
    UIColor *_imagePrimaryColor;
    NSString *_loadedURLString;
    UIImage *_loadedImage;
    NSURL *_backgroundImageURL;
}

@property(retain, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(nonatomic) _Bool isImageTiled; // @synthesize isImageTiled=_isImageTiled;
@property(retain, nonatomic) UIImage *loadedImage; // @synthesize loadedImage=_loadedImage;
@property(retain, nonatomic) NSString *loadedURLString; // @synthesize loadedURLString=_loadedURLString;
@property(retain, nonatomic) UIColor *imagePrimaryColor; // @synthesize imagePrimaryColor=_imagePrimaryColor;
- (void).cxx_destruct;
- (void)setBackgroundImageWithURLString:(id)arg1 placeholderImage:(id)arg2 shouldTileImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applyImage:(id)arg1 shouldTileImage:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)prepareForReuse;
- (id)init;

@end

