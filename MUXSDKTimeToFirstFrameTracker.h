//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MuxCore/MUXSDKBaseTracker.h>

@interface MUXSDKTimeToFirstFrameTracker : MUXSDKBaseTracker
{
    long long _playStartTime;
    long long _lastEventTime;
    int _state;
}

- (void)handlePlaybackEvent:(id)arg1;
- (void)setAndSendTTFF:(long long)arg1;

@end

