//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/NSObject-Protocol.h>

@class ASNetworkImageLoadInfo, ASNetworkImageNode, NSError, UIImage;

@protocol ASNetworkImageNodeDelegate <NSObject>

@optional
- (void)imageNodeDidFinishDecoding:(ASNetworkImageNode *)arg1;
- (void)imageNode:(ASNetworkImageNode *)arg1 didFailWithError:(NSError *)arg2;
- (void)imageNodeDidStartFetchingData:(ASNetworkImageNode *)arg1;
- (void)imageNode:(ASNetworkImageNode *)arg1 didLoadImage:(UIImage *)arg2;
- (void)imageNode:(ASNetworkImageNode *)arg1 didLoadImage:(UIImage *)arg2 info:(ASNetworkImageLoadInfo *)arg3;
@end

