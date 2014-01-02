/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIMetricsViewController-Protocol.h"
#import "SKUISearchChildViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSURLRequest, SKUIIPadSearchViewController, SKUIIPhoneSearchViewController, SKUIMetricsController, SKUISearchFieldController, SKUISearchPage, SSMetricsPageEvent, SSVLoadURLOperation;

@interface SKUISearchViewController : SKUIViewController <SKUISearchChildViewControllerDelegate, SKUIMetricsViewController>
{
    SKUIIPhoneSearchViewController *_iPhoneViewController;
    SKUIIPadSearchViewController *_iPadViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    SKUISearchPage *_page;
    SKUISearchFieldController *_searchFieldController;
    NSURLRequest *_urlRequest;
    NSDictionary *_facetSelections;
    NSArray *_searchFacets;
    NSMutableArray *_previousRelatedQueries;
}

+ (id)_customFacetsForFacets:(id)arg1 clientContext:(id)arg2;
@property(retain, nonatomic) SKUISearchFieldController *searchFieldController; // @synthesize searchFieldController=_searchFieldController;
- (void).cxx_destruct;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_searchWithURLRequest:(id)arg1 persistRelated:(_Bool)arg2;
- (void)_searchWithSearchTerm:(id)arg1 persistRelated:(_Bool)arg2;
- (void)_reloadOrientation:(long long)arg1;
- (void)_reloadView;
- (void)_reloadChildViewController;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)searchChildViewControllerDidChangeFacetSelections:(id)arg1;
- (void)searchChildViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (void)searchChildViewControllerDidSelectRelatedBackButton:(id)arg1;
- (void)searchChildViewController:(id)arg1 didSelectRelatedQuery:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectEditorial:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectItem:(id)arg2;
- (id)activeMetricsController;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (void)reloadData;
- (void)searchWithSearchTerm:(id)arg1;
- (void)searchWithExternalURL:(id)arg1;
- (void)searchWithURL:(id)arg1;
- (void)scrollToTop;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

