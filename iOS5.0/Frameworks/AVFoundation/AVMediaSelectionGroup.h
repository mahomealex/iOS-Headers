/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class AVMediaSelectionGroupInternal, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying>
{
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

+ (id)mediaSelectionGroupWithAsset:(id)arg1 alternateTrackIDs:(id)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 trackID:(int)arg2;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
- (id)init;
- (id)_weakReference;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)asset;
@property(readonly, nonatomic) NSArray *options;
@property(readonly, nonatomic) BOOL allowsEmptySelection;
- (BOOL)_isAlternateTrackGroup;
- (BOOL)_isKeyValueGroup;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;

@end

