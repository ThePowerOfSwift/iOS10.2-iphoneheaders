/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABAssistantSyncHandler.h>

@protocol ABAssistantSyncHandler <AFSyncHandler,NSObject>
@property (assign,nonatomic) void* addressBook; 
@required
-(void)setAddressBook:(void*)arg1;
-(void*)addressBook;

@end


@class ABAssistantSyncWorker, NSString;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler> {

	void* _addressBook;
	ABAssistantSyncWorker* _syncWorker;
	NSString* _syncKey;

}

@property (nonatomic,retain) ABAssistantSyncWorker * syncWorker;              //@synthesize syncWorker=_syncWorker - In the implementation block
@property (nonatomic,retain) NSString * syncKey;                              //@synthesize syncKey=_syncKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(id)syncSnapshotForKey:(id)arg1 ;
-(void)setSyncWorker:(ABAssistantSyncWorker *)arg1 ;
-(ABAssistantSyncWorker *)syncWorker;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)dealloc;
-(NSString *)syncKey;
-(void)setSyncKey:(NSString *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end

