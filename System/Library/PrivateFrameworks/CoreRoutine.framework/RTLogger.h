/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface RTLogger : NSObject {

	NSDictionary* _logChannels;

}

@property (nonatomic,retain) NSDictionary * logChannels;              //@synthesize logChannels=_logChannels - In the implementation block
+(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
+(id)crashReports;
+(id)sharedInstance;
+(id)logFacilities;
-(void)logProcessDiagnosticInformation;
-(id)init;
-(NSDictionary *)logChannels;
-(void)setLogChannels:(NSDictionary *)arg1 ;
-(id)logChannelForFacility:(id)arg1 ;
@end
