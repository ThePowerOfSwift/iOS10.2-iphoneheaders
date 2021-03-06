/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeLayout.h>
#import <iWorkImport/TSWPStyleProvider.h>

@class NSString;

@interface TSWPCommentLayout : TSWPShapeLayout <TSWPStyleProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsBoldItalicUnderlineShortcuts; 
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(Class)repClassOverride;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)shouldDisplayGuides;
-(BOOL)allowsConnections;
-(BOOL)supportsRotation;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(id)commentInfo;
-(id)fill;
-(CGSize)minimumSize;
-(id)styleProvider;
-(int)wrapType;
@end

