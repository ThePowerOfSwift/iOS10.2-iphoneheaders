/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class PSSpecifier;

@interface CarrierSettingsController : PSBundleController {

	PSSpecifier* _specifier;

}
-(void)dealloc;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(void)airplaneModeOrSIMStatusChanged;
-(void)setShowsCarrierSettingsMenu:(BOOL)arg1 ;
-(id)currentNetwork:(id)arg1 ;
-(void)networkChanged:(id)arg1 ;
-(void)customerServiceProfileChanged;
@end
