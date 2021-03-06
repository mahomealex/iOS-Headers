/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject
{
    long long _fileSize;
    BOOL _hasThumbnail;
    BOOL _hasMetadata;
    BOOL _raw;
    int _fetchingThumbnailLock;
    BOOL _fetchingThumbnail;
    int _fetchingMetadataLock;
    BOOL _fetchingMetadata;
    struct CGImage *_originalThumbnail;
    struct CGImage *_thumbnail;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    unsigned int _orientation;
    BOOL _hasOverriddenOrientation;
}

@property BOOL hasOverriddenOrientation; // @synthesize hasOverriddenOrientation=_hasOverriddenOrientation;
@property unsigned int orientation; // @synthesize orientation=_orientation;
@property(retain) NSMutableDictionary *metadata_hidden; // @synthesize metadata_hidden=_metadata_hidden;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(getter=isRaw) BOOL raw; // @synthesize raw=_raw;
@property BOOL hasMetadata; // @synthesize hasMetadata=_hasMetadata;
@property BOOL hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
@property struct CGImage *originalThumbnail; // @dynamic originalThumbnail;
@property struct CGImage *thumbnail; // @dynamic thumbnail;
- (void)finalize;
- (void)dealloc;

@end

