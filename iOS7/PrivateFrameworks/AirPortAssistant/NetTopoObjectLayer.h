/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class BubbleTextLayer, NSMutableArray, NSString, NSTimer, TopoNumberBadge, TopoProgressBar, UIImage;

@interface NetTopoObjectLayer : CALayer
{
    id _associatedNode;
    id _owningView;
    double _layoutScale;
    _Bool _smallSize;
    int _topoStyle;
    struct CGSize _boundsSizeConstraint;
    UIImage *_statusBadgeImage;
    _Bool _selectable;
    struct CGColor *_selectionColor;
    struct CGColor *_labelUnselectedFillColor;
    struct CGColor *_labelSelectedFillColor;
    struct CGColor *_labelSelectedFillColor2;
    struct CGColor *_labelUnselectedTextColor;
    struct CGColor *_labelSelectedTextColor;
    struct CGColor *_secondaryLabelUnselectedTextColor;
    struct CGColor *_secondaryLabelSelectedTextColor;
    struct CGRect _imageFrame;
    struct CGRect _imageCoreFrame;
    struct CGRect _imageSelectionFrame;
    double _selectionCornerRadius;
    double _selectionRectOutset;
    NSString *_labelString;
    BubbleTextLayer *_labelLayer;
    double _labelPinnedHeight;
    NSString *_secondaryLabelString;
    BubbleTextLayer *_secondaryLabelLayer;
    UIImage *_statusLights[4];
    NSTimer *_statusLightTimer;
    float _statusLightInterval;
    unsigned int _statusLightState;
    unsigned int _statusLightMode;
    TopoNumberBadge *_topoNumberBadge;
    unsigned long long _topoBadgeNumber;
    TopoProgressBar *_topoProgressBar;
    float _topoProgressValue;
    id _userObject;
    NSString *_saveLable;
    unsigned long long _row;
    unsigned long long _column;
    struct CGPoint _layoutOrigin;
    unsigned long long _number;
    double _prelim;
    double _mod;
    double _change;
    double _shift;
    _Bool _isExpanded;
    NetTopoObjectLayer *_contourThread;
    NetTopoObjectLayer *_ancestor;
    _Bool _selected;
    _Bool _ghosted;
    NetTopoObjectLayer *_parent;
    NSMutableArray *_children;
    NSString *_saveLabel;
    struct CGImage *_objectImage;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(retain, nonatomic) struct CGImage *objectImage; // @synthesize objectImage=_objectImage;
@property(retain, nonatomic) NSString *saveLabel; // @synthesize saveLabel=_saveLabel;
@property(retain, nonatomic) id userObject; // @synthesize userObject=_userObject;
@property(nonatomic) unsigned long long topoBadgeNumber; // @synthesize topoBadgeNumber=_topoBadgeNumber;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NetTopoObjectLayer *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) id associatedNode; // @synthesize associatedNode=_associatedNode;
@property(nonatomic) NetTopoObjectLayer *ancestor; // @synthesize ancestor=_ancestor;
@property(nonatomic) NetTopoObjectLayer *contourThread; // @synthesize contourThread=_contourThread;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_isExpanded;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
@property(nonatomic) double shift; // @synthesize shift=_shift;
@property(nonatomic) double change; // @synthesize change=_change;
@property(nonatomic) double mod; // @synthesize mod=_mod;
@property(nonatomic) double prelim; // @synthesize prelim=_prelim;
@property(nonatomic) struct CGPoint layoutOrigin; // @synthesize layoutOrigin=_layoutOrigin;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) _Bool smallSize; // @synthesize smallSize=_smallSize;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3;
- (struct CGRect)getFrameContainingAllSublayers;
- (struct CGRect)getUserInteractionBounds;
- (CDStruct_f9662865)getConnectionAttachmentLocations;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
@property(nonatomic) double layoutScale; // @synthesize layoutScale=_layoutScale;
@property(nonatomic) unsigned int statusLightMode;
- (void)statusLightUpdateTimer:(id)arg1;
- (void)setStatusLightStateFromMode;
@property(retain, nonatomic) UIImage *statusBadgeImage;
- (void)setStatusBadgeImagePriv:(id)arg1;
- (void)deallocStatusImages;
- (void)loadStatusImagesForScale:(double)arg1;
@property(nonatomic) float topoProgressValue; // @synthesize topoProgressValue=_topoProgressValue;
@property(retain, nonatomic) NSString *secondaryLabel;
@property(nonatomic) double labelPinnedHeight;
@property(retain, nonatomic) NSString *label;
@property(nonatomic, getter=isGhosted) _Bool ghosted; // @synthesize ghosted=_ghosted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) id owningView; // @synthesize owningView=_owningView;
@property(nonatomic) struct CGSize boundsSizeConstraint;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)lastChild;
- (id)firstChild;
- (id)childAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfChildren;
@property(readonly, nonatomic) NetTopoObjectLayer *parentDevice;
- (void)pickCorrectImagesForContentsScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;

@end

