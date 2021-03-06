/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSArray, HDProfile, HDDemoDataGeneratorState, NSCalendar, NSObject, HDDemoDataPerson, HDDemoDataActivitySampleGenerator, HDDemoDataBloodSampleGenerator, HDDemoDataBodySampleGenerator, HDDemoDataFoodSampleGenerator, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataVitalsSampleGenerator, HDDemoDataMindfulnessSampleGenerator, NSString;

@interface HDDemoDataGenerator : NSObject <HDHealthDaemonReadyObserver> {

	NSArray* _sampleGenerators;
	HDProfile* _profile;
	HDDemoDataGeneratorState* _generatorState;
	NSCalendar* _gregorianCalendar;
	long long _numHKSamples;
	BOOL _isGeneratingDemoData;
	NSObject*<OS_dispatch_queue> _demoDataQueue;
	NSObject*<OS_dispatch_source> _demoDataTimer;
	HDDemoDataPerson* _demoPerson;
	HDDemoDataActivitySampleGenerator* _activitySampleGenerator;
	HDDemoDataBloodSampleGenerator* _bloodSampleGenerator;
	HDDemoDataBodySampleGenerator* _bodySampleGenerator;
	HDDemoDataFoodSampleGenerator* _foodSampleGenerator;
	HDDemoDataHealthDocumentSampleGenerator* _healthDocumentSampleGenerator;
	HDDemoDataPathologySampleGenerator* _pathologySampleGenerator;
	HDDemoDataReproductiveHealthSampleGenerator* _reproductiveHealthSampleGenerator;
	HDDemoDataSleepSampleGenerator* _sleepSampleGenerator;
	HDDemoDataStatisticsSampleGenerator* _statisticsSampleGenerator;
	HDDemoDataVitalsSampleGenerator* _vitalsSampleGenerator;
	HDDemoDataMindfulnessSampleGenerator* _mindfulnessSampleGenerator;

}

@property (nonatomic,retain) HDDemoDataPerson * demoPerson;                                                                //@synthesize demoPerson=_demoPerson - In the implementation block
@property (nonatomic,retain) HDDemoDataActivitySampleGenerator * activitySampleGenerator;                                  //@synthesize activitySampleGenerator=_activitySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataBloodSampleGenerator * bloodSampleGenerator;                                        //@synthesize bloodSampleGenerator=_bloodSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataBodySampleGenerator * bodySampleGenerator;                                          //@synthesize bodySampleGenerator=_bodySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataFoodSampleGenerator * foodSampleGenerator;                                          //@synthesize foodSampleGenerator=_foodSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataHealthDocumentSampleGenerator * healthDocumentSampleGenerator;                      //@synthesize healthDocumentSampleGenerator=_healthDocumentSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataPathologySampleGenerator * pathologySampleGenerator;                                //@synthesize pathologySampleGenerator=_pathologySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataReproductiveHealthSampleGenerator * reproductiveHealthSampleGenerator;              //@synthesize reproductiveHealthSampleGenerator=_reproductiveHealthSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataSleepSampleGenerator * sleepSampleGenerator;                                        //@synthesize sleepSampleGenerator=_sleepSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataStatisticsSampleGenerator * statisticsSampleGenerator;                              //@synthesize statisticsSampleGenerator=_statisticsSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataVitalsSampleGenerator * vitalsSampleGenerator;                                      //@synthesize vitalsSampleGenerator=_vitalsSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataMindfulnessSampleGenerator * mindfulnessSampleGenerator;                            //@synthesize mindfulnessSampleGenerator=_mindfulnessSampleGenerator - In the implementation block
@property (nonatomic,readonly) HDDemoDataGeneratorState * generatorState;                                                  //@synthesize generatorState=_generatorState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDDemoDataPerson *)demoPerson;
-(HDDemoDataActivitySampleGenerator *)activitySampleGenerator;
-(HDDemoDataSleepSampleGenerator *)sleepSampleGenerator;
-(HDDemoDataStatisticsSampleGenerator *)statisticsSampleGenerator;
-(HDDemoDataBodySampleGenerator *)bodySampleGenerator;
-(HDDemoDataGeneratorState *)generatorState;
-(id)currentDateFromCurrentTime:(double)arg1 ;
-(HDDemoDataVitalsSampleGenerator *)vitalsSampleGenerator;
-(id)firstSampleDate;
-(id)gregorianCalendar;
-(long long)firstSampleDayOfYear;
-(HDDemoDataFoodSampleGenerator *)foodSampleGenerator;
-(void)_triggerDemoDataGenerationAfterTimeInterval:(double)arg1 ;
-(void)_queue_generateDemoDataIfNeeded;
-(void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 currentDate:(id)arg2 ;
-(id)_stateDirectory;
-(void)_archiveToDirectoryPath:(id)arg1 ;
-(BOOL)_queue_loadDemoDataSampleGeneratorState;
-(void)_queue_initDemoDataSampleGenerators;
-(void)_insertBiographicalDataFromDemoPerson:(id)arg1 ;
-(void)_insertMedicalIDForDemoPerson:(id)arg1 ;
-(double)_initialGenerationTimeWithCurrentDate:(id)arg1 ;
-(void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_phoneProveance;
-(BOOL)_queue_unarchiveFromDirectoryPath:(id)arg1 ;
-(void)_queue_setupDemoDataSampleGenerators;
-(void)_runAchievementDoctorWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_generateFirstRunDataForDemoPerson:(id)arg1 ;
-(void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2 ;
-(void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2 ;
-(void)_updateWorkoutConfigurationInGeneratorState;
-(BOOL)isDifferentDayFromTime:(double)arg1 ;
-(id)_watchProvenanceWithPerson:(id)arg1 ;
-(BOOL)_archiveObject:(id)arg1 toDirectoryPath:(id)arg2 ;
-(id)_unarchiveDataWithClass:(Class)arg1 atDirectoryPath:(id)arg2 ;
-(void)setDemoPerson:(HDDemoDataPerson *)arg1 ;
-(void)setActivitySampleGenerator:(HDDemoDataActivitySampleGenerator *)arg1 ;
-(HDDemoDataBloodSampleGenerator *)bloodSampleGenerator;
-(void)setBloodSampleGenerator:(HDDemoDataBloodSampleGenerator *)arg1 ;
-(void)setBodySampleGenerator:(HDDemoDataBodySampleGenerator *)arg1 ;
-(void)setFoodSampleGenerator:(HDDemoDataFoodSampleGenerator *)arg1 ;
-(HDDemoDataHealthDocumentSampleGenerator *)healthDocumentSampleGenerator;
-(void)setHealthDocumentSampleGenerator:(HDDemoDataHealthDocumentSampleGenerator *)arg1 ;
-(HDDemoDataPathologySampleGenerator *)pathologySampleGenerator;
-(void)setPathologySampleGenerator:(HDDemoDataPathologySampleGenerator *)arg1 ;
-(HDDemoDataReproductiveHealthSampleGenerator *)reproductiveHealthSampleGenerator;
-(void)setReproductiveHealthSampleGenerator:(HDDemoDataReproductiveHealthSampleGenerator *)arg1 ;
-(void)setSleepSampleGenerator:(HDDemoDataSleepSampleGenerator *)arg1 ;
-(void)setStatisticsSampleGenerator:(HDDemoDataStatisticsSampleGenerator *)arg1 ;
-(void)setVitalsSampleGenerator:(HDDemoDataVitalsSampleGenerator *)arg1 ;
-(HDDemoDataMindfulnessSampleGenerator *)mindfulnessSampleGenerator;
-(void)setMindfulnessSampleGenerator:(HDDemoDataMindfulnessSampleGenerator *)arg1 ;
@end

