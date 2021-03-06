/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol _SBAlertControllerDelegate;
@class SBAlertItem, NSString;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {

	SBAlertItem* _alertItem;
	id<_SBAlertControllerDelegate> _alertControllerDelegate;

}

@property (assign,nonatomic,__weak) SBAlertItem * alertItem;                                             //@synthesize alertItem=_alertItem - In the implementation block
@property (assign,nonatomic,__weak) id<_SBAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SBAlertItem *)alertItem;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<_SBAlertControllerDelegate>)alertControllerDelegate;
-(void)setAlertControllerDelegate:(id<_SBAlertControllerDelegate>)arg1 ;
@end

