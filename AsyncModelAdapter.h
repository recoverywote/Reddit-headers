//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AsyncModelAdapter : NSObject
{
    Class _modelClass;
}

@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (id)copiedModel:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)fullPropertiesWithMetadata;
@property(readonly, nonatomic) NSArray *asyncModelProperties;
- (id)getProperty:(id)arg1 fromModel:(id)arg2;
- (void)setProperty:(id)arg1 withResult:(id)arg2 onModel:(id)arg3;
- (id)modelFromResultSet:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end

