/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray, UIImageView;

@interface SetupView : UIView {

	UILabel* _title;
	NSMutableArray* _setupSteps;
	UIImageView* _icon;
	long long _layoutDirection;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(void)addStep:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(id)_preferenceLabelWithText:(id)arg1 ;
@end
