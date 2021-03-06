//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCoding-Protocol.h>
#import <RedditCore/NSCopying-Protocol.h>

@class NSURL;

@interface MediaSource : NSObject <NSCopying, NSCoding>
{
    NSURL *_url;
    struct CGSize _size;
}

+ (id)mediaSourceFromResolutions:(id)arg1 fittingSize:(struct CGSize)arg2;
+ (id)resolutionsFromMetaAPIData:(id)arg1;
+ (id)resolutionsFromGraphQLData:(id)arg1 prefix:(id)arg2 omittingSource:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (long long)compareByHeight:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLowResolution;
@property(readonly, nonatomic) _Bool isVertical;
@property(readonly, nonatomic) double aspectRatio;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

