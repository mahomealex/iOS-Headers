//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreThemeDocument, NSString;

@interface TDCorruptionRepair : NSObject
{
    NSString *documentPath;
    CoreThemeDocument *document;
}

- (void)saveDocument;
- (void)repairDocument;
- (void)repairAssets;
- (void)repairRenditions;
- (id)getAllObjectsForEntity:(id)arg1;
- (void)dealloc;
- (id)initWithDocumentPath:(id)arg1;

@end

