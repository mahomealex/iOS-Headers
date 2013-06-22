/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/_PLManagedAlbumList.h>

#import "PLAlbumContainer-Protocol.h"

@class NSMutableOrderedSet, NSString, PLFilteredAlbumList;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer>
{
    PLFilteredAlbumList *_filteredAlbumLists[5];
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)photoStreamAlbumListInPhotoLibrary:(id)arg1;
+ (id)placesAlbumListInPhotoLibrary:(id)arg1;
+ (id)facesAlbumListInPhotoLibrary:(id)arg1;
+ (id)eventListInPhotoLibrary:(id)arg1;
+ (id)albumListInPhotoLibrary:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) BOOL isRegisteredForChanges; // @synthesize isRegisteredForChanges;
@property(readonly, nonatomic) NSString *_typeDescription;
@property(readonly, nonatomic) NSString *_prettyDescription;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
@property(readonly, nonatomic) int filter;
@property(readonly, nonatomic) BOOL canEditAlbums;
@property(readonly, nonatomic) BOOL hasAtLeastOneAlbum;
@property(readonly, nonatomic) NSMutableOrderedSet *albums;
@property(nonatomic) int albumListType;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)dealloc;

@end
