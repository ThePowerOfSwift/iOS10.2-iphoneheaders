/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSLocale;

@interface TSCENamedReferenceTrie : NSObject {

	TSCENamedReferenceTrieNode* mRoot;
	NSLocale* mLocale;

}
-(id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(CFUUIDRef)arg2 ;
-(BOOL)replaceName:(id)arg1 withName:(id)arg2 inTable:(CFUUIDRef)arg3 trackedReference:(id)arg4 ;
-(BOOL)insertName:(id)arg1 inTable:(CFUUIDRef)arg2 trackedReference:(id)arg3 ;
-(void)deleteName:(id)arg1 inTable:(CFUUIDRef)arg2 trackedReference:(id)arg3 ;
-(id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(CFUUIDRef)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithLocale:(id)arg1 ;
@end
