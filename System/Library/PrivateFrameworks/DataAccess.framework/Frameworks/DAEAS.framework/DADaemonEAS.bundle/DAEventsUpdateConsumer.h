/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAEventsUpdateConsumer <DAMessageSendConsumer,DAActionConsumer>
@required
-(void)syncResultForEventsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(BOOL)arg7 moreAvailable:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11;
-(void)finishWithInvitationBatch:(id)arg1;
-(void)meetingResponseFinishedWithStatus:(long long)arg1 error:(id)arg2 successfulResponses:(id)arg3 failedResponses:(id)arg4;

@end

