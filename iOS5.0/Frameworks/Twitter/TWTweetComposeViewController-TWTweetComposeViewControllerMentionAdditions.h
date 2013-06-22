/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Twitter/TWTweetComposeViewController.h>

@interface TWTweetComposeViewController (TWTweetComposeViewControllerMentionAdditions)
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)chooseRow:(int)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)searchBarWillClear:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)currentResults;
- (void)noteMentionsResultsChanged;
- (void)clearResults;
- (struct _NSRange)applyMention:(id)arg1;
- (void)hideMentionPanel:(BOOL)arg1;
- (void)hideMentionPanelAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)showMentionPanel:(BOOL)arg1;
- (BOOL)isShowingMentionPanel;
- (void)buildMentionsTableView;
- (void)buildSearchField;
- (void)updateSearchField;
- (struct CGRect)searchFieldFrame;
- (void)updateCancelButtonsVisibility:(BOOL)arg1;
@end
