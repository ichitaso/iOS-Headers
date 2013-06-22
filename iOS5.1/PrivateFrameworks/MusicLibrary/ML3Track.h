/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Entity.h>

@interface ML3Track : ML3Entity
{
}

+ (void)_enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
+ (BOOL)_deleteAssetAtPath:(id)arg1;
+ (BOOL)_clearLocationFromLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned int)arg3;
+ (BOOL)trackValueAreInTheCloud:(id)arg1;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned int)arg3 deletedFileSize:(long long *)arg4;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned int)arg3;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)unsettableProperties;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned int)arg4;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)TVShowEpisodesDefaultOrderingProperties;
+ (id)podcastsEpisodesDefaultOrderingProperties;
+ (id)composersDefaultOrderingProperties;
+ (id)albumAndArtistDefaultOrderingProperties;
+ (id)albumAllArtistsDefaultOrderingProperties;
+ (id)artistsDefaultOrderingProperties;
+ (id)artistAllAlbumsDefaultOrderingProperties;
+ (id)podcastsDefaultOrderingProperties;
+ (id)genresDefaultOrderingProperties;
+ (id)albumsDefaultOrderingProperties;
+ (id)defaultOrderingProperties;
+ (int)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (void)updateCollectionCloudStatus;
- (void)didChangeValueForProperties:(const id *)arg1 count:(unsigned int)arg2;
- (id)artworkCacheIDAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (BOOL)updateIntegrity;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (id)absoluteFilePath;

@end
