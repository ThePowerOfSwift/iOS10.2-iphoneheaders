/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartCacheDataSource.h>

@class HKHealthStore, HKDataUnit, NSString;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {

	HKHealthStore* _healthStore;
	HKDataUnit* _dataUnit;
	/*^block*/id _mappingFunction;

}

@property (nonatomic,readonly) HKDataUnit * dataUnit;               //@synthesize dataUnit=_dataUnit - In the implementation block
@property (nonatomic,readonly) id mappingFunction;                  //@synthesize mappingFunction=_mappingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKDataUnit *)dataUnit;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_seriesPointDateBeforeDate:(id)arg1 forZoom:(long long)arg2 ;
-(id)operationForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDataUnit:(id)arg1 healthStore:(id)arg2 ;
-(id)mappingFunction;
@end
