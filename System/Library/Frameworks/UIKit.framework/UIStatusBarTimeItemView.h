/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarTimeItemView : UIStatusBarItemView {

	NSString* _timeString;
	BOOL _useCustomFadeAnimation;

}

@property (assign,nonatomic) BOOL useCustomFadeAnimation;              //@synthesize useCustomFadeAnimation=_useCustomFadeAnimation - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(double)extraRightPadding;
-(id)contentsImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)setUseCustomFadeAnimation:(BOOL)arg1 ;
-(long long)textStyle;
-(double)extraLeftPadding;
-(BOOL)useCustomFadeAnimation;
@end

