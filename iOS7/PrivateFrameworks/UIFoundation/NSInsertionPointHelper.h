/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface NSInsertionPointHelper : NSObject
{
    struct _NSRange _charRange;
    long long _writingDirection;
    unsigned long long _count;
    unsigned long long _altCount;
    double *_logicalPositions;
    double *_logicalLeftBoundaries;
    double *_logicalRightBoundaries;
    unsigned long long *_logicalCharIndexes;
    double *_displayPositions;
    unsigned long long *_displayCharIndexes;
    double *_logicalAltPositions;
    unsigned long long *_logicalAltCharIndexes;
    double *_displayAltPositions;
    unsigned long long *_displayAltCharIndexes;
}

- (void)dealloc;

@end

