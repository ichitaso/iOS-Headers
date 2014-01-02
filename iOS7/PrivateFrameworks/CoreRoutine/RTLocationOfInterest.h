/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CLLocation, GEOPlaceResult, NSArray, NSDate, NSUUID;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>
{
    CLLocation *_location;
    NSUUID *_identifier;
    long long _type;
    GEOPlaceResult *_placeResult;
    NSDate *_nextEntryTime;
    NSArray *_visits;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) NSDate *nextEntryTime; // @synthesize nextEntryTime=_nextEntryTime;
@property(readonly, nonatomic) GEOPlaceResult *placeResult; // @synthesize placeResult=_placeResult;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 identifier:(id)arg2 type:(long long)arg3 placeResult:(id)arg4 nextEntryTime:(id)arg5 visits:(id)arg6;

@end

