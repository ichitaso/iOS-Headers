/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface AVCaptureMovieFileOutputInternal : NSObject
{
    NSMutableArray *recordingDelegatesArray;
    CDStruct_1b6d18a9 movieFragmentInterval;
    NSArray *metadata;
    _Bool sendLastVideoPreviewFrame;
}

- (void)dealloc;
- (id)init;

@end

