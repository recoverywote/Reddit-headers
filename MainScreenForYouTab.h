//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import "MainScreenTab-Protocol.h"

@class NSString;

@interface MainScreenForYouTab : ObservableObject <MainScreenTab>
{
    NSString *_analyticsType;
    NSString *_analyticsIdentifier;
    NSString *_name;
    unsigned long long _homeFeedType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long homeFeedType; // @synthesize homeFeedType=_homeFeedType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *analyticsIdentifier; // @synthesize analyticsIdentifier=_analyticsIdentifier;
@property(readonly, nonatomic) NSString *analyticsType; // @synthesize analyticsType=_analyticsType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)viewControllerWithAccountContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

