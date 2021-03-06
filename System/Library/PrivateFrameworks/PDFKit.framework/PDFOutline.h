/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFOutlinePrivate, PDFDocument, NSString, PDFDestination, PDFAction;

@interface PDFOutline : NSObject {

	PDFOutlinePrivate* _private;

}

@property (nonatomic,readonly) PDFDocument * document; 
@property (nonatomic,readonly) PDFOutline * parent; 
@property (nonatomic,readonly) unsigned long long numberOfChildren; 
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) BOOL isOpen; 
@property (nonatomic,retain) PDFDestination * destination; 
@property (nonatomic,retain) PDFAction * action; 
-(id)init;
-(id)next;
-(id)previous;
-(void)dealloc;
-(PDFAction *)action;
-(void)setAction:(PDFAction *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)lastChild;
-(id)firstChild;
-(unsigned long long)index;
-(PDFDestination *)destination;
-(void)setDestination:(PDFDestination *)arg1 ;
-(void)commonInit;
-(PDFDocument *)document;
-(void)setDocument:(PDFDocument *)arg1 ;
-(unsigned long long)numberOfChildren;
-(PDFOutline *)parent;
-(void)setParent:(PDFOutline *)arg1 ;
-(BOOL)isOpen;
-(void)setIsOpen:(BOOL)arg1 ;
-(void)removeChildAtIndex:(unsigned long long)arg1 ;
-(void)removeFromParent;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addActionToDictionaryRef:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(BOOL)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)invalidateDictionaryRef;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 parent:(id)arg3 ;
-(void)lazilyLoadChildren;
-(id)childArray;
-(BOOL)childDictionaryReferencesParent:(CGPDFDictionaryRef)arg1 ;
-(int)openDescendantCount;
-(CGPDFDictionaryRef)srcDictionaryRef;
@end

