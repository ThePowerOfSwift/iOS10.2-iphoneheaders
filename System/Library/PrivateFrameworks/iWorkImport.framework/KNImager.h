/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDImager.h>
#import <iWorkImport/TSDConnectedInfoReplacing.h>

@class KNAbstractSlide, KNBodyPlaceholderInfo, KNTitlePlaceholderInfo, NSString;

@interface KNImager : TSDImager <TSDConnectedInfoReplacing> {

	unsigned long long mSlideNumber;
	KNAbstractSlide* mSlide;
	BOOL mShouldShowInstructionalText;
	KNBodyPlaceholderInfo* mReplacementBodyPlaceholder;
	KNTitlePlaceholderInfo* mReplacementTitlePlaceholder;

}

@property (assign,nonatomic) unsigned long long slideNumber; 
@property (assign,nonatomic) KNAbstractSlide * slide; 
@property (nonatomic,retain) KNTitlePlaceholderInfo * replacementTitlePlaceholder; 
@property (nonatomic,retain) KNBodyPlaceholderInfo * replacementBodyPlaceholder; 
@property (assign,nonatomic) BOOL shouldShowInstructionalText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)shouldShowInstructionalText;
-(id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1 ;
-(KNTitlePlaceholderInfo *)replacementTitlePlaceholder;
-(KNBodyPlaceholderInfo *)replacementBodyPlaceholder;
-(unsigned long long)slideNumber;
-(void)setSlideNumber:(unsigned long long)arg1 ;
-(void)setShouldShowInstructionalText:(BOOL)arg1 ;
-(void)setReplacementBodyPlaceholder:(KNBodyPlaceholderInfo *)arg1 ;
-(void)setReplacementTitlePlaceholder:(KNTitlePlaceholderInfo *)arg1 ;
-(void)setSlide:(KNAbstractSlide *)arg1 ;
-(void)dealloc;
-(KNAbstractSlide *)slide;
@end

