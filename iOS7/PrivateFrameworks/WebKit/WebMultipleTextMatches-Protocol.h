/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WebMultipleTextMatches <NSObject>
- (id)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (_Bool)markedTextMatchesAreHighlighted;
- (void)setMarkedTextMatchesAreHighlighted:(_Bool)arg1;
@end

