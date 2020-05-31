//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PostViewController.h"

#import "AttributedLabelRegularDelegate-Protocol.h"
#import "BaseTextViewDelegate-Protocol.h"
#import "EditMemeViewControllerDelegate-Protocol.h"
#import "ImagePostViewControllerDelegate-Protocol.h"
#import "PlayerViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AVURLAsset, BaseButton, BaseLabel, BaseScrollView, BaseTextView, BaseView, BottomLabelButton, EditMemeViewController, HlsPlayerView, NSDictionary, NSFileManager, NSString, NSURL, NSUUID, UIImage, UIImagePickerController, UIImageView, UITapGestureRecognizer, UIView, _TtC6Reddit15RedditVideoNode, _TtC6Reddit25PostKeyboardAccessoryView;

@interface ImagePostViewController : PostViewController <BaseTextViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, AttributedLabelRegularDelegate, ImagePostViewControllerDelegate, PlayerViewDelegate, EditMemeViewControllerDelegate>
{
    _Bool _wasTrimmed;
    _Bool _isGif;
    BaseTextView *_titleView;
    UIImage *_currentImage;
    NSURL *_videoURL;
    NSString *_baseUrl;
    BaseScrollView *_wrapperScrollView;
    BaseView *_actionView;
    BottomLabelButton *_cameraButton;
    BottomLabelButton *_photosButton;
    UIImageView *_imagePreview;
    BaseView *_videoPreview;
    BaseView *_loadingPickerBackground;
    UIView *_separatorView;
    HlsPlayerView *_videoView;
    _TtC6Reddit15RedditVideoNode *_videoNode;
    BaseView *_snapshotView;
    AVURLAsset *_sourceAsset;
    BaseLabel *_mainErrorView;
    BaseLabel *_titleErrorView;
    BaseLabel *_flairErrorView;
    UIView *_titleErrorSeparator;
    NSUUID *_videoUUID;
    NSDictionary *_mediaInfo;
    UITapGestureRecognizer *_tapGesture;
    BaseButton *_removeImageButton;
    NSString *_linkUploadURL;
    NSString *_linkImageUploadURL;
    double _linkUploadPercent;
    UIImagePickerController *_picker;
    _TtC6Reddit25PostKeyboardAccessoryView *_postKeyboardAccessoryView;
    unsigned long long _mediaType;
    EditMemeViewController *_editMemeViewController;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) EditMemeViewController *editMemeViewController; // @synthesize editMemeViewController=_editMemeViewController;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) _TtC6Reddit25PostKeyboardAccessoryView *postKeyboardAccessoryView; // @synthesize postKeyboardAccessoryView=_postKeyboardAccessoryView;
@property(retain, nonatomic) UIImagePickerController *picker; // @synthesize picker=_picker;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) double linkUploadPercent; // @synthesize linkUploadPercent=_linkUploadPercent;
@property(retain, nonatomic) NSString *linkImageUploadURL; // @synthesize linkImageUploadURL=_linkImageUploadURL;
@property(retain, nonatomic) NSString *linkUploadURL; // @synthesize linkUploadURL=_linkUploadURL;
@property(nonatomic) _Bool wasTrimmed; // @synthesize wasTrimmed=_wasTrimmed;
@property(retain, nonatomic) BaseButton *removeImageButton; // @synthesize removeImageButton=_removeImageButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) NSDictionary *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSUUID *videoUUID; // @synthesize videoUUID=_videoUUID;
@property(retain, nonatomic) UIView *titleErrorSeparator; // @synthesize titleErrorSeparator=_titleErrorSeparator;
@property(retain, nonatomic) BaseLabel *flairErrorView; // @synthesize flairErrorView=_flairErrorView;
@property(retain, nonatomic) BaseLabel *titleErrorView; // @synthesize titleErrorView=_titleErrorView;
@property(retain, nonatomic) BaseLabel *mainErrorView; // @synthesize mainErrorView=_mainErrorView;
@property(retain, nonatomic) AVURLAsset *sourceAsset; // @synthesize sourceAsset=_sourceAsset;
@property(retain, nonatomic) BaseView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) _TtC6Reddit15RedditVideoNode *videoNode; // @synthesize videoNode=_videoNode;
@property(retain, nonatomic) HlsPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) BaseView *loadingPickerBackground; // @synthesize loadingPickerBackground=_loadingPickerBackground;
@property(retain, nonatomic) BaseView *videoPreview; // @synthesize videoPreview=_videoPreview;
@property(retain, nonatomic) UIImageView *imagePreview; // @synthesize imagePreview=_imagePreview;
@property(retain, nonatomic) BottomLabelButton *photosButton; // @synthesize photosButton=_photosButton;
@property(retain, nonatomic) BottomLabelButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) BaseView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) BaseScrollView *wrapperScrollView; // @synthesize wrapperScrollView=_wrapperScrollView;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) BaseTextView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)editMemeViewController:(id)arg1 didCreateMemeImage:(id)arg2;
- (_Bool)shouldForceAutoplay;
- (_Bool)shouldDisableAutoplay;
- (void)playerViewDidEndPlaying:(id)arg1;
- (void)playerViewDidBeginPlaying:(id)arg1;
- (void)configureForTrimmedMovie:(id)arg1 makeGif:(_Bool)arg2 wasTrimmed:(_Bool)arg3;
- (void)didFinishTrimmingMedia:(id)arg1 makeGif:(_Bool)arg2 wasTrimmed:(_Bool)arg3;
- (void)cancelTrimView:(id)arg1;
- (id)analyticsPostComposerType;
- (id)analyticsScreenViewName;
- (id)inputAccessoryView;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)baseTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)moveCaretIfPossibleInScrollView:(id)arg1;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)showEditVideoViewControllerWithVideoURL:(id)arg1;
- (void)copyOriginalVideo:(id)arg1 compressedVideo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)toggleLoadingPickerBackground:(_Bool)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)didTapPostButton:(id)arg1;
- (void)didTapClosePost;
- (void)presentImagePickerForSourceType:(long long)arg1;
- (void)didTapPhotosButton;
- (void)didTapCameraButton;
- (_Bool)hasRequiredPermissions;
- (void)requestMicrophonePermission;
- (void)didTapRemoveImage;
- (void)removeVideo;
- (void)removeImage;
- (_Bool)resignFirstResponder;
- (void)testAndShowUnallowedPostTypeWarning;
- (void)configureWithSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutWrapperScrollViewContents;
- (void)updateDisplayedImage:(id)arg1;
- (void)configureWithPostToEdit:(id)arg1;
- (void)configureVideoForEditPost:(id)arg1;
- (void)configureForPickedMovie:(id)arg1 fromSource:(long long)arg2;
- (void)configureForPickedImage:(id)arg1 fromSource:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (id)allowedImagePickerMediaTypes;
- (void)didTapVideo:(id)arg1;
- (id)initWithMediaType:(unsigned long long)arg1 fileManager:(id)arg2 accountContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

