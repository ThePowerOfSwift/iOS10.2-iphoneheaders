/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCItemID, BRCStatInfo, NSNumber, BRCAccountSession, BRCServerZone, BRCClientZone;


@protocol BRCItem <NSCopying,NSSecureCoding>
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isBRAlias; 
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL isFSRoot; 
@property (nonatomic,readonly) BOOL isZoneRoot; 
@property (nonatomic,readonly) BOOL isSymLink; 
@property (nonatomic,readonly) BOOL isFinderBookmark; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) NSNumber * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCClientZone * clientZone; 
@property (assign,nonatomic) unsigned long long sharingOptions; 
@required
-(BOOL)isDirectory;
-(BOOL)isPackage;
-(BOOL)isLive;
-(BRCAccountSession *)session;
-(BRCItemID *)itemID;
-(BRCClientZone *)clientZone;
-(BRCStatInfo *)st;
-(BOOL)isDocument;
-(BOOL)isSymLink;
-(BOOL)isBRAlias;
-(BOOL)isFSRoot;
-(BOOL)isFinderBookmark;
-(BOOL)isDead;
-(unsigned long long)sharingOptions;
-(NSNumber *)ownerKey;
-(BOOL)isZoneRoot;
-(BRCServerZone *)serverZone;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1;
-(void)setSharingOptions:(unsigned long long)arg1;

@end

