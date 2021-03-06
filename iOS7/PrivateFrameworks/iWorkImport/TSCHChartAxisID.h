/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface TSCHChartAxisID : NSObject <NSCopying>
{
    int mType;
    unsigned long long mOrdinal;
}

+ (id)axisIDWithType:(int)arg1 ordinal:(unsigned long long)arg2;
@property(readonly) unsigned long long ordinal; // @synthesize ordinal=mOrdinal;
@property(readonly) int type; // @synthesize type=mType;
- (void)saveToArchive:(struct ChartAxisIDArchive *)arg1;
- (id)initWithArchive:(const struct ChartAxisIDArchive *)arg1;
- (id)description;
- (id)debuggingName;
- (_Bool)intersectsAxisID:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 ordinal:(unsigned long long)arg2;

@end

