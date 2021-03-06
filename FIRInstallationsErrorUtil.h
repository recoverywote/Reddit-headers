//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FIRInstallationsErrorUtil : NSObject
{
}

+ (id)installationsErrorWithCode:(unsigned long long)arg1 failureReason:(id)arg2 underlyingError:(id)arg3;
+ (id)publicDomainErrorWithError:(id)arg1;
+ (id)networkErrorWithError:(id)arg1;
+ (id)FIDRegistrationErrorWithResponseMissingField:(id)arg1;
+ (id)JSONSerializationError:(id)arg1;
+ (_Bool)isAPIError:(id)arg1 withHTTPCode:(long long)arg2;
+ (id)APIErrorWithHTTPResponse:(id)arg1 data:(id)arg2;
+ (id)corruptedIIDTokenData;
+ (id)installationItemNotFoundForAppID:(id)arg1 appName:(id)arg2;
+ (id)keychainErrorWithFunction:(id)arg1 status:(int)arg2;
+ (id)keyedArchiverErrorWithError:(id)arg1;
+ (id)keyedArchiverErrorWithException:(id)arg1;

@end

