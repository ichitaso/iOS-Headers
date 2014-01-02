/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUStorePageViewController.h"

@class SKProductPageViewController, SUBarButtonItem;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController
{
    SUBarButtonItem *_cancelButtonItem;
    SKProductPageViewController *_productPageViewController;
    _Bool _showsCancelButton;
}

@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) __weak SKProductPageViewController *productPageViewController; // @synthesize productPageViewController=_productPageViewController;
- (void).cxx_destruct;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (id)_cancelButtonItem;
- (void)viewWillAppear:(_Bool)arg1;
- (void)resetNavigationItem:(id)arg1;
- (_Bool)presentDialogForError:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (void)handleFailureWithError:(id)arg1;
- (void)dealloc;

@end

