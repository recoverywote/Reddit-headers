//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface MarkdownTableCell : NSObject
{
    NSAttributedString *_attributedRepresentation;
    struct CGSize _attributedRepresentationSize;
}

@property(nonatomic) struct CGSize attributedRepresentationSize; // @synthesize attributedRepresentationSize=_attributedRepresentationSize;
@property(retain, nonatomic) NSAttributedString *attributedRepresentation; // @synthesize attributedRepresentation=_attributedRepresentation;
- (void).cxx_destruct;
- (void)populateWithCellMarkdown:(id)arg1 config:(id)arg2 forcedCellFontOrNil:(id)arg3 cellConfiguration:(id)arg4;

@end

