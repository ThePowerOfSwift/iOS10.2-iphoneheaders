/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/PEXContactSuggester.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface PEXDiscoverySuggester : PEXContactSuggester {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _seenEvents;
	NSMutableSet* _seenNames;
	NSMutableSet* _seenRecipients;

}
-(id)init;
-(void)clearCaches;
-(void)discoveredEvents:(id)arg1 ;
-(void)discoveredRecipients:(id)arg1 ;
-(void)waitForDiscoveriesToProcess;
-(void)_discoveredEvent:(id)arg1 identifier:(id)arg2 ;
-(void)_addContacts:(id)arg1 ;
-(void)_discoveredRecipient:(id)arg1 ;
@end
