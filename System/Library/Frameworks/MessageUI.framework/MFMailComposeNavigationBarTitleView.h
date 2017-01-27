/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface MFMailComposeNavigationBarTitleView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitleText:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_subtitleTextColor;
-(double)_verticalOffsetForSubtitleWhenMini:(BOOL)arg1 ;
@end
