//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCellNode.h>

@protocol _TtP6Reddit31StreamingEntryPointNodeDelegate_;

@interface _TtC6Reddit23StreamingEntryPointNode : ASCellNode
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: nodeDisplayMode
    // Error parsing type: , name: feedDisplaymode
    // Error parsing type: , name: paused
    // Error parsing type: , name: presenter
    // Error parsing type: , name: watcherCountNode
    // Error parsing type: , name: titleNode
    // Error parsing type: , name: overflowNode
    // Error parsing type: , name: videoNode
    // Error parsing type: , name: expandBackground
    // Error parsing type: , name: expandButton
    // Error parsing type: , name: liveNodeBackground
    // Error parsing type: , name: liveTextNode
    // Error parsing type: , name: bottomGradientNode
    // Error parsing type: , name: topGradientNode
    // Error parsing type: , name: streamTitleNode
    // Error parsing type: , name: streamSubredditNode
    // Error parsing type: , name: separatorNode
    // Error parsing type: , name: staticNode
    // Error parsing type: , name: iconBackgroundSize
    // Error parsing type: , name: iconSize
    // Error parsing type: , name: liveSize
    // Error parsing type: , name: titleBarHeight
    // Error parsing type: , name: aspectRatio
    // Error parsing type: , name: compactVideoSize
    // Error parsing type: , name: compactVideoCornerRadius
    // Error parsing type: , name: separatorHeight
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewControllerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)enterStream;
- (void)didLoad;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithPresenter:(id)arg1 displayMode:(unsigned long long)arg2;
@property(nonatomic, retain) id <_TtP6Reddit31StreamingEntryPointNodeDelegate_> delegate; // @synthesize delegate;

@end

