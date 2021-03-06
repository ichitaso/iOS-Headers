//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIClientContext, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIResourceLoader, SKUIStorePageSectionsViewController, UICollectionView, UIColor;

@interface SKUIStorePageSectionContext : NSObject
{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    float _activePageWidth;
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    int _defaultPinningTransitionStyle;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    float _landscapePageWidth;
    SKUIMetricsController *_metricsController;
    SKUIStorePageSectionsViewController *_parentViewController;
    UIColor *_placeholderColor;
    float _portraitPageWidth;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
    int _layoutStyle;
}

@property(readonly, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(readonly, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) float portraitPageWidth; // @synthesize portraitPageWidth=_portraitPageWidth;
@property(readonly, nonatomic) __weak SKUIStorePageSectionsViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, nonatomic) float landscapePageWidth; // @synthesize landscapePageWidth=_landscapePageWidth;
@property(readonly, nonatomic) int defaultPinningTransitionStyle; // @synthesize defaultPinningTransitionStyle=_defaultPinningTransitionStyle;
@property(readonly, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) float activePageWidth; // @synthesize activePageWidth=_activePageWidth;
@property(readonly, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void).cxx_destruct;
- (void)_setTextLayoutCache:(id)arg1;
- (void)_setResourceLoader:(id)arg1;
- (void)_setPortraitPageWidth:(float)arg1;
- (void)_setParentViewController:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setLayoutStyle:(int)arg1;
- (void)_setLandscapePageWidth:(float)arg1;
- (void)_setDefaultPinningTransitionStyle:(int)arg1;
- (void)_setColorScheme:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setActivePageWidth:(float)arg1;
- (void)_setActiveMetricsImpressionSession:(id)arg1;
@property(readonly, nonatomic) UIColor *placeholderColor;
@property(readonly, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property(readonly, nonatomic) SKUIClientContext *clientContext;
- (id)init;

@end

