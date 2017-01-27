/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class HOVelocitySample;

@interface HUVelocitySampler : NSObject {

	HOVelocitySample* _currentSample;
	HOVelocitySample* _previousSample;

}

@property (nonatomic,retain) HOVelocitySample * currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) HOVelocitySample * previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
-(void)reset;
-(CGVector)velocity;
-(HOVelocitySample *)currentSample;
-(void)setPreviousSample:(HOVelocitySample *)arg1 ;
-(void)setCurrentSample:(HOVelocitySample *)arg1 ;
-(HOVelocitySample *)previousSample;
-(void)addTouchSample:(CGPoint)arg1 ;
@end
