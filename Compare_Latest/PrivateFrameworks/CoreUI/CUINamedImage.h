//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUIRenditionKey, NSString;

@interface CUINamedImage : NSObject
{
    CUIRenditionKey *_key;
    unsigned int _storageRef;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)baseKey;
- (id)description;
@property(readonly, nonatomic) int exifOrientation;
@property(readonly, nonatomic) BOOL isStructured;
@property(readonly, nonatomic) int templateRenderingMode;
@property(readonly, nonatomic) BOOL isTemplate;
@property(readonly, nonatomic) BOOL isVectorBased;
@property(readonly, nonatomic) BOOL hasSliceInformation;
@property(readonly, nonatomic) int resizingMode;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) float opacity;
@property(readonly, nonatomic) CDStruct_fd71c141 alignmentEdgeInsets;
@property(readonly, nonatomic) struct CGRect alignmentRect;
@property(readonly, nonatomic) CDStruct_fd71c141 edgeInsets;
- (float)positionOfSliceBoundary:(unsigned int)arg1;
@property(readonly, nonatomic) int imageType;
- (int)graphicsClass;
- (int)memoryClass;
- (int)sizeClassVertical;
- (int)sizeClassHorizontal;
- (unsigned int)subtype;
- (int)idiom;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGImage *image;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_themeStore;
- (id)renditionKey;
- (void)dealloc;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned int)arg3;

@end

