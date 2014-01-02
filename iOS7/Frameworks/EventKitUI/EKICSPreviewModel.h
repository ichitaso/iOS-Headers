/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKEventStore, NSArray, NSData, NSMutableArray;

// Not exported
@interface EKICSPreviewModel : NSObject
{
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
    unsigned long long _options;
    int _actionsState;
}

- (void).cxx_destruct;
- (id)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
@property(readonly, nonatomic) NSArray *allEvents;
@property(readonly, nonatomic) NSArray *unimportedEvents;
@property(readonly, nonatomic) NSArray *importedEvents;
@property(readonly, nonatomic) int actionsState;
@property(readonly, nonatomic) unsigned long long unimportedEventCount;
@property(readonly, nonatomic) unsigned long long importedEventCount;
@property(readonly, nonatomic) unsigned long long totalEventCount;
@property(readonly, nonatomic) EKEventStore *eventStore;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;

@end

