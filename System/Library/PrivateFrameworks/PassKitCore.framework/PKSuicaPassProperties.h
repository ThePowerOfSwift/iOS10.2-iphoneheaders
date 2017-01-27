/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKFelicaPassProperties, NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : NSObject {

	PKFelicaPassProperties* _felicaProperties;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * transitBalance; 
@property (nonatomic,copy,readonly) NSString * transitBalanceCurrencyCode; 
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) BOOL greenCarTicketUsed; 
@property (getter=isBlacklisted,nonatomic,readonly) BOOL blacklisted; 
+(id)passPropertiesForPass:(id)arg1 ;
-(BOOL)isBlacklisted;
-(BOOL)isInShinkansenStation;
-(BOOL)isGreenCarTicketUsed;
-(NSDecimalNumber *)transitBalance;
-(id)_initWithProperties:(id)arg1 ;
-(NSString *)transitBalanceCurrencyCode;
-(BOOL)isInStation;
@end
