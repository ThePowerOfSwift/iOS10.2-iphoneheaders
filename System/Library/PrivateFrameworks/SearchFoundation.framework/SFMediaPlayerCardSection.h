/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFTitleCardSection.h>

@class NSArray;

@interface SFMediaPlayerCardSection : SFTitleCardSection {

	NSArray* _mediaItems;

}

@property (nonatomic,copy) NSArray * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
@end
