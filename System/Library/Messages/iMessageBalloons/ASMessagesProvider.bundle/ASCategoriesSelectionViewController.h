/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <ASMessagesProvider/ASCategoriesControllerDelegate.h>

@protocol OS_dispatch_source, ASCategoriesControllerProtocol, ASCategoriesSelectionViewControllerDelegate;
@class JSManagedValue, IKJSNavigationDocument, SKUILoadingView, NSObject, UICollectionView, NSString;

@interface ASCategoriesSelectionViewController : SKUIViewController <ASCategoriesControllerDelegate> {

	JSManagedValue* _managedNavigationDocument;
	IKJSNavigationDocument* _navigationDocument;
	SKUILoadingView* _loadingView;
	NSObject*<OS_dispatch_source> _loadingTimeoutTimer;
	BOOL _highlightsSelection;
	UICollectionView* _collectionView;
	id<ASCategoriesControllerProtocol> _categoriesController;
	id<ASCategoriesSelectionViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) id<ASCategoriesControllerProtocol> categoriesController;                    //@synthesize categoriesController=_categoriesController - In the implementation block
@property (assign,nonatomic,__weak) id<ASCategoriesSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL highlightsSelection;                                                     //@synthesize highlightsSelection=_highlightsSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)categoryCellClass;
+(id)categoriesDataSourceProtocolOverride;
-(void)_hideLoadingView;
-(void)_startLoadingTimer;
-(void)_clearCollectionViewSelections;
-(BOOL)highlightsSelection;
-(id<ASCategoriesControllerProtocol>)categoriesController;
-(void)setHighlightsSelection:(BOOL)arg1 ;
-(void)refetchIgnoringCache:(BOOL)arg1 ;
-(void)handleNearMeLocationStatusChange:(BOOL)arg1 ;
-(void)categoriesController:(id)arg1 selectedCategoryForSubmenu:(id)arg2 ;
-(void)categoriesController:(id)arg1 selectedCategoryForDisplay:(id)arg2 ;
-(void)categoriesControllerBeganLoading:(id)arg1 ;
-(void)categoriesControllerEndedLoading:(id)arg1 ;
-(void)selectedCategory:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<ASCategoriesSelectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<ASCategoriesSelectionViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setClientContext:(id)arg1 ;
-(void)_showLoadingView;
-(id)initWithController:(id)arg1 ;
@end

