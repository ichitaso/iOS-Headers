/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH2DChartLayout.h>

@class TSCH3DChartSceneAreaLayoutItem, TSCH3DScene;

// Not exported
@interface TSCH3DChartLayout : TSCH2DChartLayout
{
}

+ (id)propertiesThatInvalidateLayout;
+ (id)p_propertiesThatInvalidateShadows;
+ (id)p_allScaleProperties;
+ (id)p_propertiesThatResetSeriesStorage;
+ (id)p_propertiesThatResetSceneProperties;
+ (_Bool)layoutFrameEnclosesInfoGeometry;
+ (void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(_Bool)arg2 willModifyBlock:(id)arg3;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (id)mutationTuplesToApplyDuringResize;
- (void)modelInvalidated:(id)arg1;
- (void)processChanges:(id)arg1;
- (void)p_resetSeriesStorage;
- (void)p_resetSceneProperties;
@property(readonly, nonatomic) TSCH3DScene *scene;
@property(readonly, nonatomic) const struct ChartProjectedBoundsSpaces *projectedBounds;
- (id)infoChartScale;
- (id)containingViewportVector;
@property(readonly, nonatomic) _Bool hasProjectedBounds;
@property(readonly, nonatomic) TSCH3DChartSceneAreaLayoutItem *areaItem;
- (void)p_ensureValidForCircumscribingSizeLayout;
- (void)setLayoutSettings:(CDStruct_9aa9521f)arg1;
- (_Bool)p_shouldClearSceneForLayoutSettings:(CDStruct_9aa9521f)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

