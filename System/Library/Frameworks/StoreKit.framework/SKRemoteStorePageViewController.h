/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientStorePageViewController.h>

@class SKStorePageViewController, NSString;

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController> {

	SKStorePageViewController* _storePageViewController;

}

@property (assign,nonatomic,__weak) SKStorePageViewController * storePageViewController;              //@synthesize storePageViewController=_storePageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setStorePageViewController:(SKStorePageViewController *)arg1 ;
-(void)showProductPageWithItemIdentifier:(id)arg1 ;
-(SKStorePageViewController *)storePageViewController;
@end

