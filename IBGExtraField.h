//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IBGExtraField : NSObject
{
    _Bool _isRequired;
    _Bool _isTextAlignmentAssigned;
    NSString *_title;
    NSString *_jsonTitle;
    NSString *_value;
    NSString *_identifier;
    long long _textAlignment;
}

@property(nonatomic) _Bool isTextAlignmentAssigned; // @synthesize isTextAlignmentAssigned=_isTextAlignmentAssigned;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *jsonTitle; // @synthesize jsonTitle=_jsonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 jsonTitle:(id)arg2 isRequired:(_Bool)arg3;

@end

