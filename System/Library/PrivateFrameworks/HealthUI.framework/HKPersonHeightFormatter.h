/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject {

	NSLengthFormatter* _heightFormatter;
	NSNumber* _usesImperialUnits;

}

@property (nonatomic,readonly) BOOL usesImperialUnits; 
+(id)sharedFormatter;
-(id)init;
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(id)localizedStringFromHeightInCentimeters:(id)arg1 ;
-(void)getFeet:(long long*)arg1 inches:(long long*)arg2 fromCentimeters:(double)arg3 ;
-(BOOL)usesImperialUnits;
-(double)centimetersFromFeet:(double)arg1 inches:(double)arg2 ;
-(id)formattedValueForFeet:(double)arg1 ;
-(id)formattedValueForInches:(double)arg1 ;
-(id)formattedValueForCentimeters:(double)arg1 ;
@end

