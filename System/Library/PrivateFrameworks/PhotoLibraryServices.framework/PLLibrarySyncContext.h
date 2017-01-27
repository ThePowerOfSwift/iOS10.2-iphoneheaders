/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLSyncContext.h>

@class PLPhotoLibrary, NSString;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {

	PLPhotoLibrary* _photoLibrary;

}

@property (readonly) PLPhotoLibrary * photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL serverSupportsVision; 
-(void)dealloc;
-(BOOL)serverSupportsVision;
-(id)makeFace;
-(void)deleteFaces:(id)arg1 ;
-(id)personForUUID:(id)arg1 createIfMissing:(BOOL)arg2 ;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
@end
