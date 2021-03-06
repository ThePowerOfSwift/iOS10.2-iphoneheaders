/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CDXRetrieveFirstIdentificationEntriesOperationExtensionsDataSource;
@class NSObject, NSArray, CXCallDirectoryStore, CXCallDirectorySanitizer;

@interface CDXRetrieveFirstIdentificationEntriesOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _phoneNumbers;
	id<CDXRetrieveFirstIdentificationEntriesOperationExtensionsDataSource> _extensionsDataSource;
	CXCallDirectoryStore* _store;
	CXCallDirectorySanitizer* _sanitizer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSArray * phoneNumbers;                                                                                     //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) id<CDXRetrieveFirstIdentificationEntriesOperationExtensionsDataSource> extensionsDataSource;              //@synthesize extensionsDataSource=_extensionsDataSource - In the implementation block
@property (nonatomic,retain) CXCallDirectoryStore * store;                                                                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) CXCallDirectorySanitizer * sanitizer;                                                                     //@synthesize sanitizer=_sanitizer - In the implementation block
-(id<CDXRetrieveFirstIdentificationEntriesOperationExtensionsDataSource>)extensionsDataSource;
-(void)setExtensionsDataSource:(id<CDXRetrieveFirstIdentificationEntriesOperationExtensionsDataSource>)arg1 ;
-(id)initWithPhoneNumbers:(id)arg1 store:(id)arg2 ;
-(id)initWithPhoneNumbers:(id)arg1 extensionsDataSource:(id)arg2 store:(id)arg3 ;
-(id)_canonicalizedPhoneNumbersToPhoneNumbers:(id)arg1 ;
-(id)_storeIdentificationEntryToIdentificationEntriesForDictionary:(id)arg1 ;
-(CXCallDirectorySanitizer *)sanitizer;
-(void)setSanitizer:(CXCallDirectorySanitizer *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)phoneNumbers;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(void)setStore:(CXCallDirectoryStore *)arg1 ;
-(CXCallDirectoryStore *)store;
@end

