//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MarkdownTableModel : NSObject
{
    NSMutableArray *_rows;
}

@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)recommendedTabStopsForRow:(id)arg1;
- (double)recommendedWidthForColumn:(unsigned long long)arg1 inRow:(id)arg2;
- (void)populateWithTableMarkdown:(id)arg1 config:(id)arg2;
- (id)initWithTableMarkdown:(id)arg1 config:(id)arg2;

@end

