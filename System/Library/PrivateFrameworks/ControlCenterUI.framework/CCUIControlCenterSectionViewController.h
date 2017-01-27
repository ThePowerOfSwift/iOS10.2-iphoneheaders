/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CCUIControlCenterObserver.h>

@protocol CCUIControlCenterSectionViewControllerDelegate;
@class NSString;

@interface CCUIControlCenterSectionViewController : UIViewController <CCUIControlCenterObserver> {

	id<CCUIControlCenterSectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCUIControlCenterSectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(BOOL)enabled;
-(void)setDelegate:(id<CCUIControlCenterSectionViewControllerDelegate>)arg1 ;
-(id<CCUIControlCenterSectionViewControllerDelegate>)delegate;
-(id)view;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)sectionIdentifier;
-(id)controlCenterSystemAgent;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
@end
