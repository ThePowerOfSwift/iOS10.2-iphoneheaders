/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DNormalDirectionMapper.h>

@interface TSCH3DDefaultNormalDirectionMapper : TSCH3DNormalDirectionMapper {

	tvec3<float> mNormalBias;

}
+(id)mapperWithNormalBias:(const tvec3<float>*)arg1 ;
-(id)initWithNormalBias:(const tvec3<float>*)arg1 ;
-(void)mapFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 normalMatrix:(const tmat3x3<float>*)arg3 numVertices:(long long)arg4 destination:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg5 ;
@end
