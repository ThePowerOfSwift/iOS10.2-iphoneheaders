/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying> {

	NSString* _respondingInstance;
	NSString* _via;

}

@property (nonatomic,readonly) BOOL hasVia; 
@property (nonatomic,retain) NSString * via;                             //@synthesize via=_via - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingInstance; 
@property (nonatomic,retain) NSString * respondingInstance;              //@synthesize respondingInstance=_respondingInstance - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVia:(NSString *)arg1 ;
-(void)setRespondingInstance:(NSString *)arg1 ;
-(BOOL)hasVia;
-(BOOL)hasRespondingInstance;
-(NSString *)via;
-(NSString *)respondingInstance;
@end
