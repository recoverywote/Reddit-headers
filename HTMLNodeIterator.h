//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class HTMLNode;
@protocol HTMLNodeFilter;

@interface HTMLNodeIterator : NSEnumerator
{
    HTMLNode *_root;
    _Bool _pointerBeforeReferenceNode;
    HTMLNode *_referenceNode;
    unsigned long long _whatToShow;
    id <HTMLNodeFilter> _filter;
}

@property(readonly, nonatomic) id <HTMLNodeFilter> filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) unsigned long long whatToShow; // @synthesize whatToShow=_whatToShow;
@property(readonly, nonatomic) _Bool pointerBeforeReferenceNode; // @synthesize pointerBeforeReferenceNode=_pointerBeforeReferenceNode;
@property(readonly, nonatomic) HTMLNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(readonly, nonatomic) HTMLNode *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (id)nextObject;
- (id)previousNode;
- (id)nextNode;
- (id)traverseInDirection:(short)arg1;
- (void)runRemovingStepsForNode:(id)arg1 withOldParent:(id)arg2 andOldPreviousSibling:(id)arg3;
- (void)dealloc;
- (id)initWithNode:(id)arg1 showOptions:(unsigned long long)arg2 filter:(id)arg3;
- (id)initWithNode:(id)arg1 filter:(id)arg2;
- (id)initWithNode:(id)arg1;

@end

