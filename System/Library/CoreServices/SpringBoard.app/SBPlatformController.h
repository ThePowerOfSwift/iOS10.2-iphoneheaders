/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject {

	long long _defaultIconInfoOnce;
	NSDictionary* _defaultStarkIconState;
	NSDictionary* _defaultIconState;
	NSOrderedSet* _defaultIconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;
	BOOL _starkDevice;
	BOOL _medusaDevice;
	BOOL _supportsAllMedusaFeatures;

}
+(id)sharedInstance;
-(BOOL)isMedusaDevice;
-(BOOL)isSingleCoreDevice;
-(BOOL)isDeveloperDevice;
-(id)defaultIconStateDisplayIdentifiers;
-(id)localizedPlatformName;
-(void)_loadDefaultIconInfoIfNecessary;
-(id)defaultIconState;
-(id)defaultStarkIconState;
-(BOOL)supportsOpenGLES2;
-(BOOL)isStarkDevice;
-(BOOL)supportsAllMedusaFeatures;
-(BOOL)isCarrierInstall;
-(BOOL)hasGasGauge;
-(id)uniqueDeviceIdentifier;
-(id)init;
-(id)hardwareModel;
-(BOOL)isInternalInstall;
-(id)systemBuildVersion;
-(id)productType;
-(id)deviceClass;
@end

