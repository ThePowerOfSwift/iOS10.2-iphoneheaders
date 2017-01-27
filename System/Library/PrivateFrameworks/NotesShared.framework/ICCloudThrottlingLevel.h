/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICCloudThrottlingLevel : NSObject {

	double _batchInterval;
	unsigned long long _numberOfBatches;

}

@property (assign,nonatomic) double batchInterval;                            //@synthesize batchInterval=_batchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBatches;              //@synthesize numberOfBatches=_numberOfBatches - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2 ;
-(unsigned long long)numberOfBatches;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(void)setNumberOfBatches:(unsigned long long)arg1 ;
@end
