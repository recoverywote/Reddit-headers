//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/NSObject-Protocol.h>

@class IBGAVAsset, NSError, UIImage;

@protocol IBGAttachmentControllerDelegate <NSObject>

@optional
- (void)dismissedWithImportError:(_Bool)arg1;
- (void)dismissedWithVideoFromGallery:(IBGAVAsset *)arg1 error:(NSError *)arg2;
- (void)dismissedWithVideo:(IBGAVAsset *)arg1 error:(NSError *)arg2;
- (void)dismissedWithAudio:(IBGAVAsset *)arg1 error:(NSError *)arg2;
- (void)dismissedWithGallaryImage:(UIImage *)arg1 error:(NSError *)arg2;
- (void)dismissedWithScreenshotImage:(UIImage *)arg1 error:(NSError *)arg2;
@end

