//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Branch/BNCServerRequest.h>

@interface BranchLATDRequest : BNCServerRequest
{
    long long _attributionWindow;
}

@property(nonatomic) long long attributionWindow; // @synthesize attributionWindow=_attributionWindow;
- (void)processResponse:(id)arg1 error:(id)arg2;
- (void)makeRequest:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)buildRequestParams;
- (id)serverURL;
- (id)init;

@end

