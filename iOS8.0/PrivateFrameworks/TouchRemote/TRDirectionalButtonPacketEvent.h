//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalButtonPacketEvent : TRPacketEvent
{
    int _buttonType;
    int _gestureState;
    int _gestureType;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) int gestureType; // @synthesize gestureType=_gestureType;
@property(readonly, nonatomic) int gestureState; // @synthesize gestureState=_gestureState;
@property(readonly, nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithButtonType:(int)arg1 gestureType:(int)arg2 gestureState:(int)arg3;

@end
