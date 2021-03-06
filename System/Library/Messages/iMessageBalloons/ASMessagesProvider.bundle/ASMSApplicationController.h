/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIApplicationController.h>
#import <ASMessagesProvider/SKUIIKAppContextDelegate.h>

@protocol ASMSApplicationDelegate;
@class ASMSAppDeviceConfig, NSString;

@interface ASMSApplicationController : SKUIApplicationController <SKUIIKAppContextDelegate> {

	id<ASMSApplicationDelegate> _messagesDelegate;
	ASMSAppDeviceConfig* _deviceConfig;

}

@property (nonatomic,retain) ASMSAppDeviceConfig * deviceConfig;                               //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (assign,nonatomic,__weak) id<ASMSApplicationDelegate> messagesDelegate;              //@synthesize messagesDelegate=_messagesDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessagesDelegate:(id<ASMSApplicationDelegate>)arg1 ;
-(id<ASMSApplicationDelegate>)messagesDelegate;
-(id)rootViewController;
-(id)rightBarButtonItem;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(ASMSAppDeviceConfig *)deviceConfig;
-(void)setDeviceConfig:(ASMSAppDeviceConfig *)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)appContext:(id)arg1 didCompletePurchase:(id)arg2 ;
-(void)_doneButtonAction:(id)arg1 ;
-(Class)_tabBarControllerClass;
-(id)deviceConfigForContext:(id)arg1 ;
@end

