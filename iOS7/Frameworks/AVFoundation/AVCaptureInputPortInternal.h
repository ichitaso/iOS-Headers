/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription *formatDescription;
    struct OpaqueCMClock *clock;
    _Bool enabled;
}

- (void)dealloc;
- (id)init;

@end

