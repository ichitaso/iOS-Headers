//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (MKAdditions)
+ (id)_mapkit_formattedStringForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)_mapkit_voiceOverLocalizedDistanceStringWithMeters:(unsigned int)arg1 inMetric:(BOOL)arg2 displaysYardsForShortDistances:(BOOL)arg3 includeTrip:(BOOL)arg4;
+ (id)_mapkit_localizedDistanceStringWithMeters:(unsigned int)arg1 inMetric:(BOOL)arg2 displaysYardsForShortDistances:(BOOL)arg3 includeTrip:(BOOL)arg4;
+ (id)_mapkit_formattedStringForFloatingPointNumber:(id)arg1;
+ (id)_mapkit_formattedStringForFloat:(float)arg1;
+ (id)_mapkit_formattedStringForInteger:(int)arg1;
- (BOOL)_mapkit_isCJK;
@end

