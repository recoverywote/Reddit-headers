//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MetaBadge, NSString, NSURL, _TtC6Reddit28MetaMembershipBannerCellNode;

@protocol _TtP6Reddit36MetaMembershipBannerCellNodeDelegate_ <NSObject>
- (void)metaMembershipBannerCellNodeDidTapClose:(_TtC6Reddit28MetaMembershipBannerCellNode *)arg1;
- (void)metaMembershipBannerCellNode:(_TtC6Reddit28MetaMembershipBannerCellNode *)arg1 didTapBadge:(MetaBadge *)arg2 correlationID:(NSString *)arg3;
- (void)metaMembershipBannerCellNode:(_TtC6Reddit28MetaMembershipBannerCellNode *)arg1 didTapURL:(NSURL *)arg2;
@end

