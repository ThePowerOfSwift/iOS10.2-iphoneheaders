/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWIrisMovieInfo;

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage {

	BWIrisMovieInfo* _irisMovieInfo;

}

@property (readonly) BWIrisMovieInfo * irisMovieInfo; 
+(id)newMessageWithIrisMovieInfo:(id)arg1 ;
-(void)dealloc;
-(BWIrisMovieInfo *)irisMovieInfo;
-(id)_initWithIrisMovieInfo:(id)arg1 ;
@end

