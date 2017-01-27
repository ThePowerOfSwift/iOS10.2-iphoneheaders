/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MDLVertexAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _offset;
	unsigned long long _bufferIndex;
	unsigned long long _format;
	double _time;
	 _initializationValue;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long bufferIndex;              //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (assign,nonatomic) double time;                                 //@synthesize time=_time - In the implementation block
@property (assign,nonatomic)  initializationValue;                        //@synthesize initializationValue=_initializationValue - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)format;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4 ;
-()initializationValue;
-(void)setInitializationValue:;
-(void)setBufferIndex:(unsigned long long)arg1 ;
-(void)setFormat:(unsigned long long)arg1 ;
-(unsigned long long)bufferIndex;
@end
