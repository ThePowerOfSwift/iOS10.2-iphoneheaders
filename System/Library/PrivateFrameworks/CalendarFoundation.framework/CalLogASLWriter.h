/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/CalLogWriter.h>

@interface CalLogASLWriter : CalLogWriter {

	asl_object_sRef log_client;

}
+(id)aslNamespaces;
-(void)dealloc;
-(void)_configureASLClient;
-(void)_configureASLNamespaces;
-(char*)aslLevelForLogLevel:(int)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)write:(id)arg1 ;
@end
