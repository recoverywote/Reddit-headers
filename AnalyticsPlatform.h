//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsPlatform : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _nameIsSet;
    _Bool _device_idIsSet;
    _Bool _device_nameIsSet;
    _Bool _os_nameIsSet;
    _Bool _os_versionIsSet;
    _Bool _browser_nameIsSet;
    _Bool _browser_versionIsSet;
    _Bool _fingerprintIsSet;
    _Bool _fingerprint_created_timestampIsSet;
    NSString *_name;
    NSString *_device_id;
    NSString *_device_name;
    NSString *_os_name;
    NSString *_os_version;
    NSString *_browser_name;
    NSString *_browser_version;
    NSString *_fingerprint;
    long long _fingerprint_created_timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fingerprint_created_timestampIsSet; // @synthesize fingerprint_created_timestampIsSet=_fingerprint_created_timestampIsSet;
@property(nonatomic) long long fingerprint_created_timestamp; // @synthesize fingerprint_created_timestamp=_fingerprint_created_timestamp;
@property(nonatomic) _Bool fingerprintIsSet; // @synthesize fingerprintIsSet=_fingerprintIsSet;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(nonatomic) _Bool browser_versionIsSet; // @synthesize browser_versionIsSet=_browser_versionIsSet;
@property(copy, nonatomic) NSString *browser_version; // @synthesize browser_version=_browser_version;
@property(nonatomic) _Bool browser_nameIsSet; // @synthesize browser_nameIsSet=_browser_nameIsSet;
@property(copy, nonatomic) NSString *browser_name; // @synthesize browser_name=_browser_name;
@property(nonatomic) _Bool os_versionIsSet; // @synthesize os_versionIsSet=_os_versionIsSet;
@property(copy, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(nonatomic) _Bool os_nameIsSet; // @synthesize os_nameIsSet=_os_nameIsSet;
@property(copy, nonatomic) NSString *os_name; // @synthesize os_name=_os_name;
@property(nonatomic) _Bool device_nameIsSet; // @synthesize device_nameIsSet=_device_nameIsSet;
@property(copy, nonatomic) NSString *device_name; // @synthesize device_name=_device_name;
@property(nonatomic) _Bool device_idIsSet; // @synthesize device_idIsSet=_device_idIsSet;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetFingerprint_created_timestamp;
- (void)unsetFingerprint;
- (void)unsetBrowser_version;
- (void)unsetBrowser_name;
- (void)unsetOs_version;
- (void)unsetOs_name;
- (void)unsetDevice_name;
- (void)unsetDevice_id;
- (void)unsetName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 device_id:(id)arg2 device_name:(id)arg3 os_name:(id)arg4 os_version:(id)arg5 browser_name:(id)arg6 browser_version:(id)arg7 fingerprint:(id)arg8 fingerprint_created_timestamp:(long long)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

