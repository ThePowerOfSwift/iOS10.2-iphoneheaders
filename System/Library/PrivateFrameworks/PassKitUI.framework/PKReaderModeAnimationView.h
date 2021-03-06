/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, CAStateController;

@interface PKReaderModeAnimationView : UIView {

	CALayer* _phoneLayer;
	CAStateController* _stateController;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithAssetName:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 assetName:(id)arg2 ;
-(unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1 ;
-(void)_setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setAnimationState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)animateToState:(unsigned long long)arg1 ;
@end

