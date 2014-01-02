/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class NSArray, UIColor;

@interface SKUIMenuViewController : UITableViewController
{
    UIColor *_borderColor;
    id <SKUIMenuViewControllerDelegate> _delegate;
    long long _indexOfCheckedTitle;
    NSArray *_menuTitles;
}

@property(nonatomic) long long indexOfCheckedTitle; // @synthesize indexOfCheckedTitle=_indexOfCheckedTitle;
@property(readonly, nonatomic) NSArray *menuTitles; // @synthesize menuTitles=_menuTitles;
@property(nonatomic) __weak id <SKUIMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadView;
- (id)initWithMenuTitles:(id)arg1;

@end

