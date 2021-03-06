/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@class UIAlertController, NSString;

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate> {

	UIAlertController* _alertController;
	/*^block*/id _completionHandler;

}

@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(id)newAlertControllerWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)_cancelLocalizedString;
+(id)_detachAllLocalizedString;
+(id)_detachFutureLocalizedString;
+(id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_cleanup;
-(void)cancelAnimated:(BOOL)arg1 ;
-(void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 stringForDeleteButton:(id)arg3 ;
-(void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 ;
-(BOOL)_useSheetForViewController:(id)arg1 ;
-(void)_completeWithSelection:(int)arg1 ;
@end

