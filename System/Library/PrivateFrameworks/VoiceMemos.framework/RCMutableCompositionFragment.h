/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCCompositionFragment.h>

@class NSURL;

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (nonatomic,retain) NSURL * AVOutputURL; 
@property (assign,nonatomic) double contentDuration; 
@property (assign,nonatomic) SCD_Struct_RC4 timeRangeInContentToUse; 
@property (assign,nonatomic) SCD_Struct_RC4 timeRangeInComposition; 
-(void)intersectWithTimeRange:(SCD_Struct_RC4)arg1 ;
@end

