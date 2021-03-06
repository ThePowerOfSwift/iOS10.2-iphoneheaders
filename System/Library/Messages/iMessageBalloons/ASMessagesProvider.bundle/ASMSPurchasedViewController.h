/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASBasePurchasedViewController.h>

@class ASMSTabBarItem;

@interface ASMSPurchasedViewController : ASBasePurchasedViewController {

	ASMSTabBarItem* _purchasedTabBarItem;

}

@property (nonatomic,retain) ASMSTabBarItem * purchasedTabBarItem;              //@synthesize purchasedTabBarItem=_purchasedTabBarItem - In the implementation block
-(BOOL)_isSignInRequired;
-(id)_createPurchasedPage;
-(id)_newIPadViewController;
-(id)_newIPhoneViewController;
-(void)setPurchasedTabBarItem:(ASMSTabBarItem *)arg1 ;
-(ASMSTabBarItem *)purchasedTabBarItem;
-(id)_additionalPredicatesForPurchaseDB;
-(id)init;
-(id)tabBarItem;
-(void)_updateBadgeCount;
@end

