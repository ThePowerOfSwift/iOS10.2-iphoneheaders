/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPPerson : NSObject {

	NSString* _fullName;
	NSString* _handle;
	NSString* _ABUUID;
	NSString* _handleType;

}

@property (readonly) NSString * fullName;                          //@synthesize fullName=_fullName - In the implementation block
@property (readonly) NSString * handle;                            //@synthesize handle=_handle - In the implementation block
@property (readonly) NSString * handleType;                        //@synthesize handleType=_handleType - In the implementation block
@property (readonly) NSString * email; 
@property (retain) NSString * ABUUID;                              //@synthesize ABUUID=_ABUUID - In the implementation block
@property (copy,readonly) NSString * displayableName; 
-(id)init;
-(id)initWithString:(id)arg1 ;
-(NSString *)handleType;
-(NSString *)displayableName;
-(NSString *)handle;
-(NSString *)email;
-(NSString *)ABUUID;
-(void)setABUUID:(NSString *)arg1 ;
-(id)initWithEmail:(id)arg1 fullName:(id)arg2 ;
-(id)initWithHandle:(id)arg1 handleType:(id)arg2 fullName:(id)arg3 ;
-(NSString *)fullName;
@end

