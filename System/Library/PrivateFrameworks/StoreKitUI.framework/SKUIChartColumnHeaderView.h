/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl {

	NSArray* _buttons;
	long long _selectedTitleIndex;

}

@property (nonatomic,readonly) double edgePadding; 
@property (assign,nonatomic) long long selectedTitleIndex;              //@synthesize selectedTitleIndex=_selectedTitleIndex - In the implementation block
@property (nonatomic,copy) NSArray * titles; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)sizeToFit;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(double)edgePadding;
-(void)_buttonAction:(id)arg1 ;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(long long)arg1 ;
-(long long)selectedTitleIndex;
@end

