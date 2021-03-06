/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, IDSPairedDeviceRepository, IDSCountdown, NSString, NSDictionary, NSData, NSSet;

@interface IDSPairingManager : NSObject {

	NSHashTable* _delegateMap;
	IDSPairedDeviceRepository* _pairedDeviceRepository;
	BOOL _hasLoadedPairedDevices;
	int _pairingStateToken;
	/*^block*/id _block;
	BOOL _isPendingResetOfKeyRegenerationFlag;
	IDSCountdown* _pairedDeviceInfoRequestCountdown;

}

@property (nonatomic,readonly) NSString * pairedDeviceUUIDString; 
@property (nonatomic,readonly) NSString * pairedDeviceUniqueID; 
@property (nonatomic,readonly) unsigned pairedDevicePairingProtocolVersion; 
@property (nonatomic,readonly) unsigned pairedDeviceMinCompatibilityVersion; 
@property (nonatomic,readonly) unsigned pairedDeviceMaxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned short pairedDeviceServiceMinCompatibilityVersion; 
@property (nonatomic,readonly) NSDictionary * pairedDevice; 
@property (nonatomic,readonly) NSData * pairedDevicePublicKey; 
@property (nonatomic,readonly) NSData * pairedDevicePublicClassAKey; 
@property (nonatomic,readonly) NSData * pairedDevicePublicClassCKey; 
@property (nonatomic,readonly) NSData * pairedDevicePushToken; 
@property (nonatomic,readonly) NSDictionary * pairedDevicePrivateData; 
@property (nonatomic,readonly) NSDictionary * localDevice; 
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) NSSet * allPairedUniqueIDs; 
+(BOOL)_isEncryptionKeyRegenerationSupportedByCapabilityFlags:(unsigned long long)arg1 ;
+(void)devicePairingProtocolVersion:(unsigned*)arg1 minCompatibilityVersion:(unsigned*)arg2 maxCompatibilityVersion:(unsigned*)arg3 ;
+(id)sharedInstance;
-(NSData *)pairedDevicePublicKey;
-(NSData *)pairedDevicePublicClassAKey;
-(NSData *)pairedDevicePublicClassCKey;
-(NSString *)pairedDeviceUUIDString;
-(long long)activatePairedDeviceWithCBUUID:(id)arg1 ;
-(void)ensureCommunicationWithActivePairedDeviceIsPossible;
-(NSString *)pairedDeviceUniqueID;
-(unsigned short)pairedDeviceServiceMinCompatibilityVersion;
-(BOOL)isCurrentDevicePairedOrPairing;
-(NSSet *)allPairedUniqueIDs;
-(unsigned)pairedDevicePairingProtocolVersion;
-(unsigned)pairedDeviceMinCompatibilityVersion;
-(unsigned)pairedDeviceMaxCompatibilityVersion;
-(NSDictionary *)pairedDevicePrivateData;
-(id)pairedDeviceForUniqueID:(id)arg1 ;
-(void)_notifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasAllEncryptionKeys;
-(void)_requestPairedDeviceInfo;
-(void)_requestPairedDeviceInfoAfterDelay:(double)arg1 ;
-(id)_activePairedDeviceCBUUID;
-(void)savedGeneratedClassKeys:(id)arg1 ;
-(void)_loadPairedDevicePropertiesIfNeeded;
-(void)_updatePairedState:(BOOL)arg1 ;
-(void)_updateActiveStateForAllPairedDevices;
-(long long)_migrateSecuredEncryptionKeys;
-(BOOL)_hasPairedDeviceCapabilityFlags;
-(BOOL)_markSecuredEncryptionKeysAsRegenerated:(BOOL)arg1 ;
-(unsigned long long)_pairedDeviceCapabilityFlags;
-(void)_regenerateSecuredEncryptionKeysWithCapabilityFlags:(unsigned long long)arg1 ;
-(unsigned long long)_hasRegeneratedSecuredEncryptionKeys;
-(long long)_statusOfSecuredEncryptionKeyRegenerationWithCapabilityFlags:(unsigned long long)arg1 ;
-(void)_regenerateSecuredEncryptionKeys;
-(BOOL)_purgeSecuredEncryptionKeysForAllPairedDevices;
-(void)gatherLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_suspendOTRSessionsWithProtectionClass:(unsigned)arg1 ;
-(id)_localDevicePrivateData;
-(BOOL)_isPairedToDevice:(id)arg1 ;
-(void)_updateActiveStateForAllPairedDevices:(BOOL)arg1 ;
-(void)_notifyDelegatesDevicePairedToDevice:(id)arg1 ;
-(void)_notifyDelegatesDeviceUnpairedFromDevice:(id)arg1 ;
-(BOOL)isMissingAnyPublicKeyForPairedDeviceWithCBUUID:(id)arg1 ;
-(id)_cbuuidsWithIsPairingValue:(BOOL)arg1 ;
-(void)_setPairedDeviceCapabilityFlags:(unsigned long long)arg1 ;
-(id)pairedDeviceBuildVersion;
-(id)pairedDeviceProductVersion;
-(id)pairedDeviceProductName;
-(NSData *)pairedDevicePushToken;
-(BOOL)addLocalPairedDevice:(id)arg1 ;
-(BOOL)removeLocalPairedDevice:(id)arg1 ;
-(id)cbuuidsOfPairingDevices;
-(id)cbuuidsOfPairedDevices;
-(BOOL)updatePairedDeviceBuildVersion:(id)arg1 productVersion:(id)arg2 productName:(id)arg3 pairingProtocolVersion:(unsigned)arg4 minCompatibilityVersion:(unsigned)arg5 maxCompatibilityVersion:(unsigned)arg6 serviceMinCompatibilityVersion:(unsigned short)arg7 capabilityFlags:(unsigned long long)arg8 deviceUniqueID:(id)arg9 ;
-(void)refreshPairedDeviceEncryptionKeys;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)pairedDevice;
-(BOOL)setPairedDeviceInfo:(id)arg1 ;
-(void)deactivatePairedDevices;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSDictionary *)localDevice;
-(BOOL)isPaired;
@end

