/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSArray;

@interface AXKeyboardsController : AccessibilityBaseListController {

	NSArray* _stickyKeysSpecificSpecifiers;

}

@property (nonatomic,retain) NSArray * stickyKeysSpecificSpecifiers;              //@synthesize stickyKeysSpecificSpecifiers=_stickyKeysSpecificSpecifiers - In the implementation block
-(void)_stickyKeysEnabledDidChange;
-(id)slowKeysEnabled:(id)arg1 ;
-(id)keyRepeatEnabled:(id)arg1 ;
-(void)setLowerCase:(id)arg1 specifier:(id)arg2 ;
-(id)lowercaseString:(id)arg1 ;
-(id)stickyKeysEnabled:(id)arg1 ;
-(NSArray *)stickyKeysSpecificSpecifiers;
-(void)setStickyKeysSpecificSpecifiers:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end
