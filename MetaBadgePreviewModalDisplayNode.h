//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class MetaBadgePreviewModalContentNode;

@interface MetaBadgePreviewModalDisplayNode : ASDisplayNode
{
    MetaBadgePreviewModalContentNode *_contentNode;
}

@property(retain, nonatomic) MetaBadgePreviewModalContentNode *contentNode; // @synthesize contentNode=_contentNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)setBadges:(id)arg1 selectedBadgePK:(id)arg2 actionTitle:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithContentColor:(id)arg1 actionDelegate:(id)arg2;

@end

