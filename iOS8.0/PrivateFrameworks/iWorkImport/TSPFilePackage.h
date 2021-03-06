//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPPackage.h>

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, TSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSPFilePackage : TSPPackage
{
    NSObject<OS_dispatch_queue> *_bookmarkDataQueue;
    TSUTemporaryDirectory *_dataDirectory;
    NSMutableDictionary *_dataURLMap;
}

+ (unsigned int)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (BOOL)isFilePackageFormatURL:(id)arg1;
+ (BOOL)isFilePackageFormatZipArchive:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (BOOL)bookmarkDataNeedsWriteForDataStorage:(id)arg1 options:(unsigned int)arg2;
- (id)bookmarkDataForDataStorage:(id)arg1 options:(unsigned int)arg2;
- (id)newDataStorageAtRelativePath:(id)arg1;
- (int)packageType;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6;

@end

