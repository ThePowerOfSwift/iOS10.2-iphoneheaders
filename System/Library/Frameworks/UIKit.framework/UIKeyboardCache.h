/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class TIImageCacheClient, NSSet;

@interface UIKeyboardCache : NSObject {

	TIImageCacheClient* _store;
	NSSet* _layouts;

}
+(BOOL)enabled;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)commitTransaction;
-(void)clearNonPersistentCache;
-(void)updateCacheForInputModes:(id)arg1 ;
-(id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3 ;
-(CGImageRef)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3 ;
-(CGImageRef)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 ;
-(void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)uniqueLayoutsFromInputModes:(id)arg1 ;
@end
