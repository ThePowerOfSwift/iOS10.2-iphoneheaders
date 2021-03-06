/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNanoRegistryRequestReport : PBCodable <NSCopying> {

	unsigned long long _requestDuration;
	unsigned long long _timestamp;
	NSString* _gizmoBuild;
	NSString* _gizmoHardware;
	unsigned _requestResponseCode;
	NSString* _requestType;
	BOOL _isAutomated;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomated; 
@property (assign,nonatomic) BOOL isAutomated;                                //@synthesize isAutomated=_isAutomated - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoBuild; 
@property (nonatomic,retain) NSString * gizmoBuild;                           //@synthesize gizmoBuild=_gizmoBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoHardware; 
@property (nonatomic,retain) NSString * gizmoHardware;                        //@synthesize gizmoHardware=_gizmoHardware - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestType; 
@property (nonatomic,retain) NSString * requestType;                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) unsigned long long requestDuration;              //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestResponseCode; 
@property (assign,nonatomic) unsigned requestResponseCode;                    //@synthesize requestResponseCode=_requestResponseCode - In the implementation block
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
-(void)setRequestType:(NSString *)arg1 ;
-(BOOL)hasRequestType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setGizmoBuild:(NSString *)arg1 ;
-(void)setGizmoHardware:(NSString *)arg1 ;
-(void)setIsAutomated:(BOOL)arg1 ;
-(void)setHasIsAutomated:(BOOL)arg1 ;
-(BOOL)hasIsAutomated;
-(BOOL)hasGizmoBuild;
-(BOOL)hasGizmoHardware;
-(BOOL)isAutomated;
-(NSString *)gizmoBuild;
-(NSString *)gizmoHardware;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(BOOL)hasRequestDuration;
-(void)setRequestResponseCode:(unsigned)arg1 ;
-(void)setHasRequestResponseCode:(BOOL)arg1 ;
-(BOOL)hasRequestResponseCode;
-(unsigned)requestResponseCode;
-(NSString *)requestType;
-(unsigned long long)requestDuration;
-(void)setRequestDuration:(unsigned long long)arg1 ;
@end

