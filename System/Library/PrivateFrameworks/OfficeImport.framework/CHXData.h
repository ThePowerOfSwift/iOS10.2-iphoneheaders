/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXData : NSObject
+(void)readStrDataFromXmlStrDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
+(void)readStrDataFromXmlMultiLevelStrDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
+(void)readNumDataFromXmlNumDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
+(id)chdDataFromXmlDataElement:(xmlNode*)arg1 state:(id)arg2 ;
+(BOOL)isHiddenDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
@end
