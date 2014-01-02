/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSTimeZone, UISearchDisplayController, UITableView;

@interface EKTimeZoneViewController : UIViewController <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UISearchDisplayController *_searchController;
    UITableView *_tableView;
    NSArray *_cities;
    int _style;
    id <EKTimeZoneViewControllerDelegate> _delegate;
    NSTimeZone *_timeZone;
}

@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) __weak id <EKTimeZoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int chooserStyle; // @synthesize chooserStyle=_style;
- (void).cxx_destruct;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithChooserStyle:(int)arg1;

@end

