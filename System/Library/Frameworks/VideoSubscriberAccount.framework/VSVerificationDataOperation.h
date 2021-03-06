/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSFailable, AKAnisetteProvisioningController;

@interface VSVerificationDataOperation : VSAsyncOperation {

	VSFailable* _result;
	AKAnisetteProvisioningController* _provisioningController;

}

@property (nonatomic,retain) VSFailable * result;                                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) AKAnisetteProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
-(void)_finishWithData:(id)arg1 ;
-(id)init;
-(VSFailable *)result;
-(void)setResult:(VSFailable *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)executionDidBegin;
-(void)_finishWithResult:(int)arg1 bytes:(char*)arg2 length:(unsigned)arg3 ;
-(void)setProvisioningController:(AKAnisetteProvisioningController *)arg1 ;
-(AKAnisetteProvisioningController *)provisioningController;
@end

