/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface ExpiredDownloadRecoveryResponse : NSObject {

	long long _downloadIdentifier;
	NSError* _error;
	long long _result;

}

@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long result;                          //@synthesize result=_result - In the implementation block
-(void)setDownloadIdentifier:(long long)arg1 ;
-(long long)result;
-(long long)downloadIdentifier;
-(void)setResult:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
