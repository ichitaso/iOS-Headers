/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCHChartFeature.h>

// Not exported
@interface TSCHChartFeaturePie : TSCHChartFeature
{
}

- (_Bool)supportsCategoryLabelsInChartRangeEditor;
- (_Bool)supportsMoreThanOneLiveCategory;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_9aa9521f)arg2;
- (Class)presetImagerClass;
- (_Bool)supportsPercentNumberFormatting;
- (_Bool)supportsLabelExplosion;
- (_Bool)supportsElementSeriesNames;
- (_Bool)supportsBorderFrame;
- (_Bool)isPie;
- (_Bool)supportsErrorBars;
- (_Bool)supportsTrendLines;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (_Bool)supportsBackgroundFill;
- (_Bool)supportsGroupedShadows;
- (id)userInterfaceName;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (void)p_initializeAxisIDs;

@end

