/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (ML3Artwork)
+ (void)disableAutomaticDatabaseArtworkConversion;
+ (void)resetArtworkConversionManifestFormatPairs:(id)arg1 usingConnection:(id)arg2;
+ (_Bool)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1;
- (id)_artworkMigrator;
- (void)beginConvertingArtworkFormatsWithCompletionHandler:(id)arg1;
- (void)beginAutoConvertingArtworkFormats;
@end

