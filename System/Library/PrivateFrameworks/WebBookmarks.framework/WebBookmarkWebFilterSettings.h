/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject {

	WFUserSettings* _userSettings;

}

@property (nonatomic,readonly) WFUserSettings * userSettings; 
@property (getter=isWebFilterEnabled,nonatomic,readonly) BOOL webFilterEnabled; 
@property (getter=isWebFilterWhiteListOnlyModeEnabled,nonatomic,readonly) BOOL webFilterWhiteListOnlyModeEnabled; 
+(id)sharedWebFilterSettings;
-(id)init;
-(void)dealloc;
-(BOOL)isWebFilterEnabled;
-(BOOL)isWebFilterWhiteListOnlyModeEnabled;
-(WFUserSettings *)userSettings;
-(void)reloadSettings;
@end

