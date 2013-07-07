/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RUAddSeedViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MPImageCache, NSArray, NSMutableSet, NSString, RUAddSeedViewController, UICollectionView, UILabel;

@interface RULikeBanCollectionViewController : UIViewController <RUAddSeedViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    RUAddSeedViewController *_addSeedViewController;
    UICollectionView *_collectionView;
    MPImageCache *_imageCache;
    NSMutableSet *_imageRequests;
    UILabel *_headerTitleLabel;
    id <RULikeBanCollectionViewControllerDelegate> _delegate;
    NSString *_headerTitle;
    NSArray *_itemDictionaries;
}

@property(copy, nonatomic) NSArray *itemDictionaries; // @synthesize itemDictionaries=_itemDictionaries;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) __weak id <RULikeBanCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentAddSeedController;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)addSeedViewControllerDidCancel:(id)arg1;
- (void)addSeedViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
