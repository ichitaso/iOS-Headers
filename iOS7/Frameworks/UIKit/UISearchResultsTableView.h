/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableView.h>

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView : UITableView
{
    UISearchDisplayController *_controller;
    double _offsetForNoResultsMessage;
    UIView *_topShadowView;
}

@property(nonatomic) UISearchDisplayController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;
- (double)_offsetForNoResultsMessage;
- (void)_setOffsetForNoResultsMessage:(double)arg1;
- (void)_numberOfRowsDidChange;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

