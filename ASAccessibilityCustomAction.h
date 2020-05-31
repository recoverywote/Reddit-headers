//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

#import <AsyncDisplayKit/ASAccessibilityElementPositioning-Protocol.h>

@class ASDisplayNode, UIView;

@interface ASAccessibilityCustomAction : UIAccessibilityCustomAction <ASAccessibilityElementPositioning>
{
    UIView *_container;
    ASDisplayNode *_node;
    ASDisplayNode *_containerNode;
}

@property(retain, nonatomic) ASDisplayNode *containerNode; // @synthesize containerNode=_containerNode;
@property(retain, nonatomic) ASDisplayNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect accessibilityFrame;

@end

