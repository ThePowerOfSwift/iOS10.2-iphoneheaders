/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CannedVideoFrameFeeder <NSObject>
@required
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
-(int)setWidth:(int)arg1 height:(int)arg2;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 andStoreTo:(_CVBuffer*)arg2;

@end
