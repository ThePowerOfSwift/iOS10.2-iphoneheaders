/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	int _lock;
	NSMutableSet* _cache;

}
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clear;
@end

