/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CNContact, NSString;

@interface ABContactAction : NSObject
{
    _Bool _destructive;
    id <ABContactActionDelegate> _delegate;
    CNContact *_contact;
    NSString *_title;
    id _target;
    SEL _selector;
}

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) id <ABContactActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)performActionWithSender:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;
- (id)initWithContact:(id)arg1;

@end

