//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/AuthorFlair.h>

#import <RedditCore/MutableFlairProtocol-Protocol.h>

@class MutableFlairTemplate, NSArray, NSString;

@interface MutableAuthorFlair : AuthorFlair <MutableFlairProtocol>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *richText;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MutableFlairTemplate *template;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long textColorType;
@property(nonatomic) long long textType;
@end

