/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLIntersiloInterface, CLSilo;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol>
{
    CLSilo *_silo;
    CLIntersiloInterface *_inboundInterface;
    CLIntersiloInterface *_outboundInterface;
}

+ (id)getSilo;
@property(readonly, nonatomic) CLIntersiloInterface *outboundInterface; // @synthesize outboundInterface=_outboundInterface;
@property(readonly, nonatomic) CLIntersiloInterface *inboundInterface; // @synthesize inboundInterface=_inboundInterface;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)isHydrated;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;
- (id)initInSilo:(id)arg1;
- (id)init;
- (void)heartAttack;

@end

