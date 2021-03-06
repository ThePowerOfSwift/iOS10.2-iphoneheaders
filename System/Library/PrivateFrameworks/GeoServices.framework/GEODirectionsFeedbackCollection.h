/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	GEONavigationAudioFeedback _navigationAudioFeedback;
	double _durationOfTrip;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	BOOL _arrivedAtDestination;
	SCD_Struct_GE20 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                            //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                                     //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination;                                       //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) GEONavigationAudioFeedback navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfTrip; 
@property (assign,nonatomic) double durationOfTrip;                                           //@synthesize durationOfTrip=_durationOfTrip - In the implementation block
+(Class)directionsFeedbackType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearDirectionsFeedbacks;
-(void)addDirectionsFeedback:(id)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFinalLocation;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(BOOL)hasArrivedAtDestination;
-(void)setNavigationAudioFeedback:(GEONavigationAudioFeedback)arg1 ;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(BOOL)hasNavigationAudioFeedback;
-(void)setDurationOfTrip:(double)arg1 ;
-(void)setHasDurationOfTrip:(BOOL)arg1 ;
-(BOOL)hasDurationOfTrip;
-(NSMutableArray *)directionsFeedbacks;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(GEOLocation *)finalLocation;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(BOOL)arrivedAtDestination;
-(GEONavigationAudioFeedback)navigationAudioFeedback;
-(double)durationOfTrip;
@end

