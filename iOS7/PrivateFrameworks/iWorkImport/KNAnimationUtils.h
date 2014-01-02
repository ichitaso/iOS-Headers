/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface KNAnimationUtils : NSObject
{
}

+ (void)getRecommendedPosition:(struct CGPoint *)arg1 andTransform:(struct CATransform3D *)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(struct CGRect)arg4 contentsScale:(double)arg5;
+ (struct CGRect)recommendedLayerBoundsForPlaybackOfShow:(id)arg1 inContainerWithBounds:(struct CGRect)arg2 contentsScale:(double)arg3 isExternalDisplay:(_Bool)arg4;
+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)arg1;
+ (_Bool)shouldForceDisplayPreferredMode;
+ (_Bool)isDisplayLoggingEnabled;
+ (_Bool)isFPSGraphEnabled;
+ (_Bool)isFPSLoggingEnabled;
+ (unsigned long long)randomDirection;
+ (unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)arg1;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1;
+ (id)customAttributesArrayWithDeliveryOptions:(id)arg1;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)arg1;
+ (id)timingsArrayWithDirection:(unsigned long long)arg1 duration:(double)arg2 count:(unsigned long long)arg3 chunkDuration:(double)arg4 randomness:(double)arg5;
+ (void)initialize;

@end

