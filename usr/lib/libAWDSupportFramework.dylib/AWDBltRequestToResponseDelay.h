/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDBltRequestToResponseDelay : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _delayMs;
	NSString* _uniqueid;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueid; 
@property (nonatomic,retain) NSString * uniqueid;                       //@synthesize uniqueid=_uniqueid - In the implementation block
@property (assign,nonatomic) BOOL hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                          //@synthesize delayMs=_delayMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setUniqueid:(NSString *)arg1 ;
-(BOOL)hasUniqueid;
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setHasDelayMs:(BOOL)arg1 ;
-(BOOL)hasDelayMs;
-(NSString *)uniqueid;
-(unsigned)delayMs;
@end
