/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSettings/HOSSubtitleCell.h>

@class HMHome;

@interface HOSHomeCell : HOSSubtitleCell {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;              //@synthesize home=_home - In the implementation block
-(id)sharedText;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
