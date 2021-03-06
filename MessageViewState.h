//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Message, NSArray;

@interface MessageViewState : NSObject
{
    _Bool _isCollapsed;
    _Bool _isLastChildNode;
    _Bool _isTopLevel;
    _Bool _isLocallyRead;
    unsigned long long _type;
    Message *_message;
    unsigned long long _visualLevel;
    NSArray *_visualReplies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *visualReplies; // @synthesize visualReplies=_visualReplies;
@property(nonatomic) unsigned long long visualLevel; // @synthesize visualLevel=_visualLevel;
@property(nonatomic) _Bool isLocallyRead; // @synthesize isLocallyRead=_isLocallyRead;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) _Bool isLastChildNode; // @synthesize isLastChildNode=_isLastChildNode;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(retain, nonatomic) Message *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

