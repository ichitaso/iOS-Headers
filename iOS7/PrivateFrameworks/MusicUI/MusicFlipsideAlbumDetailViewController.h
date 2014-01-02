/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicAlbumsDetailViewController.h>

#import "MPURatingControlDelegate-Protocol.h"
#import "MusicFlipsideRating-Protocol.h"

@class MPImageCache, NSIndexPath;

@interface MusicFlipsideAlbumDetailViewController : MusicAlbumsDetailViewController <MusicFlipsideRating, MPURatingControlDelegate>
{
    MPImageCache *_imageCache;
    id <MPURatingControlDelegate> _ratingDelegate;
    NSIndexPath *_ratingItemIndexPath;
}

+ (_Bool)_supportsSearch;
- (void).cxx_destruct;
- (id)newHeaderView;
- (void)ratingDidChangeForRatingControl:(id)arg1;
@property(nonatomic) _Bool showingRating;
- (void)setShowingRating:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <MPURatingControlDelegate> ratingDelegate;
- (double)maximumDurationWidth;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_createTableViewBackgroundView;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;

@end

