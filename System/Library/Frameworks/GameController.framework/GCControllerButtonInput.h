/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@interface GCControllerButtonInput : GCControllerElement

@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,copy) id pressedChangedHandler; 
@property (nonatomic,readonly) float value; 
@property (getter=isPressed,nonatomic,readonly) BOOL pressed; 
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(BOOL)isPressed;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)pressedChangedHandler;
-(void)setPressedChangedHandler:(id)arg1 ;
@end

