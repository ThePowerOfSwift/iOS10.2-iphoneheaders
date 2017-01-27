/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIControl.h>

@class HUIconView;

@interface HUIconButton : UIControl {

	HUIconView* _iconView;

}

@property (nonatomic,retain) HUIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(HUIconView *)iconView;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)updateWithIconDescriptor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIconView:(HUIconView *)arg1 ;
@end
