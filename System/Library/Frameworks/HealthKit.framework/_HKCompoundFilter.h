/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {

	NSArray* _subfilters;
	unsigned long long _compoundType;

}

@property (nonatomic,copy,readonly) NSArray * subfilters;                    //@synthesize subfilters=_subfilters - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_subfilters;
-(id)_copyWithZone:(NSZone*)arg1 subfilters:(id)arg2 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSArray *)subfilters;
-(unsigned long long)compoundType;
@end
