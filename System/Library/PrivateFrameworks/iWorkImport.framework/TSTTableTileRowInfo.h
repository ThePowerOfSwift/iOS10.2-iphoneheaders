/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@interface TSTTableTileRowInfo : TSPContainedObject {

	CFDataRef mStorageBuffer;
	unsigned short mStorageOffsets[255];
	unsigned short mBufferSize;
	unsigned short mTileRowIndex;
	unsigned short mCellCount;
	unsigned char mMaxTileColumnIndex;
	BOOL mMaxTileColumnIndexValid;
	unsigned char mStorageVersion;

}

@property (assign,nonatomic) unsigned short tileRowIndex; 
@property (nonatomic,readonly) unsigned short cellCount; 
-(void)saveToArchive:(TileRowInfo*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TileRowInfo*)arg1 owner:(id)arg2 ;
-(void)i_upgradeWithDataStore:(id)arg1 ;
-(id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2 ;
-(id)p_debugDumpCompact;
-(void)enumerateStoragesInColumnRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned short)tileRowIndex;
-(void)setTileRowIndex:(unsigned short)arg1 ;
-(void)debugDump;
-(void)dealloc;
-(id)description;
-(void)validate;
-(unsigned short)cellCount;
@end

