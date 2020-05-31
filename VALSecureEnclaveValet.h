//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Valet/VALValet.h>

@class NSDictionary;

@interface VALSecureEnclaveValet : VALValet
{
    NSDictionary *_baseQuery;
    unsigned long long _accessControl;
}

+ (void)_augmentBaseQuery:(id)arg1 accessControl:(unsigned long long)arg2;
+ (_Bool)_currentOSSupportedForAccessControl:(unsigned long long)arg1;
+ (_Bool)_iOS9OrLater;
+ (_Bool)_iOS8OrLater;
+ (_Bool)_macOSSierraOrLater;
+ (_Bool)_macOSElCapitanOrLater;
+ (_Bool)supportsSecureEnclaveKeychainItems;
@property(readonly) unsigned long long accessControl; // @synthesize accessControl=_accessControl;
- (id)baseQuery;
- (void).cxx_destruct;
- (id)_optionsDictionaryForUserPrompt:(id)arg1;
- (id)stringForKey:(id)arg1 userPrompt:(id)arg2 userCancelled:(inout _Bool *)arg3 options:(id)arg4;
- (id)objectForKey:(id)arg1 userPrompt:(id)arg2 userCancelled:(inout _Bool *)arg3 options:(id)arg4;
- (int)containsObjectForKey:(id)arg1 options:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (id)stringForKey:(id)arg1 userPrompt:(id)arg2 userCancelled:(inout _Bool *)arg3;
- (id)stringForKey:(id)arg1 userPrompt:(id)arg2;
- (id)objectForKey:(id)arg1 userPrompt:(id)arg2 userCancelled:(inout _Bool *)arg3;
- (id)objectForKey:(id)arg1 userPrompt:(id)arg2;
- (id)migrateObjectsMatchingQuery:(id)arg1 removeOnCompletion:(_Bool)arg2;
- (_Bool)removeAllObjects;
- (id)allKeys;
- (_Bool)containsObjectForKey:(id)arg1;
- (_Bool)canAccessKeychain;
- (id)initWithSharedAccessGroupIdentifier:(id)arg1 accessControl:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 accessControl:(unsigned long long)arg2;
- (id)initWithSharedAccessGroupIdentifier:(id)arg1 accessibility:(unsigned long long)arg2;
- (id)initWithSharedAccessGroupIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accessibility:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

