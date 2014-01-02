/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFGraphicsDevice;

// Not exported
@interface WMFPlayer : NSObject
{
    MFGraphicsDevice *m_gdi;
    int m_records;
    unsigned short m_windowsVersion;
    _Bool m_boundsSet;
    _Bool m_ignoreSetWindowOrg;
}

+ (struct CGRect)boundsInPoints:(id)arg1;
+ (struct CGRect)boundsInLogicalUnits:(id)arg1;
+ (struct CGRect)windowBounds:(id)arg1;
+ (struct CGRect)placeableBounds:(const char *)arg1;
- (id)parseRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playIntersectClipRect:(unsigned int)arg1:(const char *)arg2;
- (int)playExcludeClipRect:(unsigned int)arg1:(const char *)arg2;
- (int)playSelectClipRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playPaintRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playInvertRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playFrameRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playFillRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playSetROP2:(unsigned int)arg1:(const char *)arg2;
- (int)playSetPolyFillMode:(unsigned int)arg1:(const char *)arg2;
- (int)playCreateRegion:(unsigned int)arg1:(const char *)arg2;
- (int)playCreateBrushIndirect:(unsigned int)arg1:(const char *)arg2;
- (int)playCreateFontIndirect:(unsigned int)arg1:(const char *)arg2;
- (int)playCreatePenIndirect:(unsigned int)arg1:(const char *)arg2;
- (int)playCreatePatternBrush:(unsigned int)arg1:(const char *)arg2;
- (int)playResizePalette:(unsigned int)arg1:(const char *)arg2;
- (int)playSetPaletteEntries:(unsigned int)arg1:(const char *)arg2;
- (int)playCreatePalette:(unsigned int)arg1:(const char *)arg2;
- (int)playRealizePalette:(unsigned int)arg1:(const char *)arg2;
- (int)playCreateDIBPatternBrush:(unsigned int)arg1:(const char *)arg2;
- (int)playDeleteObject:(unsigned int)arg1:(const char *)arg2;
- (int)playSelectPalette:(unsigned int)arg1:(const char *)arg2;
- (int)playSelectObject:(unsigned int)arg1:(const char *)arg2;
- (int)playScaleViewportExt:(unsigned int)arg1:(const char *)arg2;
- (int)playSetViewportOrg:(unsigned int)arg1:(const char *)arg2;
- (int)playSetViewportExt:(unsigned int)arg1:(const char *)arg2;
- (int)playOffsetViewportOrg:(unsigned int)arg1:(const char *)arg2;
- (int)playOffsetWindowOrg:(unsigned int)arg1:(const char *)arg2;
- (int)playScaleWindowExt:(unsigned int)arg1:(const char *)arg2;
- (int)playSetWindowOrg:(unsigned int)arg1:(const char *)arg2;
- (int)playSetWindowExt:(unsigned int)arg1:(const char *)arg2;
- (int)playPolyPolygon:(unsigned int)arg1:(const char *)arg2;
- (int)playRoundRect:(unsigned int)arg1:(const char *)arg2;
- (int)playChord:(unsigned int)arg1:(const char *)arg2;
- (int)playPie:(unsigned int)arg1:(const char *)arg2;
- (int)playArc:(unsigned int)arg1:(const char *)arg2;
- (int)playPolyline:(unsigned int)arg1:(const char *)arg2;
- (int)playPolygon:(unsigned int)arg1:(const char *)arg2;
- (int)playLineTo:(unsigned int)arg1:(const char *)arg2;
- (int)playMoveTo:(unsigned int)arg1:(const char *)arg2;
- (int)playRestoreDC:(unsigned int)arg1:(const char *)arg2;
- (int)playSaveDC:(unsigned int)arg1:(const char *)arg2;
- (int)playEllipse:(unsigned int)arg1:(const char *)arg2;
- (int)playRectangle:(unsigned int)arg1:(const char *)arg2;
- (int)playExtTextOut:(unsigned int)arg1:(const char *)arg2;
- (int)playTextOut:(unsigned int)arg1:(const char *)arg2;
- (int)playSetTextCharExtra:(unsigned int)arg1:(const char *)arg2;
- (int)playSetTextJustification:(unsigned int)arg1:(const char *)arg2;
- (int)playSetTextColour:(unsigned int)arg1:(const char *)arg2;
- (int)playSetStretchBltMode:(unsigned int)arg1:(const char *)arg2;
- (int)playSetBkMode:(unsigned int)arg1:(const char *)arg2;
- (int)playSetMapMode:(unsigned int)arg1:(const char *)arg2;
- (int)playSetBkColour:(unsigned int)arg1:(const char *)arg2;
- (int)playSetTextAlign:(unsigned int)arg1:(const char *)arg2;
- (int)playDibStretchBlt:(unsigned int)arg1:(const char *)arg2;
- (int)playStretchDib:(unsigned int)arg1:(const char *)arg2;
- (int)playDibBitBlt:(unsigned int)arg1:(const char *)arg2;
- (int)playBitBlt:(unsigned int)arg1:(const char *)arg2;
- (int)playPatBlt:(unsigned int)arg1:(const char *)arg2;
- (int)playUnsupported:(unsigned int)arg1:(const char *)arg2:(const char *)arg3;
- (int)playUnknown:(unsigned int)arg1:(unsigned int)arg2:(const char *)arg3;
- (int)playHeader:(unsigned int)arg1:(const char *)arg2;
- (void)done;
- (int)play:(unsigned int)arg1:(const char *)arg2;
- (int)records;
- (void)dealloc;
- (id)initWithGraphicsDevice:(id)arg1;

@end

