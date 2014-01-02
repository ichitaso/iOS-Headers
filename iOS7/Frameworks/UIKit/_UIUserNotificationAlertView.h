/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIAlertView.h>

// Not exported
@interface _UIUserNotificationAlertView : UIAlertView
{
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_userNotificationRunLoopSource;
    _Bool _runsModal;
    _Bool _runningModal;
    id _strongDelegate;
}

+ (void)initialize;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_cancelUserNotification;
- (void)cancelAlertView;
- (void)setRemoteViewController:(id)arg1;
- (void)setHostedWindow:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (_Bool)isVisible;
- (void)show;
- (void)setRunsModal:(_Bool)arg1;
- (_Bool)runsModal;

@end

