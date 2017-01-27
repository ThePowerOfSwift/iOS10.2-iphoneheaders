/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable <NSCopying> {

	NTPBDate* _feedDateRangeEnd;
	NTPBDate* _feedDateRangeStart;
	NTPBDate* _keyDate;

}

@property (nonatomic,readonly) BOOL hasKeyDate; 
@property (nonatomic,retain) NTPBDate * keyDate;                         //@synthesize keyDate=_keyDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedDateRangeStart; 
@property (nonatomic,retain) NTPBDate * feedDateRangeStart;              //@synthesize feedDateRangeStart=_feedDateRangeStart - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedDateRangeEnd; 
@property (nonatomic,retain) NTPBDate * feedDateRangeEnd;                //@synthesize feedDateRangeEnd=_feedDateRangeEnd - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NTPBDate *)keyDate;
-(void)setKeyDate:(NTPBDate *)arg1 ;
-(NTPBDate *)feedDateRangeStart;
-(NTPBDate *)feedDateRangeEnd;
-(void)setFeedDateRangeStart:(NTPBDate *)arg1 ;
-(void)setFeedDateRangeEnd:(NTPBDate *)arg1 ;
-(BOOL)hasKeyDate;
-(BOOL)hasFeedDateRangeStart;
-(BOOL)hasFeedDateRangeEnd;
@end
