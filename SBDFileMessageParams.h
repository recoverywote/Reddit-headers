//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDBaseMessageParams.h>

@class NSArray, NSData, NSString;

@interface SBDFileMessageParams : SBDBaseMessageParams
{
    NSData *_file;
    NSString *_fileUrl;
    NSArray *_thumbnailSizes;
    NSString *_fileName;
    NSString *_mimeType;
    unsigned long long _fileSize;
}

@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSArray *thumbnailSizes; // @synthesize thumbnailSizes=_thumbnailSizes;
@property(copy, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(copy, nonatomic) NSData *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)thumbnailSizesAsValue;
- (_Bool)isFileUrlEmpty;
- (_Bool)hasBinaryFile;
- (id)initWithBaseMessage:(id)arg1;
- (id)initWithFileUrl:(id)arg1;
- (id)initWithFile:(id)arg1;
- (id)initWithFile:(id)arg1 fileUrl:(id)arg2;

@end
