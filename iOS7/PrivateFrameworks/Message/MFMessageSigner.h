/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFError, NSArray, NSString;

@interface MFMessageSigner : NSObject
{
    int _status;
    struct __SecTrust *_trust;
    NSString *_sender;
    NSString *_uncommentedSender;
}

@property(readonly, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (_Bool)hasTrustException;
- (void)removeTrustException;
- (void)addTrustException;
- (struct __SecTrust *)copyTrust;
@property(readonly, nonatomic) MFError *error;
@property(readonly, nonatomic) NSArray *certificates;
@property(readonly, nonatomic) int action;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *commonName;
- (void)dealloc;
- (id)initWithSender:(id)arg1 trust:(struct __SecTrust *)arg2 verification:(int)arg3;

@end

