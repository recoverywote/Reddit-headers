//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>
#import <RedditCore/NSMutableCopying-Protocol.h>

@class BadgeIndicator;

@interface BadgeIndicators : NSObject <NSCopying, NSMutableCopying>
{
    BadgeIndicator *_chatRooms;
    BadgeIndicator *_chatRoomMentions;
    BadgeIndicator *_directMessages;
    BadgeIndicator *_chatTab;
    BadgeIndicator *_messageTab;
    BadgeIndicator *_activityTab;
    BadgeIndicator *_inboxTab;
    BadgeIndicator *_appBadge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BadgeIndicator *appBadge; // @synthesize appBadge=_appBadge;
@property(readonly, nonatomic) BadgeIndicator *inboxTab; // @synthesize inboxTab=_inboxTab;
@property(readonly, nonatomic) BadgeIndicator *activityTab; // @synthesize activityTab=_activityTab;
@property(readonly, nonatomic) BadgeIndicator *messageTab; // @synthesize messageTab=_messageTab;
@property(readonly, nonatomic) BadgeIndicator *chatTab; // @synthesize chatTab=_chatTab;
@property(readonly, nonatomic) BadgeIndicator *directMessages; // @synthesize directMessages=_directMessages;
@property(readonly, nonatomic) BadgeIndicator *chatRoomMentions; // @synthesize chatRoomMentions=_chatRoomMentions;
@property(readonly, nonatomic) BadgeIndicator *chatRooms; // @synthesize chatRooms=_chatRooms;
- (id)debugDescription;
- (id)initWithData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

