//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCellNode.h>

@class ASTextNode;

@interface ChatAdminMessageCellNode : ASCellNode
{
    ASTextNode *_textNode;
}

@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureWithMessage:(id)arg1;
- (id)init;

@end

