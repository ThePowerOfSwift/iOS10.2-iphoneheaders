/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray, NSMutableArray;

@interface BCIngestSidecarPlistProducer : BCPlistProducer {

	NSArray* _sidecarDeletes;
	NSMutableArray* _filterMatches;

}

@property (nonatomic,readonly) NSArray * filterMatches;              //@synthesize filterMatches=_filterMatches - In the implementation block
-(id)produceData;
-(NSArray *)filterMatches;
-(id)initWithPath:(id)arg1 sidecarPath:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldRetry;
@end

