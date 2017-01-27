/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSFailable, VSDeveloperServiceConnection;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSFailable* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSFailable * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(VSDeveloperServiceConnection *)connection;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(VSFailable *)result;
-(void)setResult:(VSFailable *)arg1 ;
-(void)executionDidBegin;
@end
