/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ABPersonLinkingUIDelegate
- (id)newPeoplePickerForLinking;
- (id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1;
- (_Bool)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (_Bool)shouldAllowLinkingAnotherContact;
- (long long)numberOfLinkedCardRows;
- (id)sourceNameForCardAtRow:(long long)arg1;
- (id)personNameForCardAtRow:(long long)arg1;
- (_Bool)canUnlinkCardAtRow:(long long)arg1;
- (_Bool)manuallyUnlinkCardAtRow:(long long)arg1;
- (_Bool)manuallyLinkPerson:(id)arg1;
@end

