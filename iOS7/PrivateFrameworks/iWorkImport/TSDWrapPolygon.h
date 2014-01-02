/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface TSDWrapPolygon : NSObject <NSCopying>
{
    void *mPolygon;
    _Bool mIntersectsSelf;
    _Bool mComputedSelfIntersection;
    struct CGRect mBounds;
    _Bool mComputedBounds;
}

- (id).cxx_construct;
- (struct CGPoint)intersectionPointBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (id)bezierPath;
- (struct CGRect)bounds;
- (void *)polygon;
- (_Bool)intersectsSelf;
- (void)setIntersectsSelf:(_Bool)arg1;
- (void)setPath:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;

@end

