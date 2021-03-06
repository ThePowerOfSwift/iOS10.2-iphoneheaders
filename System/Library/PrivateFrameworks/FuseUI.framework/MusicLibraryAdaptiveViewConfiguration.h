/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicLibraryViewConfiguration;

@interface MusicLibraryAdaptiveViewConfiguration : MusicLibraryViewConfiguration {

	MusicLibraryViewConfiguration* _compactWidthConfiguration;
	MusicLibraryViewConfiguration* _regularWidthConfiguration;

}

@property (nonatomic,readonly) MusicLibraryViewConfiguration * compactWidthConfiguration; 
@property (nonatomic,readonly) MusicLibraryViewConfiguration * regularWidthConfiguration; 
-(id)init;
-(MusicLibraryViewConfiguration *)compactWidthConfiguration;
-(MusicLibraryViewConfiguration *)regularWidthConfiguration;
-(void)enumerateContentViewConfigurationsUsingBlock:(/*^block*/id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end

