//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselNodeDelegate-Protocol.h"

@class Carousel, CarouselContainerNode, CarouselItem, DetailedSubscribeNode, NSArray, NSObject, NSString, NSURL, PillWidgetModel;

@protocol CarouselContainerNodeDelegate <CarouselNodeDelegate>
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didTapActionName:(NSString *)arg2 carouselItem:(CarouselItem *)arg3 atIndex:(long long)arg4 carouselItems:(NSArray *)arg5;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didTapCarouselItem:(CarouselItem *)arg2 atIndex:(long long)arg3 carouselItems:(NSArray *)arg4;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 performRemoveOfCarousel:(Carousel *)arg2 removalReason:(unsigned long long)arg3;
- (NSString *)analyticsScreenViewName;

@optional
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didTapSeeMorePillsFromModel:(PillWidgetModel *)arg2;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didTapTitleObject:(NSObject *)arg2 index:(unsigned long long)arg3;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 showPrivacyInfoForCarousel:(Carousel *)arg2;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didResizeCarousel:(Carousel *)arg2;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didTapLinkInNode:(DetailedSubscribeNode *)arg2 linkURL:(NSURL *)arg3;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 didSubscribeInNode:(DetailedSubscribeNode *)arg2;
- (void)carouselContainerNode:(CarouselContainerNode *)arg1 showLessOfCarousel:(Carousel *)arg2;
@end

