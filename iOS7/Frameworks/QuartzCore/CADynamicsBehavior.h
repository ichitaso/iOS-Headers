/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior
{
}

+ (id)defaultValueForKey:(id)arg1;
@property _Bool reactsToCollisions;
@property double angularDrag;
@property double drag;
@property double springScale;
@property double collisionInterval;
@property double stoppedAngularVelocity;
@property double stoppedVelocity;
@property double minimumTimeStep;
@property double timeStep;
@property(copy) NSArray *forceFields;
@property(copy) NSArray *springs;
- (struct Object *)CA_copyRenderValue;

@end

