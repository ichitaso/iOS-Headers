/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VMUTraceRecord : NSObject
{
    unsigned int seqnum;
    unsigned int type;
    unsigned long long address;
    unsigned long long argument;
    unsigned int depth;
    unsigned long long *frames;
}

- (unsigned long long *)frames;
- (unsigned int)depth;
- (unsigned long long)argument;
- (unsigned long long)address;
- (unsigned int)type;
- (unsigned int)threadID;
- (unsigned int)seqnum;
- (id)initWithTraceRecord:(id)arg1;
- (id)initWithTraceRecord:(id)arg1 withDepth:(unsigned int)arg2;
- (id)initWithBacktrace:(id)arg1 forTask:(unsigned int)arg2;
- (id)initWithLoggingRecord:(CDStruct_7523a67d *)arg1 forTask:(unsigned int)arg2;

@end

