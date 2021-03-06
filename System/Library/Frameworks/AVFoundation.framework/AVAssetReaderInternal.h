/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSMutableArray, NSMutableSet, NSError, NSObject;

@interface AVAssetReaderInternal : NSObject {

	AVWeakReference* weakReference;
	AVAsset* asset;
	OpaqueFigAssetReaderRef figAssetReader;
	SCD_Struct_AV3 timeRange;
	BOOL readSingleSample;
	NSMutableArray* outputs;
	NSMutableSet* outputFinishedCallbackInvokers;
	long long status;
	NSError* error;
	NSError* errorThatOccurredBeforeStartReading;
	NSObject*<OS_dispatch_queue> statusReadWriteQueue;

}
@end

