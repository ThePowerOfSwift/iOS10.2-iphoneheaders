/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, ISBiometricStore;

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation {

	/*^block*/id _resultBlock;
	long long _status;
	NSNumber* _accountIdentifier;
	NSString* _attestationString;
	ISBiometricStore* _biometricStore;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * attestationString;                     //@synthesize attestationString=_attestationString - In the implementation block
@property (nonatomic,retain) ISBiometricStore * biometricStore;              //@synthesize biometricStore=_biometricStore - In the implementation block
@property (copy) id resultBlock;                                             //@synthesize resultBlock=_resultBlock - In the implementation block
@property (readonly) long long status;                                       //@synthesize status=_status - In the implementation block
-(void)run;
-(long long)status;
-(ISBiometricStore *)biometricStore;
-(void)setBiometricStore:(ISBiometricStore *)arg1 ;
-(id)_newUpdateTouchIDSettingsOperation;
-(NSString *)attestationString;
-(void)setAttestationString:(NSString *)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
@end

