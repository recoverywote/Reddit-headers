//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RedditService, UIViewController;
@protocol AccountContext, WebViewControllerProtocol;

@interface WebViewInteractor : NSObject
{
    UIViewController<WebViewControllerProtocol> *_delegateVC;
    id <AccountContext> _accountContext;
    NSString *_analyticsScreenViewName;
    NSString *_analyticsCorrelationId;
    unsigned long long _numberOfTimesWebUrlViewLogged;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfTimesWebUrlViewLogged; // @synthesize numberOfTimesWebUrlViewLogged=_numberOfTimesWebUrlViewLogged;
@property(readonly, nonatomic) NSString *analyticsCorrelationId; // @synthesize analyticsCorrelationId=_analyticsCorrelationId;
@property(copy, nonatomic) NSString *analyticsScreenViewName; // @synthesize analyticsScreenViewName=_analyticsScreenViewName;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) __weak UIViewController<WebViewControllerProtocol> *delegateVC; // @synthesize delegateVC=_delegateVC;
- (void)closingBrowser;
- (void)logViewedWebPageWithURL:(id)arg1;
- (id)screenViewAnalyticsEvent;
- (void)sendScreenViewEventsFromBackground:(_Bool)arg1;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 screenViewName:(id)arg2;

@end

