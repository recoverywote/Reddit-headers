//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "BaseCollectionViewCellSelected-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class NSString, PostCollection, PostCollectionHeaderNode, PostCollectionOptions, PostCollectionTitleNode;
@protocol PostCollectionNodeDelegate;

@interface PostCollectionNode : BaseFeedDisplayNode <ObjectObserverProtocol, BaseCollectionViewCellSelected>
{
    PostCollection *_postCollection;
    PostCollectionHeaderNode *_headerNode;
    PostCollectionTitleNode *_titleNode;
    PostCollectionOptions *_postCollectionOptions;
    id <PostCollectionNodeDelegate> _delegate;
}

@property(nonatomic) __weak id <PostCollectionNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PostCollectionOptions *postCollectionOptions; // @synthesize postCollectionOptions=_postCollectionOptions;
@property(retain, nonatomic) PostCollectionTitleNode *titleNode; // @synthesize titleNode=_titleNode;
@property(retain, nonatomic) PostCollectionHeaderNode *headerNode; // @synthesize headerNode=_headerNode;
@property(readonly, nonatomic) PostCollection *postCollection; // @synthesize postCollection=_postCollection;
- (void).cxx_destruct;
@property(readonly, nonatomic) double heightWithoutDescription;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)createPostCollectionHeaderNode;
- (void)createPostCollectionTitleNode;
- (void)createNodes;
- (id)initWithPostCollection:(id)arg1 postCollectionOptions:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

