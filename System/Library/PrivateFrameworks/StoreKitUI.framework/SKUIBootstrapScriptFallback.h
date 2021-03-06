/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppScriptFallbackHandler.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSObject;

@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler> {

	NSURL* _cacheFolder;
	NSString* _cacheFilename;
	double _maximumAge;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cachedFileLocation; 
@property (nonatomic,readonly) long long _unsynchronizedState; 
@property (nonatomic,readonly) NSURL * cacheFolder;                             //@synthesize cacheFolder=_cacheFolder - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheFilename;                   //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (assign) double maximumAge;                                           //@synthesize maximumAge=_maximumAge - In the implementation block
@property (readonly) long long state; 
@property (readonly) BOOL isBagAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheFilenameForStoreFrontIdentifier:(id)arg1 ;
+(id)defaultCacheFolder;
-(id)init;
-(long long)state;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithFilename:(id)arg1 ;
-(void)setMaximumAge:(double)arg1 ;
-(void)_createCacheDirectoriesIfNeeded;
-(id)initWithCacheFolder:(id)arg1 filename:(id)arg2 ;
-(long long)_unsynchronizedState;
-(NSURL *)cacheFolder;
-(NSString *)cacheFilename;
-(BOOL)isBagAvailable;
-(NSURL *)cachedFileLocation;
-(void)_logError:(id)arg1 forOperation:(id)arg2 ;
-(double)maximumAge;
-(BOOL)canFallbackForError:(id)arg1 ;
-(id)retrieveScript:(id*)arg1 ;
-(void)scriptEvaluated:(id)arg1 ;
-(void)_runWhenBackgroundWorkFinished:(/*^block*/id)arg1 ;
-(BOOL)_setCacheAge:(id)arg1 error:(id*)arg2 ;
@end

