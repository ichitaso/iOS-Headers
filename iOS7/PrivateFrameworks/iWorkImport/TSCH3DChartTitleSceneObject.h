/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

// Not exported
@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
{
}

+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;
+ (struct TSCH3DScenePart)partWithChartInfo:(id)arg1;
+ (struct CGSize)labelWrapSizeForScene:(id)arg1;
+ (_Bool)setLabelWrapBounds:(const box_80622335 *)arg1 forScene:(id)arg2;
+ (struct CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id *)arg2;
- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;
- (_Bool)isAnnotated;
- (void)renderLabels:(id)arg1;
- (void)renderAnnotatedLabels:(id)arg1;
- (void)p_renderLabel:(id)arg1;

@end

