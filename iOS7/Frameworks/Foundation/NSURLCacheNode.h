/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCachedURLResponse, NSString, NSURLRequest;

// Not exported
@interface NSURLCacheNode : NSObject
{
    NSCachedURLResponse *cachedResponse;
    NSURLRequest *request;
    NSString *key;
    NSURLCacheNode *prev;
    NSURLCacheNode *next;
    unsigned long long hash;
}

- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCachedResponse:(id)arg1 request:(id)arg2 key:(id)arg3;

@end

