/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVStackCommonTemplateController.h>

@class NSArray, NSIndexPath;

@interface _TVStackTemplateController : _TVStackCommonTemplateController {

	NSArray* _viewControllers;
	NSArray* _stackSections;
	NSArray* _stackRows;
	NSIndexPath* _lastFocusedIndexPath;
	BOOL _needsMoreContent;

}
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)viewControllers;
-(long long)updateCollectionViewControllers;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(UIEdgeInsets)collectionListMargin;
-(void)_evaluateNeedsMoreContent;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(void)_buildStackSections;
-(BOOL)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2 ;
-(double)_maxViewWidth;
-(void)_updateFirstItemRowIndexes;
@end

