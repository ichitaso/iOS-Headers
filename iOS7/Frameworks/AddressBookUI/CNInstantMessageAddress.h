/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface CNInstantMessageAddress : NSObject <NSCopying>
{
    NSString *_username;
    NSString *_service;
}

+ (id)instantMessageAddressWithUsername:(id)arg1 service:(id)arg2;
@property(readonly) NSString *service; // @synthesize service=_service;
@property(readonly) NSString *username; // @synthesize username=_username;
- (id)addressDictionary;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 service:(id)arg2;

@end

