/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSFileWatcherFileHandleInfo : NSObject {

	int fileHandle;
	BOOL closed;

}

@property (readonly) BOOL isDirectory; 
+(id)openFileWithPath:(id)arg1 ;
-(BOOL)isDirectory;
-(BOOL)verifyAccessByProcessIdentifier:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)close;
@end

