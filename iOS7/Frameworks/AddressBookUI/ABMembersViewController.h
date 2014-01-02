/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABAbstractViewController.h>

#import "ABMembersControllerDelegate-Protocol.h"
#import "ABNewPersonViewControllerDelegate-Protocol.h"
#import "ABPersonEditDelegate-Protocol.h"
#import "ABViewControllerBannerViewProtocol-Protocol.h"

@class ABMembersController, _UIAccessDeniedView;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate>
{
    ABMembersController *_membersController;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    int _rightButtonBehavior;
    int _leftButtonBehavior;
    _Bool _shouldHandleExternalChangeOnPersonViewControllers;
    _UIAccessDeniedView *_accessDeniedView;
}

- (_Bool)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(_Bool)arg2 forPerson:(void *)arg3;
- (void)insertProperty:(int *)arg1 insertValue:(id *)arg2 insertLabel:(id *)arg3;
- (void)preferredPersonDidChangeToPerson:(void *)arg1;
- (void)personWasDeleted;
- (void)linksUpdatedForPerson:(void *)arg1;
- (void)nameUpdatedForPerson:(void *)arg1;
- (id)membersController;
- (id)model;
- (void)resetStateForDisplayedFilterChange;
- (void)model:(id)arg1 localChangeWithInfo:(struct __CFDictionary *)arg2;
- (void)modelDatabaseChange:(id)arg1;
- (void)_updateForModel;
- (void)handleExternalChangeOnPersonViewControllers;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2 informDelegate:(_Bool)arg3;
- (void)personWasSelected:(void *)arg1;
- (void)cancelSearching:(id)arg1;
- (void)membersControllerDidEndServerSearch:(id)arg1;
- (void)membersControllerDidEndSearching:(id)arg1;
- (void)membersControllerWillEndSearching:(id)arg1;
- (void)membersControllerWillStartSearching:(id)arg1;
- (_Bool)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)showInsertEditorForPerson:(void *)arg1 animate:(_Bool)arg2;
- (_Bool)showCardForPerson:(void *)arg1 animate:(_Bool)arg2;
- (_Bool)showCardForPerson:(void *)arg1 animate:(_Bool)arg2 selectAndScrollToPerson:(_Bool)arg3;
- (_Bool)showCardForPerson:(void *)arg1 withMemberCell:(id)arg2 animate:(_Bool)arg3;
- (_Bool)showCardForPerson:(void *)arg1 withMemberCell:(id)arg2 animate:(_Bool)arg3 selectAndScrollToPerson:(_Bool)arg4;
- (_Bool)selectAndScrollMemberVisible:(void *)arg1;
- (id)indexPathForMember:(void *)arg1;
- (_Bool)allowsShowingPersonsCards;
- (void)refreshEverythingNow;
- (void)startRefreshingAccount;
- (void)cancelRefreshingAccount;
- (_Bool)canHandleSnapbackIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)addPerson:(id)arg1;
- (void)cancel:(id)arg1;
- (_Bool)isNavigationButtonEnabled:(int)arg1;
- (void)applicationDidResume;
- (void)_getRotationContentSettings:(CDStruct_ebaa735e *)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (int)abViewControllerType;
- (void)updateNavigationButtonsAnimated:(_Bool)arg1;
- (void)updateNavigationButtonsInSearchMode:(_Bool)arg1;
- (void)updateNavigationButtonsInSearchMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLeftNavigationButtonAnimated:(_Bool)arg1;
- (void)updateView;
- (void)updateTitle;
- (void)presentGroupsViewController;
@property(readonly) _Bool shouldShowGroups;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@property(readonly) _Bool allowsCardEditing;
@property(readonly) _Bool allowsCancel;
@property(readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
- (void)loadView;
- (id)tableView;
- (void)loadState;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)_applicationEnteringBackground;
- (void)_applicationEnteringForeground;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)setAddressBook:(void *)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)defaultPNGName;
- (void)resetInsertionData;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end

