//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SubredditWikiIndex : NSObject
{
    NSArray *_pages;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (void).cxx_destruct;
- (id)initWithGraphQLData:(id)arg1;

@end

