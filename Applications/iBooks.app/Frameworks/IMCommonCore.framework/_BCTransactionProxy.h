/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/BCTransaction.h>

@class _BCTransaction, NSString;

@interface _BCTransactionProxy : NSObject <BCTransaction> {

	_BCTransaction* _transaction;

}

@property (nonatomic,readonly) _BCTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commit:(/*^block*/id)arg1 rollback:(/*^block*/id)arg2 ;
-(void)whenCancelled:(/*^block*/id)arg1 ;
-(void)whenCompleted:(/*^block*/id)arg1 ;
-(void)dealloc;
-(_BCTransaction *)transaction;
-(void)commit:(/*^block*/id)arg1 ;
-(void)finalize;
-(id)initWithTransaction:(id)arg1 ;
@end
