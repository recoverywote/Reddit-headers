//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASLayoutSpec.h>

@interface ASAbsoluteLayoutSpec : ASLayoutSpec
{
    long long _sizing;
}

+ (id)absoluteLayoutSpecWithSizing:(long long)arg1 children:(id)arg2;
+ (id)absoluteLayoutSpecWithChildren:(id)arg1;
@property(nonatomic) long long sizing; // @synthesize sizing=_sizing;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (id)initWithSizing:(long long)arg1 children:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

@end

