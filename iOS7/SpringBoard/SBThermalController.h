/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBThermalWarningAlertItemDelegate-Protocol.h"
#import "SBThermalWarningSuppressionAssertionDelegate-Protocol.h"

@class NSDictionary, NSMutableSet;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate>
{
    _Bool _sampling;
    double _samplingStartTime;
    NSDictionary *_samplingStartCPUTimesByApp;
    int _sunlightStateToken;
    int _warningAssertionToken;
    int _warningResponseToken;
    NSMutableSet *_warningSuppressionAssertions;
    _Bool _warningSuppressionPreference;
    int _level;
    _Bool _inSunlight;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isInSunlight) _Bool inSunlight; // @synthesize inSunlight=_inSunlight;
@property(readonly, nonatomic) int level; // @synthesize level=_level;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)thermalWarningAssertionExpired:(id)arg1;
- (_Bool)captureWarningSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)_didReceiveWarningAction:(int)arg1;
- (void)startListeningForThermalEvents;
- (void)dealloc;
- (id)init;

@end

