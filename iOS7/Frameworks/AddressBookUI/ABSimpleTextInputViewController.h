/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "ABPropertyEditingTableViewCellDelegate-Protocol.h"

@class NSString;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate>
{
    id <ABSimpleTextInputViewControllerDelegate> _delegate;
    id _value;
    NSString *_placeholder;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_value;
@property(nonatomic) id <ABSimpleTextInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (void)updateSaveButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)ab_heightToFitForViewInPopoverView;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)setTitleLocalizationKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

