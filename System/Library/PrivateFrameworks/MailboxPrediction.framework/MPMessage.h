/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailboxPrediction/MailboxPrediction-Structs.h>
#import <libobjc.A.dylib/MPMessage.h>

@protocol MPMessage <NSObject,NSCopying>
@required
-(id)subject;
-(id)mailbox;
-(id)dateSent;
-(id)persistentID;
-(long long)conversationID;
-(id)senderPerson;
-(id)toPeople;
-(id)ccPeople;
-(BOOL)isPriority;
-(id)listID;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPMailbox, MPPerson;
@class NSString, NSDate, NSArray;

@interface MPMessage : NSObject <MPMessage, NSSecureCoding> {

	BOOL _isPriority;
	id<MPMailbox> _mailbox;
	NSString* _subject;
	NSDate* _dateSent;
	NSString* _persistentID;
	long long _conversationID;
	NSString* _listID;
	id<MPPerson> _senderPerson;
	NSArray* _toPeople;
	NSArray* _ccPeople;

}

@property (nonatomic,retain) id<MPMailbox> mailbox;                  //@synthesize mailbox=_mailbox - In the implementation block
@property (assign,nonatomic) BOOL isPriority;                        //@synthesize isPriority=_isPriority - In the implementation block
@property (nonatomic,retain) NSString * subject;                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                      //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,retain) NSString * persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long conversationID;               //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) NSString * listID;                      //@synthesize listID=_listID - In the implementation block
@property (nonatomic,retain) id<MPPerson> senderPerson;              //@synthesize senderPerson=_senderPerson - In the implementation block
@property (nonatomic,retain) NSArray * toPeople;                     //@synthesize toPeople=_toPeople - In the implementation block
@property (nonatomic,retain) NSArray * ccPeople;                     //@synthesize ccPeople=_ccPeople - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageWithMailbox:(id)arg1 isPriority:(BOOL)arg2 subject:(id)arg3 dateSent:(id)arg4 persistentID:(id)arg5 conversationID:(long long)arg6 listID:(id)arg7 senderPerson:(id)arg8 toPeople:(id)arg9 ccPeople:(id)arg10 ;
+(id)messageWithArray:(id)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setMailbox:(id<MPMailbox>)arg1 ;
-(id<MPMailbox>)mailbox;
-(NSDate *)dateSent;
-(NSString *)persistentID;
-(void)setDateSent:(NSDate *)arg1 ;
-(long long)conversationID;
-(void)setConversationID:(long long)arg1 ;
-(id<MPPerson>)senderPerson;
-(NSArray *)toPeople;
-(NSArray *)ccPeople;
-(id)initWithMailbox:(id)arg1 isPriority:(BOOL)arg2 subject:(id)arg3 dateSent:(id)arg4 persistentID:(id)arg5 conversationID:(long long)arg6 listID:(id)arg7 senderPerson:(id)arg8 toPeople:(id)arg9 ccPeople:(id)arg10 ;
-(void)setIsPriority:(BOOL)arg1 ;
-(void)setListID:(NSString *)arg1 ;
-(void)setSenderPerson:(id<MPPerson>)arg1 ;
-(void)setToPeople:(NSArray *)arg1 ;
-(void)setCcPeople:(NSArray *)arg1 ;
-(id)initWithMessageArray:(id)arg1 ;
-(id)personizeRecipients:(id)arg1 ;
-(BOOL)isPriority;
-(NSString *)listID;
@end
