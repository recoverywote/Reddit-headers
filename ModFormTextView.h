//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTextView.h>

#import "ModFormField-Protocol.h"

@class NSArray, NSLayoutConstraint;

@interface ModFormTextView : BaseTextView <ModFormField>
{
    _Bool isOptional;
    NSLayoutConstraint *_heightConstraint;
}

+ (id)textViewWithPlaceholder:(id)arg1 height:(double)arg2;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) _Bool isOptional; // @synthesize isOptional;
- (void).cxx_destruct;
- (double)heightWithMaxSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSArray *keyboardFields;
- (_Bool)requirementMet;

@end

