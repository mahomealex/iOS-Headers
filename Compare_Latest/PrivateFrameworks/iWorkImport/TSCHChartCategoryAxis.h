//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartAxis.h>

__attribute__((visibility("hidden")))
@interface TSCHChartCategoryAxis : TSCHChartAxis
{
    int mRangeContinuousCache;
}

+ (id)axisForInfo:(id)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)defaultProperties;
- (id)p_getGenericToCategoryPropertyMap;
- (id)p_getGenericToCategoryPropertyMapForNonMultiData;
- (id)p_getGenericToCategoryPropertyMapForMultiData;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (unsigned int)indexForSelectionPathLabelIndex:(unsigned int)arg1;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg1;
- (BOOL)isRangeContinuous;
- (BOOL)isCategory;
- (void)dealloc;
- (pair_952e027e)labelEnumeratorPair;
- (id)g_genericToSpecificPropertyMap;

@end

