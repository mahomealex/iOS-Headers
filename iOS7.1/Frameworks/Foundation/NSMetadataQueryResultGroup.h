//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSMetadataQueryResultGroup : NSObject
{
    id _private[9];
    unsigned int _private2[1];
    void *_reserved;
}

- (id)results;
- (void)_zapResultArray;
- (id)resultAtIndex:(unsigned int)arg1;
- (unsigned int)resultCount;
- (id)subgroups;
- (id)value;
- (id)attribute;
- (void)_addResult:(unsigned int)arg1;
- (void)dealloc;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned int)arg3 value:(id)arg4;

@end

