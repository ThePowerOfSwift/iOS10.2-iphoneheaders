/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFLocation, NSLocale, NSDate, NSString, NSArray;

@interface WFAirQualityConditions : NSObject <NSSecureCoding> {

	WFLocation* _location;
	NSLocale* _locale;
	NSDate* _date;
	NSString* _provider;
	long long _localizedAirQualityIndex;
	NSString* _localizedAirQualityCategory;
	NSArray* _pollutants;
	NSDate* _expirationDate;
	unsigned long long _category;

}

@property (nonatomic,retain) WFLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * provider;                                 //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL isExpired; 
@property (assign,nonatomic) unsigned long long category;                       //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long localizedAirQualityIndex;                //@synthesize localizedAirQualityIndex=_localizedAirQualityIndex - In the implementation block
@property (nonatomic,copy) NSString * localizedAirQualityCategory;              //@synthesize localizedAirQualityCategory=_localizedAirQualityCategory - In the implementation block
@property (nonatomic,copy) NSArray * pollutants;                                //@synthesize pollutants=_pollutants - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(NSDate *)date;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(WFLocation *)location;
-(NSLocale *)locale;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(long long)airQualityIndex;
-(NSArray *)pollutants;
-(void)setPollutants:(NSArray *)arg1 ;
-(void)setLocalizedAirQualityIndex:(long long)arg1 ;
-(long long)localizedAirQualityIndex;
-(BOOL)isExpired;
-(void)setLocalizedAirQualityCategory:(NSString *)arg1 ;
-(NSString *)localizedAirQualityCategory;
@end

