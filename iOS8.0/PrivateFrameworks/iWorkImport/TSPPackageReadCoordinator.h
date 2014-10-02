//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPReadCoordinatorBase.h>

#import "TSPReadCoordinator.h"

@class NSError, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUUID, TSPDocumentResourceDataProvider, TSPDocumentRevision, TSPFinalizeHandlerQueue, TSPObject, TSPObjectContext, TSPPackage, TSPPackageMetadata, TSPPersistedObjectUUIDMap;

__attribute__((visibility("hidden")))
@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator>
{
    TSPObjectContext *_context;
    NSUUID *_documentUUID;
    TSPObject *_documentObject;
    TSPPackage *_package;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    TSPDocumentResourceDataProvider *_documentResourceDataProvider;
    BOOL _areExternalDataReferencesAllowed;
    TSPPackageMetadata *_cachedMetadata;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioCompletionQueue;
    NSObject<OS_dispatch_queue> *_readCompletionQueue;
    NSObject<OS_dispatch_queue> *_componentQueue;
    hash_map_18963f5d _readIdentifiers;
    NSMutableArray *_componentsToUpgrade;
    NSObject<OS_dispatch_queue> *_objectQueue;
    NSMapTable *_objects;
    hash_map_18963f5d _readExternalObjects;
    BOOL _didRequireUpgrade;
    TSPDocumentRevision *_documentRevision;
    int _preferredPackageType;
    unsigned long long _saveToken;
}

@property(readonly, nonatomic) BOOL didRequireUpgrade; // @synthesize didRequireUpgrade=_didRequireUpgrade;
@property(readonly, nonatomic) int preferredPackageType; // @synthesize preferredPackageType=_preferredPackageType;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) TSPDocumentRevision *documentRevision; // @synthesize documentRevision=_documentRevision;
@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4;
- (void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;
- (id)context;
@property(readonly, nonatomic) BOOL isReadingFromDocument;
- (id)baseObjectUUID;
- (unsigned long long)fileFormatVersion;
- (void)prepareForFullDocumentUpgradeImpl;
- (void)prepareForFullDocumentUpgrade;
- (void)updateObjectContextForSuccessfulRead;
- (void)processMetadata:(id)arg1;
- (void)didReadMetadata:(id)arg1;
- (BOOL)requestDocumentResourcesUsingDataProvider:(id)arg1;
- (id)readPackageMetadataWithError:(id *)arg1;
- (void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 fromComponent:(id)arg4;
- (void)didReadObjects:(id)arg1 forComponent:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)readComponentAsync:(id)arg1;
- (BOOL)readComponentIfNeededAsync:(id)arg1;
- (void)readComponent:(id)arg1 additionalComponents:(id)arg2 requireUpgrade:(BOOL)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (BOOL)endReading;
- (id)error;
- (void)setError:(id)arg1;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 documentResourceDataProvider:(id)arg5 areExternalDataReferencesAllowed:(BOOL)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
