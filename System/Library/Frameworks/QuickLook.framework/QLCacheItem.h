/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {

	NSMutableArray* _handlers;
	QLItem* _item;

}

@property (nonatomic,retain) QLItem * item;              //@synthesize item=_item - In the implementation block
-(QLItem *)item;
-(void)invalidate;
-(void)setItem:(QLItem *)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performHandlers;
@end
