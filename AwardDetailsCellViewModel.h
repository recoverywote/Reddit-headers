//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface AwardDetailsCellViewModel : NSObject
{
    _Bool _shouldShowOverflowButton;
    NSURL *_iconURL;
    NSString *_countString;
    unsigned long long _maxCountDigits;
    NSString *_title;
    NSString *_subtitleIconName;
    NSString *_subtitle;
}

+ (id)viewModelForAwardingTotal:(id)arg1 maxCountDigits:(unsigned long long)arg2;
@property(nonatomic) _Bool shouldShowOverflowButton; // @synthesize shouldShowOverflowButton=_shouldShowOverflowButton;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *subtitleIconName; // @synthesize subtitleIconName=_subtitleIconName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long maxCountDigits; // @synthesize maxCountDigits=_maxCountDigits;
@property(copy, nonatomic) NSString *countString; // @synthesize countString=_countString;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
- (void).cxx_destruct;

@end

