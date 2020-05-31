//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RailsViewControllerFactory : NSObject
{
}

+ (id)sortModelWithRailsContext:(id)arg1;
+ (id)listingRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2 listingNetworkSource:(id)arg3;
+ (id)mediaRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2;
+ (id)typeaheadRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2;
+ (id)subredditRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2;
+ (id)gamesRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2;
+ (id)userRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2;
+ (id)postsRailsPresenterWithRailsContext:(id)arg1 accountContext:(id)arg2 searchTabType:(unsigned long long)arg3 withTitle:(id)arg4;
+ (id)railsViewControllerWithRailsPresenter:(id)arg1 withSearchViewController:(id)arg2;
+ (id)listingRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 listingNetworkSource:(id)arg3 withSearchViewController:(id)arg4;
+ (id)typeaheadRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)subredditRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)gamesRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)userRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)mediaRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)postsRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)postsRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 searchTabType:(unsigned long long)arg3 withTitle:(id)arg4 withSearchViewController:(id)arg5;
+ (id)nonTabDefaultRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;
+ (id)topRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withRailsListingNetworkSource:(id)arg3 withSearchViewController:(id)arg4;
+ (id)topRailsViewControllerWithRailsContext:(id)arg1 accountContext:(id)arg2 withSearchViewController:(id)arg3;

@end

