/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject
{
    NSMutableDictionary *_allQueuesByID;
}

- (void).cxx_destruct;
- (id)description;
- (id)keyForRandomQueue;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (_Bool)isQueueEmptyForKey:(id)arg1;
- (_Bool)isEmpty;
- (id)init;

@end

