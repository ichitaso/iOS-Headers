/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

#import "_CIFilterProperties-Protocol.h"

@class CIImage, CIVector;

// Not exported
@interface CIToneCurve : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIVector *inputPoint2;
    CIVector *inputPoint3;
    CIVector *inputPoint4;
    CIImage *_curveImage;
}

+ (void)splineCurveTable:(double *)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint *)arg4;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1 linear:(_Bool)arg2;
+ (id)customAttributes;
@property(copy, nonatomic) CIVector *inputPoint4; // @synthesize inputPoint4;
@property(copy, nonatomic) CIVector *inputPoint3; // @synthesize inputPoint3;
@property(copy, nonatomic) CIVector *inputPoint2; // @synthesize inputPoint2;
@property(copy, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(copy, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernel16;
- (void)setDefaults;
- (void)dealloc;

@end

