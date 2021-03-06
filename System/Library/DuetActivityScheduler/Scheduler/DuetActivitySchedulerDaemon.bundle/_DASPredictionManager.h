/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DASPredictionManager : NSObject
+(id)sharedPredictor;
+(id)predictionGenerationQueue;
+(BOOL)predictionNeedsUpdating:(id)arg1 atDate:(id)arg2 lastUpdatedAt:(id)arg3 ;
+(void)setPrediction:(id)arg1 forKey:(id)arg2 ;
+(id)lowLikelihoodPeriodStartForPredictionWithKey:(id)arg1 ;
+(id)lowLikelihoodPeriodEndForPredictionWithKey:(id)arg1 ;
+(id)getValuesForPrediction:(id)arg1 tillEndDate:(id)arg2 withIntervals:(double)arg3 ;
+(id)predictionForKey:(id)arg1 ;
+(id)cacheDetailsForPredictionWithKey:(id)arg1 ;
+(void)initialize;
+(id)currentPredictions;
@end

