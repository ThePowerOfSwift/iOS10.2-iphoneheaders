/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCCacheCoordinatorFlushPolicy : NSObject {

	BOOL _alwaysFlushKeysWithZeroInterest;
	unsigned long long _highWaterMark;
	unsigned long long _lowWaterMark;

}

@property (assign,nonatomic) BOOL alwaysFlushKeysWithZeroInterest;              //@synthesize alwaysFlushKeysWithZeroInterest=_alwaysFlushKeysWithZeroInterest - In the implementation block
@property (assign,nonatomic) unsigned long long highWaterMark;                  //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (assign,nonatomic) unsigned long long lowWaterMark;                   //@synthesize lowWaterMark=_lowWaterMark - In the implementation block
-(void)setHighWaterMark:(unsigned long long)arg1 ;
-(void)setLowWaterMark:(unsigned long long)arg1 ;
-(void)setAlwaysFlushKeysWithZeroInterest:(BOOL)arg1 ;
-(BOOL)canFlushWithDataSize:(unsigned long long)arg1 ;
-(BOOL)canPreemptiveFlushWithDataSize:(unsigned long long)arg1 ;
-(BOOL)alwaysFlushKeysWithZeroInterest;
-(unsigned long long)highWaterMark;
-(unsigned long long)lowWaterMark;
@end

