/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask {

	CPLProxyLibraryManager* _proxyLibraryManager;

}

@property (nonatomic,retain) CPLProxyLibraryManager * proxyLibraryManager;              //@synthesize proxyLibraryManager=_proxyLibraryManager - In the implementation block
-(void)setProxyLibraryManager:(CPLProxyLibraryManager *)arg1 ;
-(CPLProxyLibraryManager *)proxyLibraryManager;
-(void)cancelTask;
@end

