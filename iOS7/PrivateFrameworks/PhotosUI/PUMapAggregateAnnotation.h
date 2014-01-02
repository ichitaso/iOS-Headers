/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PUMapAnnotationAnimatable-Protocol.h"

@class NSArray, NSDate, NSMutableSet, NSString;

@interface PUMapAggregateAnnotation : NSObject <PUMapAnnotationAnimatable>
{
    CDStruct_2c43369c _originalCoordinate;
    unsigned long long _hash;
    NSMutableSet *_subAnnotations;
    NSArray *_mapItems;
    NSObject *_itemId;
    unsigned long long _relativeOrder;
    CDStruct_2c43369c _coordinate;
}

@property(nonatomic) unsigned long long relativeOrder; // @synthesize relativeOrder=_relativeOrder;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void).cxx_destruct;
- (long long)annotationSortingCompareWithAnnotation:(id)arg1;
- (id)compactDescription;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)resetCoordinateToOriginal;
- (_Bool)containsAnnotation:(id)arg1;
@property(readonly, nonatomic) NSObject *itemId;
@property(readonly, nonatomic) NSMutableSet *subAnnotations;
- (void)removeAllSubAnnotations;
- (void)removeSubAnnotation:(id)arg1;
- (void)addSubAnnotation:(id)arg1;
- (void)_updateComputedValuesForSubAnnotationUpdate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate;
- (id)newestMaxMapItems:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDate *dateCreated;
@property(readonly, nonatomic) NSArray *mapItems;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 mapItems:(id)arg2;

@end

