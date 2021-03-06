/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface CKDMMCSRequestOptions : NSObject {

	BOOL _usesBackgroundSession;
	BOOL _allowsCellularAccess;
	BOOL _allowsPowerNapScheduling;
	NSString* _applicationBundleID;
	NSString* _applicationSecondaryID;
	NSString* _containerID;
	NSArray* _zoneNames;
	long long _qualityOfService;
	NSDictionary* _MMCSRequestOptions;

}

@property (nonatomic,retain) NSString * applicationBundleID;                 //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationSecondaryID;              //@synthesize applicationSecondaryID=_applicationSecondaryID - In the implementation block
@property (nonatomic,retain) NSString * containerID;                         //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSArray * zoneNames;                            //@synthesize zoneNames=_zoneNames - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundSession;                     //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                  //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) NSDictionary * MMCSRequestOptions;              //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
-(id)description;
-(NSString *)applicationBundleID;
-(NSString *)containerID;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(long long)qualityOfService;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)allowsPowerNapScheduling;
-(void)setContainerID:(NSString *)arg1 ;
-(BOOL)usesBackgroundSession;
-(id)CKPropertiesDescription;
-(BOOL)allowsCellularAccess;
-(NSDictionary *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(NSDictionary *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setZoneNames:(NSArray *)arg1 ;
-(id)MMCSOptions;
-(NSString *)applicationSecondaryID;
-(NSArray *)zoneNames;
-(void)setApplicationSecondaryID:(NSString *)arg1 ;
@end

