/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBGestureRecognizer : NSObject
{
    unsigned long long m_types;
    int m_state;
    id m_handler;
    unsigned long long m_activeTouchesCount;
    CDStruct_bab9d11d m_activeTouches[30];
    unsigned long long m_strikes;
    unsigned long long m_templateMatches;
    NSMutableArray *m_touchTemplates;
    _Bool m_includedInGestureRecognitionIsPossibleTest;
    _Bool m_sendsTouchesCancelledToApplication;
    id m_canBeginCondition;
    struct CGPoint m_maximumAllowedExclusiveMovement;
}

@property(nonatomic) struct CGPoint maximumAllowedExclusiveMovement; // @synthesize maximumAllowedExclusiveMovement=m_maximumAllowedExclusiveMovement;
@property(copy, nonatomic) id canBeginCondition; // @synthesize canBeginCondition=m_canBeginCondition;
@property(nonatomic) _Bool sendsTouchesCancelledToApplication; // @synthesize sendsTouchesCancelledToApplication=m_sendsTouchesCancelledToApplication;
@property(nonatomic) _Bool includedInGestureRecognitionIsPossibleTest; // @synthesize includedInGestureRecognitionIsPossibleTest=m_includedInGestureRecognitionIsPossibleTest;
@property(copy, nonatomic) id handler; // @synthesize handler=m_handler;
@property(nonatomic) int state; // @synthesize state=m_state;
@property(nonatomic) unsigned long long types; // @synthesize types=m_types;
- (id)description;
- (void)_appendDescription:(id)arg1 forTypes:(unsigned long long)arg2;
- (void)touchesCancelled:(struct __SBGestureContext *)arg1;
- (void)touchesEnded:(struct __SBGestureContext *)arg1;
- (void)touchesMoved:(struct __SBGestureContext *)arg1;
- (void)touchesBegan:(struct __SBGestureContext *)arg1;
- (int)templateMatch;
- (void)addTouchTemplate:(id)arg1;
- (void)reset;
- (_Bool)shouldReportRecognitionPossibleToAppsForTotalMotion:(struct CGPoint)arg1;
- (_Bool)shouldReceiveTouches;
- (_Bool)isRecognized;
- (void)dealloc;
- (id)init;

@end

