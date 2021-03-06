/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/PEXServant.h>

@class PEXConnectionsParameters, PEXConnectionsPasteboardSource, PEXConnectionsCalendarSource, PEXConnectionsDuetSource, PEXConnectionsMetricsTracker, NSString;

@interface PEXConnectionsExpertServant : PEXServant {

	PEXConnectionsParameters* _parameters;
	PEXConnectionsPasteboardSource* _pasteboardSource;
	PEXConnectionsCalendarSource* _calendarSource;
	PEXConnectionsDuetSource* _duetSource;
	PEXConnectionsMetricsTracker* _metricsTracker;
	NSString* _identifier;

}
-(id)init;
-(id)parameters;
-(id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)predictionForCriteria:(id)arg1 limit:(unsigned long long)arg2 consumer:(unsigned long long)arg3 category:(unsigned long long)arg4 ;
-(id)cutoffLinguisticTriggerTime;
-(id)recentLocationItemWithCriteria:(id)arg1 consumer:(unsigned long long)arg2 category:(unsigned long long)arg3 limit:(unsigned long long)arg4 customCutoffTime:(id)arg5 ;
-(id)cutoffActivityTime;
-(id)cutoffCalendarEventTime;
-(id)cutoffPasteboardItemTime;
-(id)pasteboardSource;
-(id)duetSource;
-(id)calendarSource;
-(id)cutoffLocationAppLastUseTime;
@end

