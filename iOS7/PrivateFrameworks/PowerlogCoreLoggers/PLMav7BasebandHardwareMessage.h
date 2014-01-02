/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PowerlogCoreLoggers/PLMav5BasebandHardwareMessage.h>

@class NSMutableString;

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage
{
    struct _PLMav7BasebandHWStatsRFTech *_mav7_rf_tech;
    struct _PLMav7BasebandHWStatsProtocol *_mav7_protocol;
    struct _PLMav7BasebandHWStatsMCPMVeto *_mav7_mcpm_sleep_veto;
    struct _PLMav7BasebandHWStatsNPAVeto *_mav7_npa_sleep_veto;
    struct _PLMav7BasebandHWStatsClockStateMask *_mav7_apps_clock_duration_mask;
    struct _PLMav7BasebandHWStatsClockStateMask *_mav7_mpss_clock_duration_mask;
    NSMutableString *_mav7_apps_clock_duration;
    NSMutableString *_mav7_mpss_clock_duration;
    struct _PLMav7BasebandHWStatsClockStateMask *_mav7_apps_clock_count_mask;
    struct _PLMav7BasebandHWStatsClockStateMask *_mav7_mpss_clock_count_mask;
    struct _PLMav7BasebandHWStatsHSICState *_mav7_hsic_state;
}

@property(nonatomic) struct _PLMav7BasebandHWStatsHSICState *hsic; // @synthesize hsic=_mav7_hsic_state;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *mpss_clock_count_mask; // @synthesize mpss_clock_count_mask=_mav7_mpss_clock_count_mask;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *apps_clock_count_mask; // @synthesize apps_clock_count_mask=_mav7_apps_clock_count_mask;
@property(nonatomic) NSMutableString *mpss_clock_duration; // @synthesize mpss_clock_duration=_mav7_mpss_clock_duration;
@property(nonatomic) NSMutableString *apps_clock_duration; // @synthesize apps_clock_duration=_mav7_apps_clock_duration;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *mpss_clock_duration_mask; // @synthesize mpss_clock_duration_mask=_mav7_mpss_clock_duration_mask;
@property(nonatomic) struct _PLMav7BasebandHWStatsClockStateMask *apps_clock_duration_mask; // @synthesize apps_clock_duration_mask=_mav7_apps_clock_duration_mask;
@property(nonatomic) struct _PLMav7BasebandHWStatsNPAVeto *npa_sleep_veto; // @synthesize npa_sleep_veto=_mav7_npa_sleep_veto;
@property(nonatomic) struct _PLMav7BasebandHWStatsMCPMVeto *mcpm_sleep_veto; // @synthesize mcpm_sleep_veto=_mav7_mcpm_sleep_veto;
@property(nonatomic) struct _PLMav7BasebandHWStatsProtocol *protocol; // @synthesize protocol=_mav7_protocol;
@property(nonatomic) struct _PLMav7BasebandHWStatsRFTech *rf; // @synthesize rf=_mav7_rf_tech;
- (id)indexToRAT:(unsigned long long)arg1;
- (void)logHSICWithLogger:(id)arg1;
- (void)logClockWithLogger:(id)arg1;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg1;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logProtocolActiveWithLogger:(id)arg1;
- (void)logRFWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

