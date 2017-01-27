/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVRunLoopCondition;

@interface AVAssetReaderOutputInternal : NSObject {

	AVWeakReference* weakReference;
	BOOL alwaysCopiesSampleData;
	BOOL supportsRandomAccess;
	NSArray* currentTimeRanges;
	AVWeakReference* weakReferenceToAssetReader;
	OpaqueFigAssetReaderRef figAssetReader;
	int extractionID;
	AVRunLoopCondition* sampleBufferAvailabilityCondition;
	BOOL currentConfigurationIsFinal;
	BOOL extractionCompleteForCurrentConfiguration;
	int finished;

}
@end
