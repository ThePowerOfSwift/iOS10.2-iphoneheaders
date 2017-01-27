/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessFriends.framework/FitnessFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HKHealthStore, FIUIModel, NSObject, NSCache, NSSet, _HKFitnessFriendsQuery, HKActivitySummaryQuery, FIUIWorkoutDataProvider, FIUIClientToken;

@interface FFFriendListManager : NSObject {

	HKHealthStore* _healthStore;
	FIUIModel* _model;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	NSCache* _displayContextToSortedSectionsCache;
	NSSet* _allFriends;
	_HKFitnessFriendsQuery* _friendsQuery;
	HKActivitySummaryQuery* _meQuery;
	FIUIWorkoutDataProvider* _workoutDataProvider;
	long long _meQueryRetries;
	long long _friendQueryRetries;
	FIUIClientToken* _modelQueryToken;
	BOOL _shouldGenerateDemoData;

}
-(id)init;
-(void)dealloc;
-(id)me;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(id)friendWithUUID:(id)arg1 ;
-(void)_queue_stopQueries;
-(void)_queue_handleMyWorkoutsUpdate;
-(void)_calendarDayChangedNotification:(id)arg1 ;
-(void)_startQueriesIfRequired;
-(BOOL)hasAnyFriendsSetup;
-(void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopQueries;
-(void)_createFakeFriends;
-(void)_startQueries;
-(void)_queue_startMeQuery;
-(void)_queue_startFriendsQuery;
-(id)_createSectionsForFriends:(id)arg1 withDisplayContext:(id)arg2 ;
-(id)_copyFriends;
-(BOOL)_isWheelchairUserDisplayModeValidForFriends:(id)arg1 filter:(long long)arg2 ;
-(id)_sectionForDataVisibilityConditionalUsingBlock:(/*^block*/id)arg1 ;
-(id)_friendWithUUID:(id)arg1 fromFriends:(id)arg2 ;
-(id)_queue_me;
-(id)sectionForFriendsInvitingMe;
-(long long)numberOfNewFriendsAllowed;
-(id)_filterFriends:(id)arg1 withWheelchairUseAtCacheIndex:(id)arg2 ;
-(void)_enumerateVisibleDaysForFriends:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_queue_updateWithNewData;
-(void)_queue_restartQueryAfterErrorCount:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_queue_handleActivitySummaryUpdate:(id)arg1 ;
-(void)_postFriendsListChangedNotification;
-(id)_datesToShowSnapshotsForFriend:(id)arg1 startingFromCurrentDateComponents:(id)arg2 ;
-(id)_sortFriends:(id)arg1 forDisplayMode:(long long)arg2 cacheIndex:(id)arg3 ;
-(id)initWithModel:(id)arg1 andWorkoutDataProvider:(id)arg2 ;
-(id)sectionsForDisplayContext:(id)arg1 ;
-(void)enumerateValidDisplayModesForFilter:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)sectionForFriendsInvitedByMe;
-(id)sectionForFriendsHidingDataFromMe;
-(id)sectionForFriendsMyDataIsHiddenFrom;
-(id)sectionForFriendsWithNoHiding;
-(id)allActiveFriendsAsRecipients;
-(id)allDestinationsForActiveOrPendingFriends;
-(unsigned long long)numberOfFriendsWithInvitesAwaitingResponseFromMe;
-(BOOL)hasReachedMaxNumberOfFriends;
-(id)_filterFriends:(id)arg1 withSnapshotDataAtCacheIndex:(id)arg2 ;
-(id)_filterFriends:(id)arg1 withActiveFriendshipAtEndOfDay:(id)arg2 ;
@end
