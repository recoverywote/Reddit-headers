//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/RichTextBaseElement.h>

@class NSArray;

@interface RichTextTableElement : RichTextBaseElement
{
    NSArray *_headerRow;
    NSArray *_tableRows;
}

@property(copy, nonatomic) NSArray *tableRows; // @synthesize tableRows=_tableRows;
@property(copy, nonatomic) NSArray *headerRow; // @synthesize headerRow=_headerRow;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeForTableCellElement:(id)arg1 config:(id)arg2 textSizeCache:(id)arg3;
- (double)recommendedWidthForColumn:(unsigned long long)arg1 config:(id)arg2 textSizeCache:(id)arg3;
- (id)recommendedTabStopsForRow:(id)arg1 config:(id)arg2 textSizeCache:(id)arg3;
- (id)attributedStringForRow:(id)arg1 config:(id)arg2 highlight:(_Bool)arg3 textSizeCache:(id)arg4;
- (id)attributedStringWithConfig:(id)arg1;
- (id)initWithData:(id)arg1 mediaMetadata:(id)arg2;

@end
