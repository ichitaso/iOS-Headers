/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SUCellConfigurationView-Protocol.h"

@class NSMutableArray, SUCellConfiguration, UIBezierPath;

@interface SUTableCellContentView : UIView <SUCellConfigurationView>
{
    int _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled:1;
    unsigned int _highlighted:1;
    unsigned int _highlightsOnlyContentView:1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout:1;
}

@property(retain, nonatomic) SUCellConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) int clipCorners; // @synthesize clipCorners=_clipCorners;
- (id)_scriptingInfo;
- (void)_updateDisabledStyleForSubviews;
- (void)_stopUsingSubviewLayout;
- (void)_startUsingSubviewLayout;
- (void)_removeSubviewsForConfiguration;
- (void)_reloadSubviewsForConfiguration;
- (void)_reloadSubviewAlphasAnimated:(_Bool)arg1;
- (id)_clippedImageForImage:(id)arg1;
- (id)_clipPath;
@property(nonatomic) _Bool usesSubviews;
- (void)setUsesSubviews:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool highlightsOnlyContentView;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool drawAsDisabled;
@property(nonatomic, getter=isDeleteConfirmationVisible) _Bool deleteConfirmationVisisble;
- (void)reloadView;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

