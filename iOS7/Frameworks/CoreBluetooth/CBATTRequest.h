/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CBCentral, CBCharacteristic, NSData, NSNumber;

@interface CBATTRequest : NSObject
{
    NSNumber *_transactionID;
    _Bool _ignoreResponse;
    CBCentral *_central;
    CBCharacteristic *_characteristic;
    unsigned long long _offset;
    NSData *_value;
}

@property(nonatomic) _Bool ignoreResponse; // @synthesize ignoreResponse=_ignoreResponse;
@property(retain, nonatomic) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
@property(copy) NSData *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(retain, nonatomic) CBCentral *central; // @synthesize central=_central;
- (id)description;
- (void)dealloc;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 value:(id)arg4 transactionID:(id)arg5;

@end

