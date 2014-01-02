/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class MKMapItem, NSDate;

@interface MKDirectionsRequest : NSObject <NSCopying>
{
    MKMapItem *_source;
    MKMapItem *_destination;
    unsigned long long _transportType;
    _Bool _requestsAlternateRoutes;
    _Bool _includeTravelTimes;
    _Bool _includeTrafficIncidents;
    _Bool _includeZilchRoutePoints;
    _Bool _includeBasicRoutePoints;
    _Bool _includeEntryPoints;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
}

+ (_Bool)isDirectionsRequestURL:(id)arg1;
@property(readonly, nonatomic) _Bool _includeEntryPoints; // @synthesize _includeEntryPoints;
@property(readonly, nonatomic) _Bool _includeBasicRoutePoints; // @synthesize _includeBasicRoutePoints;
@property(readonly, nonatomic) _Bool _includeZilchRoutePoints; // @synthesize _includeZilchRoutePoints;
@property(readonly, nonatomic) _Bool _includeTrafficIncidents; // @synthesize _includeTrafficIncidents;
@property(readonly, nonatomic) _Bool _includeTravelTimes; // @synthesize _includeTravelTimes;
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MKMapItem *source; // @synthesize source=_source;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContentsOfURL:(id)arg1;
- (void)dealloc;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(_Bool)arg5 includeTrafficIncidents:(_Bool)arg6 includeEntryPoints:(_Bool)arg7 includeRoutePoints:(_Bool)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(_Bool)arg5 includeTrafficIncidents:(_Bool)arg6 includeEntryPoints:(_Bool)arg7 includeRoutePoints:(_Bool)arg8;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setArrivalDate:(id)arg1;
- (id)arrivalDate;
- (void)setDepartureDate:(id)arg1;
- (id)departureDate;
- (id)_arrivalDate;
- (id)_departureDate;
- (void)setRequestsAlternateRoutes:(_Bool)arg1;
- (_Bool)requestsAlternateRoutes;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)transportType;
- (unsigned long long)_transportType;
@property(readonly, nonatomic) _Bool _includeTypicalRouteDuration;

@end

