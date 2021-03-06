/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCWidgetProviding.h>

@interface UpNextWidget.MainViewController : UIViewController <NCWidgetProviding> {

	 model;
	 mainView;
	 blankViewController;
	 detailedViewController;
	 stackedCellViewController;
	 contentUnavailableViewController;
	 currentViewController;
	 firstLoadStopwatch;
	 lastLargestDisplayModeIsCompactKey;
	 lastActiveDisplayMode;
	 contentSizeCategoryDidChangeObservationToken;
	 timeListener.storage;
	 lastKnownStateKey;
	 lastKnownModelStateKey;
	 lastKnownHypothesisStateKey;
	 lastKnownMapSnapshotStateKey;
	 lastKnownCoordinateLatitudeStateKey;
	 lastKnownCoordinateLongitudeStateKey;

}
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(void)widgetPerformUpdate:(/*^block*/id)arg1 ;
@end

