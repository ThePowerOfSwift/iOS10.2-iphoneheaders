/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)isValidSignature:(id)arg1 ;
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(char*)_newSignatureByFinishingGenerator;
-(void*)generator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)dataByFinishingSignature;
-(void)updateWithData:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(void)setGenerator:(void*)arg1 ;
@end
