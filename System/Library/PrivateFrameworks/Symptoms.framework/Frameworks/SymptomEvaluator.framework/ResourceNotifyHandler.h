/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSString;

@interface ResourceNotifyHandler : NSObject <ConfigurableObjectProtocol> {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _port;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(BOOL)processOnBatteryOnly;
-(id)init;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)resouceNotifyEvent:(id)arg1 triggeredBy:(char)arg2 pid:(int)arg3 path:(char)arg4 endTime:(mach_timespec)arg5 observedValue:(long long)arg6 observationWindow:(long long)arg7 limitValue:(long long)arg8 limitWindow:(long long)arg9 fatal:(BOOL)arg10 ;
-(void)setupResourceNotifyReceiver;
@end

