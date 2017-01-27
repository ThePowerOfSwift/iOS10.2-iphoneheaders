/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IMBloomFilter, NSString;

@interface IMDocumentFragmentFilter : NSObject <NSCoding> {

	IMBloomFilter* _filter;
	SCD_Struct_IM13 _specification;

}

@property (readonly) NSString * usageDescription; 
-(id)initWithDocument:(id)arg1 filterSpecification:(SCD_Struct_IM14)arg2 ;
-(BOOL)mightContainFragment:(id)arg1 ;
-(long long)indexSize;
-(NSString *)usageDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end
