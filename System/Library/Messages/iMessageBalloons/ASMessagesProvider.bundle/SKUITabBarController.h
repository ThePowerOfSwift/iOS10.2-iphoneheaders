/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIViewController, UIView, UINavigationController;


@protocol SKUITabBarController <NSObject>
@property (assign,nonatomic) id<SKUITabBarControllerDelegate> delegate; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) UIViewController * selectedViewController; 
@property (assign,nonatomic) unsigned long long selectedIndex; 
@property (nonatomic,readonly) UIView * tabBar; 
@property (nonatomic,retain) UIViewController * transientViewController; 
@property (nonatomic,readonly) NSArray * allViewControllers; 
@property (nonatomic,readonly) UINavigationController * moreNavigationController; 
@property (nonatomic,readonly) UIViewController * floatingOverlayViewController; 
@optional
-(UINavigationController *)moreNavigationController;
-(void)setTabBarBackdropStyle:(long long)arg1;
-(void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2;
-(UIViewController *)floatingOverlayViewController;

@required
-(void)setDelegate:(id)arg1;
-(id<SKUITabBarControllerDelegate>)delegate;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
-(UIView *)tabBar;
-(NSArray *)viewControllers;
-(void)showBarWithTransition:(int)arg1;
-(void)setViewControllers:(id)arg1;
-(UIViewController *)selectedViewController;
-(void)setSelectedViewController:(id)arg1;
-(UIViewController *)transientViewController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1;
-(void)setTransientViewController:(id)arg1;
-(NSArray *)allViewControllers;
-(void)hideBarWithTransition:(int)arg1;

@end

