/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle, NSMutableDictionary;

@interface PLBasebandPostProcessing : NSObject
{
    NSFileHandle *fileHandle;
    unsigned long long currentOffset;
    unsigned long long totalFileLength;
    NSMutableDictionary *dictMatchedResultsFromSearchStrings;
    NSMutableDictionary *dictSearchStrings;
    int totalNumberOfARMUtilityValues_Filtered;
}

- (void)sendNotification:(id)arg1;
- (id)readLine;
- (void)releaseFileObjects;
- (void)dealloc;
- (void)initWithFilePath:(id)arg1;
- (id)getMatchedFilesInDirectory:(id)arg1 withFormat:(id)arg2;
- (id)getPowerLogOfInterest:(id)arg1;
- (void)removeTemporaryPowerlog;
- (void)getTrimemdPowerLogFile:(id)arg1;
- (void)addSearchStringsToDictionary:(id)arg1;
- (void)addKey:(id)arg1 value:(id)arg2 toDictionary:(id)arg3;
- (id)getEpochTimeForDate:(id)arg1 withMilliseconds:(id)arg2;
- (id)getFormattedDateTimeWithFormat:(id)arg1 forString:(id)arg2;
- (void)printDictionary:(id)arg1;
- (void)printSortedDictionary:(id)arg1;
- (id)getMatchedResultsFor:(id)arg1 searchStrings:(id)arg2;
- (_Bool)isUserUsingThePhone:(id)arg1;
- (void)calculateARMUtilityFor:(id)arg1 ARMUtilityPDF:(id)arg2;
- (void)getResultForARMValues:(id)arg1 postNotification:(_Bool)arg2 forPowerLog:(id)arg3;
- (void)postProcessPowerLogsAtPath:(id)arg1 postNotification:(_Bool)arg2;

@end

