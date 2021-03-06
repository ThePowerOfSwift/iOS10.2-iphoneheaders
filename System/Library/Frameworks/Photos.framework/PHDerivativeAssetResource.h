/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetResource.h>

@class PLImageFormat;

@interface PHDerivativeAssetResource : PHAssetResource {

	BOOL _tableFormat;
	PLImageFormat* _format;
	unsigned long long _cplResourceType;

}

@property (nonatomic,retain) PLImageFormat * format;                                       //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long cplResourceType;                         //@synthesize cplResourceType=_cplResourceType - In the implementation block
@property (getter=isThumbnail,nonatomic,readonly) BOOL thumbnail; 
@property (getter=isTableFormat,nonatomic,readonly) BOOL tableFormat;                      //@synthesize tableFormat=_tableFormat - In the implementation block
@property (getter=isCroppedToSquare,nonatomic,readonly) BOOL croppedToSquare; 
@property (getter=isVideo,nonatomic,readonly) BOOL video; 
+(id)thumbnailDerivativeAssetResourcesForAsset:(id)arg1 ;
+(id)CPLDerivativeAssetResourcesForAsset:(id)arg1 managedAsset:(id)arg2 ;
+(id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2 ;
+(id)tableThumbnailDataForAsset:(id)arg1 resource:(id)arg2 dataSpecification:(id*)arg3 ;
-(id)description;
-(PLImageFormat *)format;
-(BOOL)isVideo;
-(long long)analysisType;
-(id)initWithThumbnailFormat:(id)arg1 forAsset:(id)arg2 ;
-(id)initWithCloudResource:(id)arg1 forAsset:(id)arg2 ;
-(id)initWithQualityClass:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)isTableThumbnail;
-(BOOL)isCroppedToSquare;
-(BOOL)isTableFormat;
-(void)setFormat:(PLImageFormat *)arg1 ;
-(BOOL)isThumbnail;
-(unsigned long long)cplResourceType;
@end

