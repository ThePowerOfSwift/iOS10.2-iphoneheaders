/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, NSString, CKRecord;

@interface CKDRecordResponse : NSObject {

	CKRecordID* _recordID;
	NSString* _etag;
	CKRecord* _record;

}

@property (nonatomic,retain) CKRecordID * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                    //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) CKRecord * record;                  //@synthesize record=_record - In the implementation block
-(id)description;
-(CKRecordID *)recordID;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(CKRecord *)record;
-(id)CKPropertiesDescription;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
@end

