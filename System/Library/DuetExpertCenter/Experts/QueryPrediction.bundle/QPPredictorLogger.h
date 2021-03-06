/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _DECDailyQPLoggingScheduler, NSObject, PETScalarEventTracker, PETGoalConversionEventTracker;

@interface QPPredictorLogger : NSObject {

	_DECDailyQPLoggingScheduler* _loggingScheduler;
	NSObject*<OS_dispatch_queue> _queue;
	PETScalarEventTracker* _qpDisabledByUserTracker;
	PETScalarEventTracker* _qpEnabledByUserTracker;
	PETScalarEventTracker* _qpDisabledOnStartupTracker;
	PETScalarEventTracker* _qpEnabledOnStartupTracker;
	PETScalarEventTracker* _qpPredictionAllQuerySourceTracker;
	PETGoalConversionEventTracker* _qpPredictionSomeQueryBlacklistedTracker;
	PETGoalConversionEventTracker* _qpPredictionQueryBlacklistedTracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * qpDisabledOnStartupTracker;                                   //@synthesize qpDisabledOnStartupTracker=_qpDisabledOnStartupTracker - In the implementation block
@property (nonatomic,readonly) PETScalarEventTracker * qpEnabledOnStartupTracker;                                    //@synthesize qpEnabledOnStartupTracker=_qpEnabledOnStartupTracker - In the implementation block
@property (nonatomic,readonly) PETScalarEventTracker * qpPredictionAllQuerySourceTracker;                            //@synthesize qpPredictionAllQuerySourceTracker=_qpPredictionAllQuerySourceTracker - In the implementation block
@property (nonatomic,readonly) PETGoalConversionEventTracker * qpPredictionSomeQueryBlacklistedTracker;              //@synthesize qpPredictionSomeQueryBlacklistedTracker=_qpPredictionSomeQueryBlacklistedTracker - In the implementation block
@property (nonatomic,readonly) PETGoalConversionEventTracker * qpPredictionQueryBlacklistedTracker;                  //@synthesize qpPredictionQueryBlacklistedTracker=_qpPredictionQueryBlacklistedTracker - In the implementation block
-(PETScalarEventTracker *)qpPredictionAllQuerySourceTracker;
-(PETGoalConversionEventTracker *)qpPredictionQueryBlacklistedTracker;
-(PETScalarEventTracker *)qpDisabledOnStartupTracker;
-(PETScalarEventTracker *)qpEnabledOnStartupTracker;
-(PETGoalConversionEventTracker *)qpPredictionSomeQueryBlacklistedTracker;
-(id)initWithParameters:(id)arg1 ;
@end

