/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudDriveSettings/iCloudDriveSettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@protocol OS_dispatch_source;
@class NSObject, UIProgressView, UILabel;

@interface CDSiCloudDriveProgressFooterView : UIView <PSHeaderFooterView> {

	id _globalProgressSubscriber;
	id _lastSyncDateSubscriber;
	BOOL _syncing;
	BOOL _lastSyncAutoUpdate;
	NSObject*<OS_dispatch_source> _lastSyncSource;
	UIProgressView* _progressBar;
	UILabel* _statusLabel;

}

@property (retain) id globalProgressSubscriber;                           //@synthesize globalProgressSubscriber=_globalProgressSubscriber - In the implementation block
@property (retain) id lastSyncDateSubscriber;                             //@synthesize lastSyncDateSubscriber=_lastSyncDateSubscriber - In the implementation block
@property (getter=isSyncing) BOOL syncing;                                //@synthesize syncing=_syncing - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                     //@synthesize statusLabel=_statusLabel - In the implementation block
-(id)lastSyncDateSubscriber;
-(void)setLastSyncDateSubscriber:(id)arg1 ;
-(id)globalProgressSubscriber;
-(void)setGlobalProgressSubscriber:(id)arg1 ;
-(void)_updateLocalizedLastSync;
-(void)_updateLocalizedLastSyncAndScheduleAutoUpdateWithDate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isSyncing;
-(UIProgressView *)progressBar;
-(UILabel *)statusLabel;
-(void)setSyncing:(BOOL)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end
