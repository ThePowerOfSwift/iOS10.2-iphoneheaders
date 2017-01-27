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

@class NSMutableArray, NSData, NSDictionary, CKRecord;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying> {

	NSMutableArray* _closedChangeGroups;
	NSMutableArray* _openChangeGroupDeltas;
	NSData* _remoteRecordData;

}

@property (nonatomic,readonly) NSDictionary * openChangeGroupDeltasByFeatureKey; 
@property (nonatomic,retain) CKRecord * remoteRecord; 
@property (nonatomic,retain) NSMutableArray * openChangeGroupDeltas;                          //@synthesize openChangeGroupDeltas=_openChangeGroupDeltas - In the implementation block
@property (nonatomic,retain) NSMutableArray * closedChangeGroups;                             //@synthesize closedChangeGroups=_closedChangeGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteRecordData; 
@property (nonatomic,retain) NSData * remoteRecordData;                                       //@synthesize remoteRecordData=_remoteRecordData - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)openChangeGroupDeltasType;
+(Class)closedChangeGroupsType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(CKRecord *)remoteRecord;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(NSDictionary *)openChangeGroupDeltasByFeatureKey;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)openChangeGroupDeltas;
-(NSData *)remoteRecordData;
-(void)setRemoteRecordData:(NSData *)arg1 ;
-(NSMutableArray *)closedChangeGroups;
-(void)setOpenChangeGroupDeltas:(NSMutableArray *)arg1 ;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(void)addOpenChangeGroupDeltas:(id)arg1 ;
-(void)addClosedChangeGroups:(id)arg1 ;
-(void)clearOpenChangeGroupDeltas;
-(unsigned long long)openChangeGroupDeltasCount;
-(id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1 ;
-(void)clearClosedChangeGroups;
-(unsigned long long)closedChangeGroupsCount;
-(id)closedChangeGroupsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRemoteRecordData;
@end
