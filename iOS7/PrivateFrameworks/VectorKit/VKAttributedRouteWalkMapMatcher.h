/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKAttributedRouteMapMatcher.h>

// Not exported
@interface VKAttributedRouteWalkMapMatcher : VKAttributedRouteMapMatcher
{
}

- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned long long)arg2 previousMatchGood:(_Bool)arg3;
- (CDStruct_3dc48697)_determineBestMatch:(const CDStruct_3dc48697 *)arg1 trackedLocation:(id)arg2 rawLocation:(id)arg3;
- (_Bool)_bestMatchToPolylineSection:(const struct RouteMapMatchingSection *)arg1 rawLocation:(id)arg2 point:(const struct VKPoint *)arg3 bounds:(const CDStruct_d2b197d1 *)arg4 distanceToSearch:(double)arg5 trackedLocation:(id)arg6 matchParamsCurrentStep:(CDStruct_3dc48697 *)arg7;
- (id)findClosestCoordinateAlongSectionsFromDataSource:(id)arg1 forLocation:(id)arg2 useCLMatchedLocation:(_Bool)arg3 trackedLocation:(id)arg4 onDate:(id)arg5;

@end

