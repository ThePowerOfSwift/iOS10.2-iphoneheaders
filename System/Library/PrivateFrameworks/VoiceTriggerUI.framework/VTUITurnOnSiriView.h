/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUITurnOnSiriViewDelegate;
@class UILabel, UITextView, UIImageView, UIView, NSLayoutConstraint, NSMutableArray, UIButton, NSString;

@interface VTUITurnOnSiriView : UIView <UITextViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _instructionLabel;
	UITextView* _footerTextView;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	NSLayoutConstraint* _imageViewHeightCapConstraint;
	NSLayoutConstraint* _imageSpacingConstraint;
	NSMutableArray* _horizontalPaddingConstraints;
	id<VTUITurnOnSiriViewDelegate> _stateViewDelegate;
	UIButton* _laterButton;
	UIButton* _continueButton;

}

@property (assign,nonatomic,__weak) id<VTUITurnOnSiriViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) UIButton * laterButton;                                             //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,readonly) UIButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_setupUI;
-(void)_setImage:(id)arg1 ;
-(void)setStateViewDelegate:(id<VTUITurnOnSiriViewDelegate>)arg1 ;
-(UIButton *)laterButton;
-(void)fadeInSubviews;
-(void)prepareForLastTimeShown;
-(void)_setupContent;
-(void)_setupImage;
-(id<VTUITurnOnSiriViewDelegate>)stateViewDelegate;
-(UIButton *)continueButton;
@end

