/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString;

@interface _INPBIntentSlotVocabularyValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _examples;
	NSString* _phrase;
	NSString* _pronunciation;

}

@property (nonatomic,readonly) BOOL hasPhrase; 
@property (nonatomic,retain) NSString * phrase;                              //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,readonly) BOOL hasPronunciation; 
@property (nonatomic,retain) NSString * pronunciation;                       //@synthesize pronunciation=_pronunciation - In the implementation block
@property (nonatomic,retain) NSMutableArray * examples;                      //@synthesize examples=_examples - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)examplesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)examples;
-(void)setExamples:(NSMutableArray *)arg1 ;
-(NSString *)phrase;
-(void)addExamples:(id)arg1 ;
-(void)setPhrase:(NSString *)arg1 ;
-(void)setPronunciation:(NSString *)arg1 ;
-(BOOL)hasPhrase;
-(BOOL)hasPronunciation;
-(void)clearExamples;
-(unsigned long long)examplesCount;
-(id)examplesAtIndex:(unsigned long long)arg1 ;
-(NSString *)pronunciation;
@end
