/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSData;

@interface BRCChecksummingOutputStream : NSOutputStream {

	CC_SHA1state_st _ctx;
	unsigned char _sig[21];
	BOOL _isOpen;

}

@property (nonatomic,readonly) NSData * signature; 
+(id)checksummingOutputStreamWithTag:(unsigned char)arg1 ;
-(id)initWithTag:(unsigned char)arg1 ;
-(void)close;
-(void)open;
-(NSData *)signature;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end
