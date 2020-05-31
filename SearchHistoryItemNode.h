//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASDisplayNode, BaseButtonNode, NSArray, PillStyle, SearchHistoryItem, SubscribableButtonNode;
@protocol SearchHistoryItemNodeDelegate;

@interface SearchHistoryItemNode : BaseFeedDisplayNode
{
    _Bool _shouldUseSafeBrowsingMode;
    BaseButtonNode *_clearButtonNode;
    SubscribableButtonNode *_subscribeSearchButtonNode;
    id <SearchHistoryItemNodeDelegate> _delegate;
    SearchHistoryItem *_searchHistoryItem;
    PillStyle *_pillStyle;
    NSArray *_pillNodes;
    ASDisplayNode *_iconNode;
}

@property(nonatomic) _Bool shouldUseSafeBrowsingMode; // @synthesize shouldUseSafeBrowsingMode=_shouldUseSafeBrowsingMode;
@property(retain, nonatomic) ASDisplayNode *iconNode; // @synthesize iconNode=_iconNode;
@property(retain, nonatomic) NSArray *pillNodes; // @synthesize pillNodes=_pillNodes;
@property(retain, nonatomic) PillStyle *pillStyle; // @synthesize pillStyle=_pillStyle;
@property(retain, nonatomic) SearchHistoryItem *searchHistoryItem; // @synthesize searchHistoryItem=_searchHistoryItem;
@property(nonatomic) __weak id <SearchHistoryItemNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SubscribableButtonNode *subscribeSearchButtonNode; // @synthesize subscribeSearchButtonNode=_subscribeSearchButtonNode;
@property(retain, nonatomic) BaseButtonNode *clearButtonNode; // @synthesize clearButtonNode=_clearButtonNode;
- (void).cxx_destruct;
- (void)didTapButton:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureIconForPill:(id)arg1;
- (id)pillNodesForRailsContext:(id)arg1;
- (id)pillsForRailsContext:(id)arg1;
- (void)configureNodes;
- (id)initWithSearchHistoryItem:(id)arg1 shouldUseSafeBrowsingMode:(_Bool)arg2;

@end

