/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLTimer;

@interface PLConfigAgent : PLAgent {

	PLTimer* _timedTrigger;

}

@property (retain) PLTimer * timedTrigger;              //@synthesize timedTrigger=_timedTrigger - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventNoneDefinitionConfig;
+(id)entryEventNoneDefinitionPairedDeviceConfig;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)dealloc;
-(id)buildVersion;
-(void)log;
-(id)hardwareModel;
-(void)initOperatorDependancies;
-(void)pairStatusDidChange:(id)arg1 ;
-(void)logEventNoneConfig;
-(void)logEventNonePairedDeviceConfig;
-(id)crashReporterKey;
-(id)bootArgs;
-(long long)autolockTime;
-(id)baseband;
-(id)basebandFirmware;
-(BOOL)noWatchdogs;
-(BOOL)disableCABlanking;
-(id)logAutomatedDeviceGroup;
-(id)seedGroup;
-(int)getDeviceType;
-(id)logAndUpdateLastBuild:(id)arg1 ;
-(id)hwConfig;
-(id)hwBoardRevision;
-(PLTimer *)timedTrigger;
-(void)setTimedTrigger:(PLTimer *)arg1 ;
-(id)deviceName;
@end

