/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDShadow.h>

// Not exported
@interface TSDCurvedShadow : TSDShadow
{
    double mCurve;
}

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(_Bool)arg7;
@property(readonly, nonatomic) double curve; // @synthesize curve=mCurve;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (_Bool)showForEditingText;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)offsetFromCurve;
- (double)getVerticalOffset:(struct CGSize)arg1;
- (struct CGPoint)boundsShiftForSize:(struct CGSize)arg1;
- (struct CGRect)expandedBoundsForRect:(struct CGRect)arg1;
- (double)paddingForBlur;
- (unsigned long long)shadowType;
- (id)description;
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(_Bool)arg7;

@end

