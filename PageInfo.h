//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@class NSString;

@interface PageInfo : NSObject <NSCopying>
{
    _Bool _hasNextPage;
    NSString *_endCursor;
}

@property(copy, nonatomic) NSString *endCursor; // @synthesize endCursor=_endCursor;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;

@end

