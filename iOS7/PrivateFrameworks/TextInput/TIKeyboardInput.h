/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TIKeyboardInput : NSObject <NSSecureCoding>
{
    union {
        long long integerValue;
        struct {
            unsigned int uppercase:1;
            unsigned int autoshifted:1;
            unsigned int popupVariant:1;
            unsigned int multitap:1;
            unsigned int flick:1;
        } fields;
    } _flags;
    _Bool _backspace;
    NSString *_string;
    id <NSCopying><NSObject><NSSecureCoding> _object;
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardCandidate *_acceptedCandidate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // @synthesize touchEvent=_touchEvent;
@property(nonatomic, getter=isBackspace) _Bool backspace; // @synthesize backspace=_backspace;
@property(copy, nonatomic) id <NSCopying><NSObject><NSSecureCoding> object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic, getter=isFlick) _Bool flick;
@property(nonatomic, getter=isMultitap) _Bool multitap;
@property(nonatomic, getter=isPopupVariant) _Bool popupVariant;
@property(nonatomic, getter=isAutoshifted) _Bool autoshifted;
@property(nonatomic, getter=isUppercase) _Bool uppercase;

@end

