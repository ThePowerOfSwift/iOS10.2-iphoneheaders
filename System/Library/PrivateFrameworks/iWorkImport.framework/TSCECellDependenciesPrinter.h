/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface TSCECellDependenciesPrinter : NSObject {

	NSString* _ownerName;
	unsigned long long _numDirtyCells;
	BOOL _showCleanCells;
	NSMutableArray* _dirtyCellDependencyRows;
	NSMutableArray* _cleanCellDependencyRows;

}

@property (nonatomic,retain) NSString * ownerName;                          //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,nonatomic) unsigned long long numDirtyCells;              //@synthesize numDirtyCells=_numDirtyCells - In the implementation block
@property (assign,nonatomic) BOOL showCleanCells;                           //@synthesize showCleanCells=_showCleanCells - In the implementation block
+(id)stringForOwnerKind:(int)arg1 ;
-(void)setNumDirtyCells:(unsigned long long)arg1 ;
-(void)addDependencyRow:(id)arg1 ;
-(void)setShowCleanCells:(BOOL)arg1 ;
-(BOOL)showCleanCells;
-(unsigned long long)numDirtyCells;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)ownerName;
-(void)setOwnerName:(NSString *)arg1 ;
@end
