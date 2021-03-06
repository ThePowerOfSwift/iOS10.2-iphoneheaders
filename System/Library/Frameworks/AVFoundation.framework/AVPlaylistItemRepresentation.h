/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVPlaylistItemRepresentationInternal, AVURLAsset, NSDictionary, NSString;

@interface AVPlaylistItemRepresentation : NSObject <NSCopying, NSMutableCopying> {

	AVPlaylistItemRepresentationInternal* _ivars;

}

@property (nonatomic,readonly) AVURLAsset * asset; 
@property (nonatomic,readonly) NSDictionary * audibleDRMInfo; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) NSDictionary * gaplessInfo; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(AVURLAsset *)asset;
-(NSDictionary *)gaplessInfo;
-(NSDictionary *)audibleDRMInfo;
-(id)initWithURLAsset:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)finalize;
@end

