/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <ASMessagesProvider/ASCategoriesSelectionViewControllerDelegate.h>
#import <ASMessagesProvider/ASCategoriesNavigationControllerAppearanceDelegate.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>
#import <libobjc.A.dylib/SKUINavigationControllerProviding.h>
#import <libobjc.A.dylib/SKUIAppNavigationControllerProviderProtocol.h>

@protocol ASNavigationItemProviding;
@class UITabBarItem, UINavigationController, JSManagedValue, SKUINavigationDocumentController, IKAppDocument, ASCategoriesSplitViewController, NSString;

@interface ASCategoriesViewController : SKUIViewController <UISplitViewControllerDelegate, ASCategoriesSelectionViewControllerDelegate, ASCategoriesNavigationControllerAppearanceDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerProviding, SKUIAppNavigationControllerProviderProtocol> {

	UITabBarItem* _categoriesTabBarItem;
	UINavigationController* _detailNavigationController;
	JSManagedValue* _managedNavigationDocument;
	SKUINavigationDocumentController* _navigationDocumentController;
	IKAppDocument* _appDocument;
	UINavigationController* _errorNavigationController;
	UINavigationController* _leftNavigationController;
	id<ASNavigationItemProviding> _navigationItemProvidingDelegate;
	ASCategoriesSplitViewController* _splitViewController;

}

@property (nonatomic,readonly) ASCategoriesSplitViewController * splitViewController;                           //@synthesize splitViewController=_splitViewController - In the implementation block
@property (nonatomic,readonly) UINavigationController * detailNavigationController;                             //@synthesize detailNavigationController=_detailNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * leftNavigationController;                                 //@synthesize leftNavigationController=_leftNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<ASNavigationItemProviding> navigationItemProvidingDelegate;              //@synthesize navigationItemProvidingDelegate=_navigationItemProvidingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
+(Class)leftNavigationControllerClass;
+(BOOL)appExcludesNearby;
+(Class)categoriesSelectionViewControllerClass;
+(Class)detailNavigationControllerClass;
+(id)sharedInstance;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)handleTabBarReselect;
-(id)_generateDefaultViewController;
-(void)setLeftNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)detailNavigationController;
-(UINavigationController *)leftNavigationController;
-(id)_genericErrorString;
-(void)_presentLocationDialogIfNeeded;
-(void)_handleCategoriesErrorNotification:(id)arg1 ;
-(void)_nearMeLocationStatusDidChange:(id)arg1 ;
-(void)_handleLocationStatusChange:(BOOL)arg1 ;
-(void)_setEmptyPage;
-(void)_handleCategoriesSuccessNotification:(id)arg1 ;
-(void)_hideError;
-(void)_setCategoriesRetainsHighlights:(BOOL)arg1 ;
-(void)_configureNavigationItemUsingProviderIsCompact:(BOOL)arg1 ;
-(void)_informControllersOfClientContext:(id)arg1 ;
-(void)_updateSelectionViewControllerSelection:(id)arg1 ;
-(void)_configureViewControllerNavigationItems:(id)arg1 ;
-(void)_displayError;
-(void)setNavigationItemProvidingDelegate:(id<ASNavigationItemProviding>)arg1 ;
-(void)navigationController:(id)arg1 didDisappearAnimated:(BOOL)arg2 ;
-(void)categorySelectionViewController:(id)arg1 selectedCategory:(id)arg2 ;
-(id<ASNavigationItemProviding>)navigationItemProvidingDelegate;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(ASCategoriesSplitViewController *)splitViewController;
-(void)viewDidLoad;
-(id)tabBarItem;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(id)overlayNavigationController;
-(BOOL)documentViewControllerIsCompactForWidth:(double)arg1 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<IKAppNavigationController>)appNavigationController;
@end

