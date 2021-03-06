/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NTKTimeOffsetManager : NSObject {

	double _timeOffset;

}

@property (assign,nonatomic) double timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(id)displayTimeForRealTime:(id)arg1 ;
-(id)faceDisplayTime;
-(void)_handleFaceDefaultsChanged;
-(void)_loadTimeOffset;
-(void)_handleFaceLibraryReloaded;
-(void)_updateTimeOffset:(BOOL)arg1 ;
@end

