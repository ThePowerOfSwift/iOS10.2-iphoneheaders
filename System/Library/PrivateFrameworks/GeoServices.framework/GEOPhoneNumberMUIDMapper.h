/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOPhoneNumberMUIDMapper : NSObject {

	NSObject*<OS_dispatch_queue> _writeQ;
	NSMutableArray* _uniquePhoneNumbers;
	NSMutableDictionary* _phoneNumberMuidMapping;
	NSString* _filePath;

}
-(void)dealloc;
-(void)_save;
-(id)initWithMappingFilePath:(id)arg1 ;
-(BOOL)getMuid:(out unsigned long long*)arg1 providerId:(out int*)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(void)setMuid:(unsigned long long)arg1 providerId:(int)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(void)_pruneToSize:(unsigned long long)arg1 ;
@end
