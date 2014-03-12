/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDConnectionLineAbstractLayout.h>

// Not exported
@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout
{
    double mStartClipT;
    double mEndClipT;
}

- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (id)quadraticCurve:(struct CGPoint [3])arg1;

@end
