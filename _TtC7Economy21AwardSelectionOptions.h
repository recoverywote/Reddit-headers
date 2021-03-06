//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface _TtC7Economy21AwardSelectionOptions : NSObject
{
    // Error parsing type: , name: preselectedAwardId
    // Error parsing type: , name: preselectedAwardImageURL
    // Error parsing type: , name: shouldAllowEditOptions
    // Error parsing type: , name: shouldAllowAnonymousGilding
    // Error parsing type: , name: shouldShowChatBox
    // Error parsing type: , name: shouldCloseAwardSelectionBeforeCompletion
    // Error parsing type: , name: shouldHidePrice
    // Error parsing type: , name: isEmployeeAccount
    // Error parsing type: , name: isPremiumAccount
    // Error parsing type: , name: goldCoinsOnAccount
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)allowsAnonymousAwardingWithAward:(id)arg1;
- (_Bool)requiresPremiumWithAward:(id)arg1;
- (_Bool)requiresCoinPurchaseWithAward:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (id)initWithConfig:(id)arg1 shouldAllowEditOptions:(_Bool)arg2 shouldAllowAnonymousGilding:(_Bool)arg3 account:(id)arg4 isInAnonymousBrowsing:(_Bool)arg5;
@property(nonatomic, readonly) long long goldCoinsOnAccount; // @synthesize goldCoinsOnAccount;
@property(nonatomic, readonly) _Bool isPremiumAccount; // @synthesize isPremiumAccount;
@property(nonatomic, readonly) _Bool isEmployeeAccount; // @synthesize isEmployeeAccount;
@property(nonatomic, readonly) _Bool shouldHidePrice; // @synthesize shouldHidePrice;
@property(nonatomic, readonly) _Bool shouldCloseAwardSelectionBeforeCompletion; // @synthesize shouldCloseAwardSelectionBeforeCompletion;
@property(nonatomic, readonly) _Bool shouldShowChatBox; // @synthesize shouldShowChatBox;
@property(nonatomic, readonly) _Bool shouldAllowAnonymousGilding; // @synthesize shouldAllowAnonymousGilding;
@property(nonatomic, readonly) _Bool shouldAllowEditOptions; // @synthesize shouldAllowEditOptions;
@property(nonatomic, readonly) NSURL *preselectedAwardImageURL;
@property(nonatomic, readonly) NSString *preselectedAwardId;

@end

