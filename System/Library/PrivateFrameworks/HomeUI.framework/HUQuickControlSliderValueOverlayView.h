/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface HUQuickControlSliderValueOverlayView : UIView {

	BOOL _off;
	BOOL _showsSecondGrabber;
	unsigned long long _primaryGrabberLocation;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (assign,getter=isOff,nonatomic) BOOL off;                                  //@synthesize off=_off - In the implementation block
@property (assign,nonatomic) BOOL showsSecondGrabber;                                //@synthesize showsSecondGrabber=_showsSecondGrabber - In the implementation block
@property (assign,nonatomic) unsigned long long primaryGrabberLocation;              //@synthesize primaryGrabberLocation=_primaryGrabberLocation - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setOff:(BOOL)arg1 ;
-(void)setShowsSecondGrabber:(BOOL)arg1 ;
-(void)setPrimaryGrabberLocation:(unsigned long long)arg1 ;
-(void)_updateShape;
-(void)_updateBlendMode;
-(unsigned long long)primaryGrabberLocation;
-(BOOL)showsSecondGrabber;
-(BOOL)isOff;
@end

