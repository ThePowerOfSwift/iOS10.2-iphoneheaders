/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {

	unsigned long long _iad;
	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned long long _transactionTotal;
	NSData* _aid;
	NSData* _cdi;
	unsigned _command;
	unsigned _commandStatus;
	unsigned _currencyCode;
	unsigned _cvm;
	unsigned _informative;
	NSData* _maid;
	NSData* _maidDeprecated;
	NSData* _mcii;
	unsigned _msc;
	NSData* _transactionId;
	unsigned _transactionStatus;
	unsigned _transactionType;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasCommandStatus; 
@property (assign,nonatomic) unsigned commandStatus;                                 //@synthesize commandStatus=_commandStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) unsigned command;                                       //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionStatus; 
@property (assign,nonatomic) unsigned transactionStatus;                             //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasInformative; 
@property (assign,nonatomic) unsigned informative;                                   //@synthesize informative=_informative - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTotal; 
@property (assign,nonatomic) unsigned long long transactionTotal;                    //@synthesize transactionTotal=_transactionTotal - In the implementation block
@property (assign,nonatomic) BOOL hasCurrencyCode; 
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasIad; 
@property (assign,nonatomic) unsigned long long iad;                                 //@synthesize iad=_iad - In the implementation block
@property (assign,nonatomic) BOOL hasCvm; 
@property (assign,nonatomic) unsigned cvm;                                           //@synthesize cvm=_cvm - In the implementation block
@property (nonatomic,readonly) BOOL hasCdi; 
@property (nonatomic,retain) NSData * cdi;                                           //@synthesize cdi=_cdi - In the implementation block
@property (nonatomic,readonly) BOOL hasMaidDeprecated; 
@property (nonatomic,retain) NSData * maidDeprecated;                                //@synthesize maidDeprecated=_maidDeprecated - In the implementation block
@property (assign,nonatomic) BOOL hasMsc; 
@property (assign,nonatomic) unsigned msc;                                           //@synthesize msc=_msc - In the implementation block
@property (nonatomic,readonly) BOOL hasMcii; 
@property (nonatomic,retain) NSData * mcii;                                          //@synthesize mcii=_mcii - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) unsigned transactionType;                               //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSData * transactionId;                                 //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) BOOL hasMaid; 
@property (nonatomic,retain) NSData * maid;                                          //@synthesize maid=_maid - In the implementation block
-(void)setTransactionType:(unsigned)arg1 ;
-(unsigned)transactionType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasVersion;
-(BOOL)hasCurrencyCode;
-(unsigned)currencyCode;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(void)setCommand:(unsigned)arg1 ;
-(unsigned)command;
-(unsigned)informative;
-(void)setTransactionStatus:(unsigned)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setHasCurrencyCode:(BOOL)arg1 ;
-(void)setTransactionTotal:(unsigned long long)arg1 ;
-(void)setHasTransactionTotal:(BOOL)arg1 ;
-(BOOL)hasTransactionTotal;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(BOOL)hasTransactionType;
-(BOOL)hasTransactionId;
-(unsigned long long)transactionTotal;
-(void)setCommandStatus:(unsigned)arg1 ;
-(void)setInformative:(unsigned)arg1 ;
-(void)setCvm:(unsigned)arg1 ;
-(void)setCdi:(NSData *)arg1 ;
-(NSData *)cdi;
-(void)setMaid:(NSData *)arg1 ;
-(NSData *)maid;
-(void)setMsc:(unsigned)arg1 ;
-(void)setMcii:(NSData *)arg1 ;
-(NSData *)mcii;
-(unsigned long long)iad;
-(void)setIad:(unsigned long long)arg1 ;
-(unsigned)msc;
-(void)setMaidDeprecated:(NSData *)arg1 ;
-(void)setHasCommandStatus:(BOOL)arg1 ;
-(BOOL)hasCommandStatus;
-(void)setHasTransactionStatus:(BOOL)arg1 ;
-(BOOL)hasTransactionStatus;
-(void)setHasInformative:(BOOL)arg1 ;
-(BOOL)hasInformative;
-(void)setHasIad:(BOOL)arg1 ;
-(BOOL)hasIad;
-(void)setHasCvm:(BOOL)arg1 ;
-(BOOL)hasCvm;
-(BOOL)hasCdi;
-(BOOL)hasMaidDeprecated;
-(void)setHasMsc:(BOOL)arg1 ;
-(BOOL)hasMsc;
-(BOOL)hasMcii;
-(BOOL)hasMaid;
-(unsigned)commandStatus;
-(unsigned)cvm;
-(NSData *)maidDeprecated;
-(NSData *)transactionId;
-(void)setAid:(NSData *)arg1 ;
-(BOOL)hasAid;
-(NSData *)aid;
-(unsigned)transactionStatus;
@end

