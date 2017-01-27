/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIControlCenterSectionView.h>
#import <libobjc.A.dylib/CCUIButtonStackLayoutDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol CCUIButtonStackPagingViewDelegate;
@class NSMutableArray, CCUIImmediateTouchScrollView, UIStackView, NSLayoutConstraint, NSArray, NSString;

@interface CCUIButtonStackPagingView : CCUIControlCenterSectionView <CCUIButtonStackLayoutDelegate, UIScrollViewDelegate> {

	NSMutableArray* _buttons;
	CCUIImmediateTouchScrollView* _scrollView;
	UIStackView* _pagesStackView;
	unsigned long long _buttonStretchThreshold;
	NSLayoutConstraint* _topMargin;
	NSLayoutConstraint* _bottomMargin;
	NSLayoutConstraint* _leadingMargin;
	NSLayoutConstraint* _trailingMargin;
	unsigned long long _maxButtonsPerPage;
	long long _axis;
	double _interButtonPadding;
	id<CCUIButtonStackPagingViewDelegate> _delegate;

}

@property (assign,nonatomic) double interButtonPadding;                                          //@synthesize interButtonPadding=_interButtonPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,nonatomic) long long axis;                                                     //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) long long pagingAxis; 
@property (assign,nonatomic) unsigned long long buttonStretchThreshold;                          //@synthesize buttonStretchThreshold=_buttonStretchThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long maxButtonsPerPage;                               //@synthesize maxButtonsPerPage=_maxButtonsPerPage - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIButtonStackPagingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * buttons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CCUIButtonStackPagingViewDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<CCUIButtonStackPagingViewDelegate>)delegate;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(NSArray *)buttons;
-(void)addButton:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)resortButtons;
-(void)removeButton:(id)arg1 ;
-(void)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_organizeButtonsInPages;
-(void)_applyConfigurationToButtonStacks;
-(id)_primaryButtons;
-(id)_internalButtons;
-(void)setInterButtonPadding:(double)arg1 ;
-(void)setButtonStretchThreshold:(unsigned long long)arg1 ;
-(void)buttonStack:(id)arg1 didLayoutWithSpacing:(double)arg2 ;
-(void)setMaxButtonsPerPage:(unsigned long long)arg1 ;
-(void)setPagingAxis:(long long)arg1 ;
-(long long)pagingAxis;
-(unsigned long long)maxButtonsPerPage;
-(unsigned long long)buttonStretchThreshold;
-(double)interButtonPadding;
@end
