//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"
#import "VKStylesheetObserver.h"

@class VGLRenderState, VKMapModel, VKStylesheet;

__attribute__((visibility("hidden")))
@interface VKSkyModel : VKModelObject <VKMapLayer, VKStylesheetObserver>
{
    VKMapModel *_mapModel;
    float _skyStartOffset;
    VGLRenderState *_renderState;
    struct _VGLColor _fillColor;
    struct _VGLColor _horizonColor;
}

+ (BOOL)reloadOnStylesheetChange;
@property(readonly, nonatomic) struct _VGLColor horizonColor; // @synthesize horizonColor=_horizonColor;
@property(readonly, nonatomic) struct _VGLColor fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
- (id).cxx_construct;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) VKStylesheet *stylesheet;
- (unsigned int)supportedRenderPasses;
- (unsigned int)mapLayerPosition;

@end

