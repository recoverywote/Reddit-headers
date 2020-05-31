//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AsyncDisplayKit/NSCopying-Protocol.h>

@protocol ASConfigurationDelegate;

@interface ASConfiguration : NSObject <NSCopying>
{
    id <ASConfigurationDelegate> _delegate;
    unsigned long long _experimentalFeatures;
}

@property(nonatomic) unsigned long long experimentalFeatures; // @synthesize experimentalFeatures=_experimentalFeatures;
@property(retain, nonatomic) id <ASConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

