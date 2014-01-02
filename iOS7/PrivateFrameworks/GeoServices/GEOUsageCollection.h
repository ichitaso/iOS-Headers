/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEOUsageCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _probeID;
    CDStruct_612aec5b _sessionID;
    CDStruct_8f5f9923 *_tileUsages;
    unsigned long long _tileUsagesCount;
    unsigned long long _tileUsagesSpace;
    double _timestamp;
    int _cellWifi;
    NSString *_countryCode;
    int _geoService;
    NSString *_hwMachine;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    _Bool _sessionIDIsPersistent;
    struct {
        unsigned int probeID:1;
        unsigned int sessionID:1;
        unsigned int timestamp:1;
        unsigned int cellWifi:1;
        unsigned int geoService:1;
        unsigned int requestDataSize:1;
        unsigned int responseDataSize:1;
        unsigned int responseTime:1;
        unsigned int sessionIDIsPersistent:1;
    } _has;
}

@property(retain, nonatomic) NSString *hwMachine; // @synthesize hwMachine=_hwMachine;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) CDStruct_612aec5b probeID; // @synthesize probeID=_probeID;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) int cellWifi; // @synthesize cellWifi=_cellWifi;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) int responseDataSize; // @synthesize responseDataSize=_responseDataSize;
@property(nonatomic) int requestDataSize; // @synthesize requestDataSize=_requestDataSize;
@property(nonatomic) int geoService; // @synthesize geoService=_geoService;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSessionIDIsPersistent;
@property(nonatomic) _Bool sessionIDIsPersistent; // @synthesize sessionIDIsPersistent=_sessionIDIsPersistent;
@property(readonly, nonatomic) _Bool hasHwMachine;
- (void)setTileUsages:(CDStruct_8f5f9923 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_8f5f9923)tileUsageAtIndex:(unsigned long long)arg1;
- (void)addTileUsage:(CDStruct_8f5f9923)arg1;
- (void)clearTileUsages;
@property(readonly, nonatomic) CDStruct_8f5f9923 *tileUsages;
@property(readonly, nonatomic) unsigned long long tileUsagesCount;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasProbeID;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasCellWifi;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
@property(nonatomic) _Bool hasGeoService;
- (void)dealloc;

@end

