//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAnalyticsEventFactory.h"

@interface GoldEventFactory : BaseAnalyticsEventFactory
{
}

+ (id)viewAppreciationTooltipEventWithAccount:(id)arg1 post:(id)arg2;
+ (id)awardsInCommentClickEventWithAccount:(id)arg1 comment:(id)arg2 parentPost:(id)arg3 correlationId:(id)arg4;
+ (id)addAwardInPostClickEventWithAccount:(id)arg1 post:(id)arg2 correlationId:(id)arg3;
+ (id)awardsInPostClickEventWithAccount:(id)arg1 post:(id)arg2 award:(id)arg3 correlationId:(id)arg4;
+ (id)awardCommentButtonClickEventWithAccount:(id)arg1 comment:(id)arg2 parentPost:(id)arg3 correlationId:(id)arg4;
+ (id)awardPostButtonClickEventWithAccount:(id)arg1 post:(id)arg2 correlationId:(id)arg3;
+ (id)userDrawerPremiumClickEventWithAccount:(id)arg1 correlationId:(id)arg2;
+ (id)userDrawerCoinsClickEventWithAccount:(id)arg1 correlationId:(id)arg2;

@end

