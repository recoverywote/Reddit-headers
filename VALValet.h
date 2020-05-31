//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Valet/NSCopying-Protocol.h>

@class NSDictionary, NSLock, NSString;

@interface VALValet : NSObject <NSCopying>
{
    _Bool _sharedAcrossApplications;
    NSString *_identifier;
    unsigned long long _accessibility;
    NSLock *_lockForSetAndRemoveOperations;
    NSDictionary *_baseQuery;
}

+ (id)_sharedAccessGroupPrefix;
+ (id)_secAccessibilityAttributeForAccessibility:(unsigned long long)arg1;
+ (id)mutableBaseQueryWithSharedAccessGroupIdentifier:(id)arg1 accessibility:(unsigned long long)arg2 initializer:(SEL)arg3;
+ (id)mutableBaseQueryWithIdentifier:(id)arg1 accessibility:(unsigned long long)arg2 initializer:(SEL)arg3;
+ (id)sharedValetForValet:(id)arg1;
@property(readonly, copy) NSDictionary *baseQuery; // @synthesize baseQuery=_baseQuery;
@property(readonly, copy) NSLock *lockForSetAndRemoveOperations; // @synthesize lockForSetAndRemoveOperations=_lockForSetAndRemoveOperations;
@property(readonly) unsigned long long accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, getter=isSharedAcrossApplications) _Bool sharedAcrossApplications; // @synthesize sharedAcrossApplications=_sharedAcrossApplications;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_secItemFormatDictionaryWithKey:(id)arg1;
@property(readonly, copy) NSString *secServiceIdentifier;
- (_Bool)removeAllObjectsWithOptions:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1 options:(id)arg2;
- (id)allKeysWithOptions:(id)arg1;
- (int)containsObjectForKey:(id)arg1 options:(id)arg2;
- (id)stringForKey:(id)arg1 options:(id)arg2 status:(inout int *)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (id)objectForKey:(id)arg1 options:(id)arg2 status:(inout int *)arg3;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (id)migrateObjectsFromValet:(id)arg1 removeOnCompletion:(_Bool)arg2;
- (id)migrateObjectsMatchingQuery:(id)arg1 removeOnCompletion:(_Bool)arg2;
- (_Bool)removeAllObjects;
- (_Bool)removeObjectForKey:(id)arg1;
- (id)allKeys;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)setString:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)canAccessKeychain;
- (_Bool)isEqualToValet:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSharedAccessGroupIdentifier:(id)arg1 accessibility:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 accessibility:(unsigned long long)arg2;

@end

