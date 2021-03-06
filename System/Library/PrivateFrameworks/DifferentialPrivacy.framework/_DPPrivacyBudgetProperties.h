/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject {

	NSString* _name;
	NSNumber* _interval;
	NSNumber* _intervalBudgetValue;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * interval;                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSNumber * intervalBudgetValue;              //@synthesize intervalBudgetValue=_intervalBudgetValue - In the implementation block
+(id)budgetPropertiesForKey:(id)arg1 ;
+(id)budgetMaintenanceSchedule;
+(id)allBudgetPropertiesKeys;
+(id)budgetPropertiesFromFile:(id)arg1 ;
+(id)budgetPropertiesFromDictionary:(id)arg1 ;
+(void)initializeAllBudgetProperties;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(NSNumber *)intervalBudgetValue;
-(void)setIntervalBudgetValue:(NSNumber *)arg1 ;
@end

