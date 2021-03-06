/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>
#import <libobjc.A.dylib/NTKTimerComplicationDisplay.h>

@class NTKColoringLabel, NSString;

@interface NTKTimerLargeModuleView : NTKComplicationModuleView <NTKTimerComplicationDisplay> {

	NTKColoringLabel* _titleLabel;
	NTKColoringLabel* _countdownLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)_layoutContentView;
-(void)setSecondaryForegroundColor:(id)arg1 ;
-(void)setStoppedWithTime:(double)arg1 ;
-(void)_setLayoutForNormalTime:(double)arg1 ;
-(void)_setLayoutWithTitleText:(id)arg1 countdownText:(id)arg2 ;
@end

