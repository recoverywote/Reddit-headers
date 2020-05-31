//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RUIThemeUpdateCallbackProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BaseButton, NSIndexPath, NSString, UILongPressGestureRecognizer;
@protocol NextCommentButtonInteractorDelegate;

@interface NextCommentButtonInteractor : NSObject <UIGestureRecognizerDelegate, RUIThemeUpdateCallbackProtocol>
{
    BaseButton *_scrollToNextCommentButton;
    NSIndexPath *_currentCommentIndexPath;
    UILongPressGestureRecognizer *_nextCommentLongPressGestureRecognizer;
    id <NextCommentButtonInteractorDelegate> _delegate;
    struct CGPoint _defaultLocation;
    struct CGPoint _nextCommentLongPressOffset;
    struct CGRect _previousSuperviewFrame;
}

@property(nonatomic) struct CGRect previousSuperviewFrame; // @synthesize previousSuperviewFrame=_previousSuperviewFrame;
@property(nonatomic) __weak id <NextCommentButtonInteractorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint nextCommentLongPressOffset; // @synthesize nextCommentLongPressOffset=_nextCommentLongPressOffset;
@property(retain, nonatomic) UILongPressGestureRecognizer *nextCommentLongPressGestureRecognizer; // @synthesize nextCommentLongPressGestureRecognizer=_nextCommentLongPressGestureRecognizer;
@property(readonly, nonatomic) NSIndexPath *currentCommentIndexPath; // @synthesize currentCommentIndexPath=_currentCommentIndexPath;
@property(retain, nonatomic) BaseButton *scrollToNextCommentButton; // @synthesize scrollToNextCommentButton=_scrollToNextCommentButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasComments;
@property(readonly, nonatomic) double floatingHeaderTopInset;
- (void)didChangeOffsetForCollectionNode:(id)arg1;
- (void)didLongPressNextCommentButton:(id)arg1;
- (void)scrollToNextComment:(id)arg1;
- (struct CGPoint)unvectorizedPoint:(struct CGPoint)arg1;
- (struct CGPoint)vectorizedPoint:(struct CGPoint)arg1;
- (void)themeDidChange:(id)arg1;
- (void)moveNextCommentButtonToPosition:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint defaultLocation; // @synthesize defaultLocation=_defaultLocation;
- (void)saveNextCommentButtonLocation;
@property(readonly, nonatomic) struct CGPoint savedLocation;
- (void)recalculateDefaultCommentButtonPositionIfNeeded;
- (void)layoutCommentButton;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
