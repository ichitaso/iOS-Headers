/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice
{
    void *_ptpCameraProperties;
}

- (void)addToEventHandlerQ:(id)arg1;
- (_Bool)eject;
- (void)enumerateContent;
@property(readonly) PTPInitiator *initiator;
- (void)finalize;
- (void)dealloc;
- (id)initWithTCPIPInfo:(id)arg1;
- (id)initWithUSBLocationID:(unsigned int)arg1;

@end

