//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SubredditWikiPageNode : NSObject
{
    _Bool _isPagePresent;
    NSString *_name;
    NSString *_path;
    NSString *_parent;
    long long _depth;
}

@property(readonly, nonatomic) long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) _Bool isPagePresent; // @synthesize isPagePresent=_isPagePresent;
@property(readonly, copy, nonatomic) NSString *parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithGraphQLData:(id)arg1;

@end

