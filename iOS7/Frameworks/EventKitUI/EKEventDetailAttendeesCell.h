/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView;

// Not exported
@interface EKEventDetailAttendeesCell : EKEventDetailCell
{
    EKEventDetailAttendeesListView *_attendeesListView;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_attendeesListView;
- (void)setAttendees:(id)arg1;
- (id)viewControllerForCell;
- (_Bool)update;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

@end

