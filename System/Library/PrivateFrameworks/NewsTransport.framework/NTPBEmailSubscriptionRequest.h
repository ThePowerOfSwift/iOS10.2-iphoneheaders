/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {

	long long _dsId;
	NSString* _languageCode;
	NSString* _userStorefrontId;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasDsId; 
@property (assign,nonatomic) long long dsId;                           //@synthesize dsId=_dsId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;              //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(long long)dsId;
-(void)setDsId:(long long)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setHasDsId:(BOOL)arg1 ;
-(BOOL)hasDsId;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
@end

