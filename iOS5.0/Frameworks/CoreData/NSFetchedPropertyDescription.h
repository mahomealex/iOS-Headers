/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyDescription.h>

@class NSFetchRequest, NSString;

@interface NSFetchedPropertyDescription : NSPropertyDescription
{
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)fetchRequest;
- (void)setFetchRequest:(id)arg1;
- (BOOL)isTransient;
- (BOOL)isReadOnly;
- (unsigned int)_propertyType;
- (void)_createCachesAndOptimizeState;

@end
