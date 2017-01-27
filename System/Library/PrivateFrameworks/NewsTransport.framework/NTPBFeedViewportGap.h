/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NTPBFeedViewportEdition, NTPBDate;

@interface NTPBFeedViewportGap : PBCodable <NSCopying> {

	SCD_Struct_NT26* _activeGroupEmitterIDRefs;
	SCD_Struct_NT26* _groupEmitterIDRefs;
	NSMutableArray* _cursors;
	NSString* _identifier;
	NTPBFeedViewportEdition* _lastCompletedEdition;
	NTPBDate* _modificationDate;
	NSMutableArray* _pendingGroups;
	NTPBDate* _refreshDate;
	BOOL _isOffline;
	BOOL _reachedEnd;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRefreshDate; 
@property (nonatomic,retain) NTPBDate * refreshDate;                                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationDate; 
@property (nonatomic,retain) NTPBDate * modificationDate;                                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasReachedEnd; 
@property (assign,nonatomic) BOOL reachedEnd;                                                 //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (nonatomic,readonly) unsigned long long groupEmitterIDRefsCount; 
@property (nonatomic,readonly) int* groupEmitterIDRefs; 
@property (nonatomic,retain) NSMutableArray * cursors;                                        //@synthesize cursors=_cursors - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCompletedEdition; 
@property (nonatomic,retain) NTPBFeedViewportEdition * lastCompletedEdition;                  //@synthesize lastCompletedEdition=_lastCompletedEdition - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingGroups;                                  //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,readonly) unsigned long long activeGroupEmitterIDRefsCount; 
@property (nonatomic,readonly) int* activeGroupEmitterIDRefs; 
@property (assign,nonatomic) BOOL hasIsOffline; 
@property (assign,nonatomic) BOOL isOffline;                                                  //@synthesize isOffline=_isOffline - In the implementation block
+(Class)cursorsType;
+(Class)pendingGroupsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(NTPBDate *)modificationDate;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(NSMutableArray *)pendingGroups;
-(void)setPendingGroups:(NSMutableArray *)arg1 ;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(BOOL)hasModificationDate;
-(BOOL)isOffline;
-(NTPBDate *)refreshDate;
-(void)setRefreshDate:(NTPBDate *)arg1 ;
-(NTPBFeedViewportEdition *)lastCompletedEdition;
-(unsigned long long)cursorsCount;
-(id)cursorsAtIndex:(unsigned long long)arg1 ;
-(int)groupEmitterIDRefAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activeGroupEmitterIDRefsCount;
-(int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1 ;
-(void)setIsOffline:(BOOL)arg1 ;
-(void)setLastCompletedEdition:(NTPBFeedViewportEdition *)arg1 ;
-(void)addGroupEmitterIDRef:(int)arg1 ;
-(void)addCursors:(id)arg1 ;
-(void)addPendingGroups:(id)arg1 ;
-(void)addActiveGroupEmitterIDRefs:(int)arg1 ;
-(void)setCursors:(NSMutableArray *)arg1 ;
-(unsigned long long)groupEmitterIDRefsCount;
-(BOOL)hasRefreshDate;
-(void)setHasReachedEnd:(BOOL)arg1 ;
-(BOOL)hasReachedEnd;
-(int*)groupEmitterIDRefs;
-(void)clearGroupEmitterIDRefs;
-(void)setGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearCursors;
-(BOOL)hasLastCompletedEdition;
-(void)clearPendingGroups;
-(unsigned long long)pendingGroupsCount;
-(id)pendingGroupsAtIndex:(unsigned long long)arg1 ;
-(int*)activeGroupEmitterIDRefs;
-(void)clearActiveGroupEmitterIDRefs;
-(void)setActiveGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasIsOffline:(BOOL)arg1 ;
-(BOOL)hasIsOffline;
-(NSMutableArray *)cursors;
@end
