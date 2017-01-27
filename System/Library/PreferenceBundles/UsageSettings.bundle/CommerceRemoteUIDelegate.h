/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol CommerceRemoteUIDelegateDelegate;
@class UINavigationController, UIViewController, NSMutableArray, NSOperationQueue, UIAlertView, ISDialog, NSString, NSDictionary;

@interface CommerceRemoteUIDelegate : NSObject <ISStoreURLOperationDelegate, RUIObjectModelDelegate> {

	UINavigationController* _navigationController;
	UINavigationController* _parentNavigationController;
	UIViewController* _topViewController;
	BOOL _modallyPresented;
	NSMutableArray* _objectModels;
	NSOperationQueue* _queue;
	UIAlertView* _dialogAlert;
	ISDialog* _dialog;
	BOOL _registeredDialogNotification;
	BOOL _registeredAuthNotification;
	BOOL _cancelled;
	BOOL _skipCompletionAlert;
	BOOL _skipRetryWithoutToken;
	id<CommerceRemoteUIDelegateDelegate> _delegate;
	NSString* _purchaseToken;
	NSDictionary* _buyParameters;
	NSDictionary* _requestHeaders;
	long long _failureType;

}

@property (assign,nonatomic) BOOL skipCompletionAlert;                                          //@synthesize skipCompletionAlert=_skipCompletionAlert - In the implementation block
@property (assign,nonatomic) BOOL skipRetryWithoutToken;                                        //@synthesize skipRetryWithoutToken=_skipRetryWithoutToken - In the implementation block
@property (nonatomic,copy) NSString * purchaseToken;                                            //@synthesize purchaseToken=_purchaseToken - In the implementation block
@property (nonatomic,copy) NSDictionary * buyParameters;                                        //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * requestHeaders;                                       //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (assign,nonatomic) long long failureType;                                             //@synthesize failureType=_failureType - In the implementation block
@property (assign,nonatomic,__weak) id<CommerceRemoteUIDelegateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isPurchaseTokenOperation:(id)arg1 ;
-(void)setFailureType:(long long)arg1 ;
-(void)pushSpinner;
-(NSString *)purchaseToken;
-(void)handleDialog:(id)arg1 ;
-(void)cleanupLoader;
-(BOOL)skipRetryWithoutToken;
-(void)setSkipRetryWithoutToken:(BOOL)arg1 ;
-(void)setSkipCompletionAlert:(BOOL)arg1 ;
-(void)userCancelledFlow;
-(void)setPurchaseToken:(NSString *)arg1 ;
-(void)retryPurchaseWithoutToken;
-(void)unregisterAuthNotification;
-(void)errorWithTitle:(id)arg1 andExplanation:(id)arg2 ;
-(long long)_statusCodeForFinishedOperation:(id)arg1 ;
-(void)makeBuyRequest:(id)arg1 forceAuth:(BOOL)arg2 usePurchaseToken:(BOOL)arg3 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 needsAuth:(BOOL)arg3 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 needsAuth:(BOOL)arg3 localAuth:(BOOL)arg4 usePurchaseToken:(BOOL)arg5 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 needsAuth:(BOOL)arg3 localAuth:(BOOL)arg4 ;
-(void)processLink:(id)arg1 forceAuth:(BOOL)arg2 ;
-(BOOL)_isSuccessfulPurchaseTokenOperation:(id)arg1 ;
-(BOOL)skipCompletionAlert;
-(long long)failureType;
-(void)setDelegate:(id<CommerceRemoteUIDelegateDelegate>)arg1 ;
-(void)dealloc;
-(id<CommerceRemoteUIDelegateDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNavigationController:(id)arg1 needsModalPresentation:(BOOL)arg2 ;
-(void)loadURLforKey:(id)arg1 ;
-(void)purchaseWithToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3 ;
-(void)cancelRemoteUI;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)requestHeaders;
-(NSDictionary *)buyParameters;
-(void)setBuyParameters:(NSDictionary *)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end
