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

@class NSString, NSMutableArray;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying> {

	long long _badgesTimeout;
	long long _cutoffTime;
	long long _maximumArticleCount;
	NSString* _channelId;
	NSMutableArray* _styleConfigs;
	BOOL _pinningEnabled;
	BOOL _promotingEnabled;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasPinningEnabled; 
@property (assign,nonatomic) BOOL pinningEnabled;                        //@synthesize pinningEnabled=_pinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPromotingEnabled; 
@property (assign,nonatomic) BOOL promotingEnabled;                      //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                       //@synthesize channelId=_channelId - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumArticleCount; 
@property (assign,nonatomic) long long maximumArticleCount;              //@synthesize maximumArticleCount=_maximumArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasCutoffTime; 
@property (assign,nonatomic) long long cutoffTime;                       //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleConfigs;              //@synthesize styleConfigs=_styleConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasBadgesTimeout; 
@property (assign,nonatomic) long long badgesTimeout;                    //@synthesize badgesTimeout=_badgesTimeout - In the implementation block
+(Class)styleConfigsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(BOOL)pinningEnabled;
-(BOOL)promotingEnabled;
-(NSString *)channelId;
-(long long)maximumArticleCount;
-(long long)cutoffTime;
-(NSMutableArray *)styleConfigs;
-(long long)badgesTimeout;
-(BOOL)hasChannelId;
-(void)addStyleConfigs:(id)arg1 ;
-(void)setPinningEnabled:(BOOL)arg1 ;
-(void)setHasPinningEnabled:(BOOL)arg1 ;
-(BOOL)hasPinningEnabled;
-(void)setPromotingEnabled:(BOOL)arg1 ;
-(void)setHasPromotingEnabled:(BOOL)arg1 ;
-(BOOL)hasPromotingEnabled;
-(void)setMaximumArticleCount:(long long)arg1 ;
-(void)setHasMaximumArticleCount:(BOOL)arg1 ;
-(BOOL)hasMaximumArticleCount;
-(void)setCutoffTime:(long long)arg1 ;
-(void)setHasCutoffTime:(BOOL)arg1 ;
-(BOOL)hasCutoffTime;
-(void)clearStyleConfigs;
-(unsigned long long)styleConfigsCount;
-(id)styleConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setBadgesTimeout:(long long)arg1 ;
-(void)setHasBadgesTimeout:(BOOL)arg1 ;
-(BOOL)hasBadgesTimeout;
-(void)setStyleConfigs:(NSMutableArray *)arg1 ;
@end

