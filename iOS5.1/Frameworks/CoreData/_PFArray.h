/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@interface _PFArray : NSArray
{
    int _cd_rc;
    unsigned int _count;
    id *_array;
    struct _PFArrayFlags _flags;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3;
- (id *)_objectsPointer;
- (id)arrayFromObjectIDs;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)newArrayFromObjectIDs;
- (void)dealloc;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned int)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned int)_flags;
- (void)_setShouldRelease:(BOOL)arg1;
- (void)_setShouldUseExtendedRelease:(BOOL)arg1;

@end

