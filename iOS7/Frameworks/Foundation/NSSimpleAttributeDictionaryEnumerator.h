/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSSimpleAttributeDictionary;

// Not exported
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator
{
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)finalize;
- (void)dealloc;
- (id)nextObject;
- (id)initWithAttributeDictionary:(id)arg1;

@end

