/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTransitScheduleTrackerDelegate <NSObject>
@optional
-(void)transitScheduleTracker:(id)arg1 willArriveAtStepIndex:(unsigned long long)arg2 inTimeInterval:(double)arg3;
-(void)transitScheduleTracker:(id)arg1 didArriveAtStepIndex:(unsigned long long)arg2;

@required
-(void)transitScheduleTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
-(void)transitScheduleTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;

@end
