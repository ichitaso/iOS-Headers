/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding>
{
    int _stage;
    double _radius;
    double _timestamp;
    long long _pathIndex;
    long long _forcedKeyCode;
    struct CGPoint _location;
}

+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long forcedKeyCode; // @synthesize forcedKeyCode=_forcedKeyCode;
@property(readonly, nonatomic) int stage; // @synthesize stage=_stage;
@property(readonly, nonatomic) long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;

@end

