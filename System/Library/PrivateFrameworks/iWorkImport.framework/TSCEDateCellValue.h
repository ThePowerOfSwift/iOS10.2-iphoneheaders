/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCEDateCellValue : TSCECellValue {

	TSCEDateValue* mDateValue;

}
-(void)encodeToArchive:(DateCellValueArchive*)arg1 ;
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(id)initWithArchive:(const DateCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithDateValue:(TSCEDateValue*)arg1 locale:(id)arg2 ;
-(id)initWithDate:(id)arg1 locale:(id)arg2 ;
-(void)dealloc;
-(id)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCEDateValue*)dateValue;
-(SCD_Struct_TS49)formatStruct;
@end
