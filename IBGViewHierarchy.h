//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface IBGViewHierarchy : NSObject
{
    NSArray *_snapshotViews;
    NSDictionary *_viewHeirarchy;
}

@property(readonly, nonatomic) NSDictionary *viewHeirarchy; // @synthesize viewHeirarchy=_viewHeirarchy;
@property(readonly, nonatomic) NSArray *snapshotViews; // @synthesize snapshotViews=_snapshotViews;
- (void).cxx_destruct;
- (id)initWithViewHeirarchy:(id)arg1 snapshotViews:(id)arg2;

@end

