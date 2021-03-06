//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasBeenPlayed;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    NSString *_ubiquitousIdentifier;
    unsigned int _userPlayCount;
    long long _foreignDatabaseEntityID;
    double _bookmarkTimestamp;
    double _bookmarkTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1;
@property(nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) unsigned int userPlayCount; // @synthesize userPlayCount=_userPlayCount;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property(readonly, nonatomic) long long foreignDatabaseEntityID; // @synthesize foreignDatabaseEntityID=_foreignDatabaseEntityID;
@property(readonly, nonatomic) NSString *ubiquitousIdentifier; // @synthesize ubiquitousIdentifier=_ubiquitousIdentifier;
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
- (void).cxx_destruct;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1;
- (id)SBKUniversalPlaybackPositionMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3;

@end

