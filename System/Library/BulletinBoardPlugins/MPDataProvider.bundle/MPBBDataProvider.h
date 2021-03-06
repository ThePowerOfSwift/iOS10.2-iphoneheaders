/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/BulletinBoardPlugins/MPDataProvider.bundle/MPDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>
#import <libobjc.A.dylib/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSDate, MPBBSortMapping, CHManager, NSObject, TUCallProviderManager, CNContactStore, NSMutableSet, CNContactFormatter, VMVoicemailManager, NSMutableArray, NSString;

@interface MPBBDataProvider : NSObject <TUCallProviderManagerDelegate, BBDataProvider> {

	BOOL _hasVisualVoicemail;
	int _nonVisualVoicemailCount;
	unsigned long long _latestLockscreenVoicemailRowID;
	NSDate* _nonVisualVoicemailBulletinDate;
	MPBBSortMapping* _sortMapping;
	CHManager* _recentsManager;
	NSObject*<OS_dispatch_queue> _queue;
	TUCallProviderManager* _callProviderManager;
	CNContactStore* _contactStore;
	NSMutableSet* _missedCallBulletinIdentifiers;
	CNContactFormatter* _contactFormatter;
	VMVoicemailManager* _voicemailManager;
	NSMutableSet* _identifiersOfVoicemailWaitingForData;
	NSMutableArray* _voicemailWaitingForPost;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter;                            //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) VMVoicemailManager * voicemailManager;                            //@synthesize voicemailManager=_voicemailManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfVoicemailWaitingForData;              //@synthesize identifiersOfVoicemailWaitingForData=_identifiersOfVoicemailWaitingForData - In the implementation block
@property (nonatomic,retain) NSMutableArray * voicemailWaitingForPost;                         //@synthesize voicemailWaitingForPost=_voicemailWaitingForPost - In the implementation block
@property (nonatomic,readonly) TUCallProviderManager * callProviderManager;                    //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * missedCallBulletinIdentifiers;                     //@synthesize missedCallBulletinIdentifiers=_missedCallBulletinIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)recentsManagerServiceProviders;
+(id)unreadRecentCallsMatchingAnyMediaTypes:(id)arg1 ;
+(id)missedUnreadRecentCallsMatchingAnyMediaTypes:(id)arg1 ;
+(id)unreadRecentCallsMatchingAnyMediaTypes:(id)arg1 greaterThanDate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactStore *)contactStore;
-(TUCallProviderManager *)callProviderManager;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(BOOL)supportsVoicemail;
-(void)handleContactStoreDidChangeNotification:(id)arg1 ;
-(VMVoicemailManager *)voicemailManager;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)sortMappingDomain;
-(unsigned long long)_identifierOfMostRecentVoicemail;
-(void)_handleVoicemailStoreChangedNotification:(id)arg1 ;
-(void)_updateBadgeCount;
-(void)_subscriptionOrOnlineStateChangedNotification:(id)arg1 ;
-(void)_updateVisualVoicemailState;
-(BOOL)supportsMissedCalls;
-(void)_handleCallHistoryDatabaseChangedNotification:(id)arg1 ;
-(void)_handleCurrentLocaleDidChangeNotification:(id)arg1 ;
-(id)recentCallMediaTypes;
-(id)initWithContactStore:(id)arg1 voicemailManager:(id)arg2 recentCallsPredicate:(id)arg3 serialQueue:(id)arg4 ;
-(void)_onQueue_updateBadgeCount;
-(id)contactForDestinationID:(id)arg1 ;
-(id)getFormattedCallerString:(id)arg1 isoCountryCode:(id)arg2 ;
-(id)_recordIdForVoicemailIdentifier:(unsigned long long)arg1 ;
-(id)_onQueue_bulletinRequestForVoicemail:(id)arg1 ;
-(void)_updateNonVisualVoicemailBulletinDate;
-(id)_voicemailBulletinWithCount:(unsigned long long)arg1 ;
-(id)callProviders;
-(id)contactForRecentCall:(id)arg1 ;
-(unsigned long long)_voicemailIdentifierForRecordId:(id)arg1 ;
-(NSMutableSet *)missedCallBulletinIdentifiers;
-(id)_onQueue_bulletinRequestForMissedCall:(id)arg1 ;
-(void)setMissedCallBulletinIdentifiers:(NSMutableSet *)arg1 ;
-(void)_setHasVisualVoicemail:(BOOL)arg1 ;
-(void)_updateVisualVoicemailStateLocked;
-(BOOL)_validateClearedInfo:(id)arg1 didMigrate:(BOOL*)arg2 ;
-(id)_interruptingVoicemailBulletinWithCount:(unsigned long long)arg1 ;
-(NSMutableSet *)identifiersOfVoicemailWaitingForData;
-(void)_scheduleVoicemailFlushIfNecessary;
-(void)_queueNotificationsForVoicemail:(id)arg1 ;
-(void)_flushVoicemailWaitingForData;
-(void)_postNotificationsForQueuedVoicemail;
-(NSMutableArray *)voicemailWaitingForPost;
-(void)_scheduleVoicemailPostIfNecessary;
-(id)_identifiersOfVoicemailWaitingForData;
-(BOOL)_shouldAddBulletinWithVoicemail:(id)arg1 ;
-(id)_onQueue_interruptingBulletinRequestForVoicemail:(id)arg1 ;
-(id)contactsForDestinationID:(id)arg1 ;
-(void)_handleRecentCallsViewed;
-(void)_handleVoicemailAvailableNotification:(id)arg1 ;
-(void)_handleLocaleChanged:(id)arg1 ;
-(void)setIdentifiersOfVoicemailWaitingForData:(NSMutableSet *)arg1 ;
-(void)setVoicemailWaitingForPost:(NSMutableArray *)arg1 ;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)primaryAttachmentDataForRecordID:(id)arg1 ;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2 ;
@end

