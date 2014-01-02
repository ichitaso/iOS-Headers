/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView<SUCellConfigurationView>;

@interface SUCellConfiguration : NSObject
{
    id _context;
    unsigned int _isDeleteConfirmationVisible:1;
    struct CGSize _layoutSize;
    unsigned int _needsDisplay:1;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (double)minimumRowHeight;
+ (id)copyDefaultContext;
@property(nonatomic) UIView<SUCellConfigurationView> *view; // @synthesize view=_view;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool isDeleteConfirmationVisible;
- (id)stringForLabelAtIndex:(unsigned long long)arg1;
@property(nonatomic) _Bool needsDisplay;
@property(retain, nonatomic) id context;
- (void)reloadData;
@property(readonly, nonatomic) unsigned long long numberOfLabels;
@property(readonly, nonatomic) unsigned long long numberOfImages;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (_Bool)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForAccessoryViewWithFrame:(struct CGRect)arg1;
- (void)drawWithModifiers:(unsigned long long)arg1;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)dealloc;

@end

