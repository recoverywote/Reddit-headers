//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/RichTextMediaBaseElement.h>

@class NSArray, NSURL, RichTextImageElement;

@interface RichTextVideoElement : RichTextMediaBaseElement
{
    _Bool _gifify;
    _Bool _isGif;
    RichTextImageElement *_posterImage;
    NSArray *_previewImages;
    NSArray *_obfuscatedPreviews;
    NSURL *_hlsUrl;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(copy, nonatomic) NSURL *hlsUrl; // @synthesize hlsUrl=_hlsUrl;
@property(nonatomic) _Bool gifify; // @synthesize gifify=_gifify;
@property(copy, nonatomic) NSArray *obfuscatedPreviews; // @synthesize obfuscatedPreviews=_obfuscatedPreviews;
@property(copy, nonatomic) NSArray *previewImages; // @synthesize previewImages=_previewImages;
@property(retain, nonatomic) RichTextImageElement *posterImage; // @synthesize posterImage=_posterImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)contentUrl;
- (struct CGSize)contentSize;
- (id)initWithData:(id)arg1 mediaMetadata:(id)arg2;

@end

