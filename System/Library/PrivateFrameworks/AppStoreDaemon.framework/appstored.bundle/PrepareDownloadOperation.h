/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>

@class NSString, SSMemoryEntity, NSArray, SSDownloadPolicy;

@interface PrepareDownloadOperation : ISOperation <ISURLOperationDelegate> {

	NSString* _bundleID;
	SSMemoryEntity* _download;
	BOOL _ignoresDownloadHandler;
	NSArray* _mediaAssets;
	/*^block*/id _outputBlock;
	SSDownloadPolicy* _policy;

}

@property (nonatomic,readonly) long long downloadID; 
@property (assign) BOOL ignoresDownloadHandler; 
@property (copy) id outputBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateOperationsWithDownloadQuery:(id)arg1 session:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(id)_mediaAssetsForDownloadIdentifier:(long long)arg1 session:(id)arg2 ;
+(BOOL)_isDTServiceHubIssuedRequest:(id)arg1 ;
+(id)_duetTicketWithBundleIdentifier:(id)arg1 ;
+(long long)_URLSessionTaskPriorityForDownload:(id)arg1 ;
+(long long)_URLSessionTaskPriorityForDownloadPriority:(long long)arg1 ;
-(id)_initWithDownload:(id)arg1 mediaAssets:(id)arg2 policy:(id)arg3 ;
-(id)_bestMediaAsset;
-(BOOL)_shouldFailForFinishedDownload;
-(BOOL)_shouldCancelAsDuplicate;
-(BOOL)_shouldCancelAutomaticDownload;
-(long long)_loadSizeIfNecessaryForAsset:(id)arg1 ;
-(id)_newURLRequestWithAsset:(id)arg1 ;
-(id)_newDataConsumerWithAsset:(id)arg1 destinationPath:(id)arg2 ;
-(BOOL)_shouldFailForDiskSpaceWithAsset:(id)arg1 dataConsumer:(id)arg2 ;
-(BOOL)_requiresPoweredPluggedIn;
-(double)_transferProgressFractionWithAsset:(id)arg1 ;
-(id)_downloadKeyCookieWithAsset:(id)arg1 ;
-(BOOL)_sendsStoreHeadersForAsset:(id)arg1 ;
-(long long)_assetSizeFromURLResponse:(id)arg1 ;
-(BOOL)_usesStreamingZipDataConsumerForAsset:(id)arg1 ;
-(BOOL)_allowsCellularAccessForAsset:(id)arg1 ;
-(BOOL)_itemIsInSoftwareLibrary;
-(BOOL)_assetNeedsDecryption:(id)arg1 ;
-(BOOL)ignoresDownloadHandler;
-(void)setIgnoresDownloadHandler:(BOOL)arg1 ;
-(void)run;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(long long)operation:(id)arg1 dispositionForAuthenticationChallenge:(id)arg2 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(long long)downloadID;
-(id)_clientIdentifier;
@end

