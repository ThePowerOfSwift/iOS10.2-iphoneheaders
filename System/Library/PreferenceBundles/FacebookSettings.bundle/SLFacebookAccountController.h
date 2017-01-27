/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, NSString, SLFacebookSession, PSSpecifier, UIBarButtonItem;

@interface SLFacebookAccountController : ACUIViewController {

	ACAccount* _account;
	NSString* _password;
	SLFacebookSession* _session;
	PSSpecifier* _fullNameSpecifier;
	UIBarButtonItem* _saveButton;
	BOOL _userWantsToMergeContacts;

}
-(id)passwordWithSpecifier:(id)arg1 ;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)_confirmContactsMerge;
-(id)_fullNameSpecifier;
-(void)_authenticateAccountIfNeeded;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(id)fullNameWithSpecifier:(id)arg1 ;
-(id)usernameWithSpecifier:(id)arg1 ;
-(void)_didEditPasswordField:(id)arg1 ;
-(id)_loginSpecifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end
