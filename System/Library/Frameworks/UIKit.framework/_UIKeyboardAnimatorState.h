/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIKeyboardAnimatorState <NSObject>
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden; 
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
@required
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1;
-(UIView *)animatingView;
-(BOOL)inputViewsHidden;

@end
