/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
    long long _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    long long _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    _Bool _shouldHideWhenRestricted;
}

+ (long long)ratingSystemFromString:(id)arg1;
@property(nonatomic) _Bool shouldHideWhenRestricted; // @synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted;
@property(copy, nonatomic) SSItemArtworkImage *ratingSystemLogo; // @synthesize ratingSystemLogo=_ratingSystemLogo;
@property(nonatomic) long long ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
- (_Bool)_isRatingSystemForTV:(long long)arg1;
- (_Bool)_isRatingSystemForMusic:(long long)arg1;
- (_Bool)_isRatingSystemForMovies:(long long)arg1;
- (_Bool)_isRatingSystemForApps:(long long)arg1;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

