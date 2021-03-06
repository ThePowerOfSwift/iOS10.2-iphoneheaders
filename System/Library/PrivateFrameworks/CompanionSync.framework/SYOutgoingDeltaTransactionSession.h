/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source, OS_os_activity, OS_dispatch_queue;
@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;

@interface SYOutgoingDeltaTransactionSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_os_activity> _sessionActivity;
	long long _state;
	NSObject*<OS_dispatch_queue> _changeFetcherQueue;
	_SYCountedSemaphore* _changeConcurrencySemaphore;
	NSObject*<OS_os_activity> _changeWaitActivity;
	_SYMessageTimerTable* _timers;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _cancelled;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned long long)protocolVersion;
-(BOOL)isResetSync;
-(void)cancelWithError:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(BOOL)isSending;
-(void)_fetchNextBatch;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_notifySessionComplete;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_waitForMessageWindow;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_setupChangeConcurrency;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)wasCancelled;
-(id)initWithService:(id)arg1 ;
@end

