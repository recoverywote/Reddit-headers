//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IBGFeature : NSObject
{
    _Bool _serverPermission;
    _Bool _userPreference;
    _Bool _userPreferenceSet;
    _Bool _serverPermissionSet;
    _Bool _defaultValue;
}

+ (id)featureWithDefaultValue:(_Bool)arg1;
@property(nonatomic) _Bool defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) _Bool serverPermissionSet; // @synthesize serverPermissionSet=_serverPermissionSet;
@property(nonatomic) _Bool userPreferenceSet; // @synthesize userPreferenceSet=_userPreferenceSet;
@property(nonatomic) _Bool userPreference; // @synthesize userPreference=_userPreference;
@property(nonatomic) _Bool serverPermission; // @synthesize serverPermission=_serverPermission;
@property(readonly, nonatomic) _Bool enabled;
- (id)initWithDefaultValue:(_Bool)arg1;

@end
