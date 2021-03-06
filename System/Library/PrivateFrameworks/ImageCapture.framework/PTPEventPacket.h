/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPEventPacket : NSObject {

	int _numParameters;
	unsigned short _eventCode;
	unsigned _transactionID;
	unsigned _parameters[3];

}
-(id)description;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned)parameter1;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 ;
-(unsigned)parameter2;
-(unsigned)parameter3;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 ;
-(void)setParameter1:(unsigned)arg1 ;
-(void)setParameter2:(unsigned)arg1 ;
-(void)setParameter3:(unsigned)arg1 ;
-(unsigned short)eventCode;
-(void)setEventCode:(unsigned short)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
@end

