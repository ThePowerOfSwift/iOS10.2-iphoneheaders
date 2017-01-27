/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject {

	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedCache;
+(id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 ;
-(id)init;
-(NSMutableDictionary *)imageCache;
-(id)imageNamed:(id)arg1 tintColor:(id)arg2 ;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end
