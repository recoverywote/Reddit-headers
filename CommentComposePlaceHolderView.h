//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseControl.h>

@class BaseTextView, NSString;

@interface CommentComposePlaceHolderView : BaseControl
{
    NSString *_placeHolderText;
    BaseTextView *_textView;
}

@property(retain, nonatomic) BaseTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
- (void).cxx_destruct;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (id)init;

@end

