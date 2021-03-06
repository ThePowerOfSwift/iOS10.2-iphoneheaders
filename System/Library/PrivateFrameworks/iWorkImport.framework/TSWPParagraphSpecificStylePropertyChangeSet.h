/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSSStylePropertyChangeSet.h>

@class TSSSpecInteger, TSSSpecString, TSSSpecDouble, TSSSpecColor, TSWPSpecParagraphStyle, TSSSpecBool, TSWPSpecListStyle, TSWPSpecLineSpacing, TSWPSpecRuleOffset, TSDSpecStroke, TSWPSpecTabs;

@interface TSWPParagraphSpecificStylePropertyChangeSet : TSSStylePropertyChangeSet {

	TSSSpecInteger* _alignment;
	TSSSpecString* _decimalTab;
	TSSSpecDouble* _defaultTabStops;
	TSSSpecColor* _fill;
	TSSSpecDouble* _firstLineIndent;
	TSWPSpecParagraphStyle* _followingParagraphStyle;
	TSSSpecBool* _hyphenate;
	TSWPSpecListStyle* _initialListStyle;
	TSSSpecBool* _keepLinesTogether;
	TSSSpecBool* _keepWithNext;
	TSSSpecDouble* _leftIndent;
	TSWPSpecLineSpacing* _lineSpacing;
	TSSSpecInteger* _outlineLevel;
	TSSSpecInteger* _outlineStyleType;
	TSSSpecBool* _pageBreakBefore;
	TSSSpecInteger* _paragraphBorders;
	TSWPSpecRuleOffset* _paragraphRuleOffset;
	TSSSpecDouble* _paragraphRuleWidth;
	TSSSpecDouble* _rightIndent;
	TSSSpecDouble* _spaceAfter;
	TSSSpecDouble* _spaceBefore;
	TSDSpecStroke* _stroke;
	TSWPSpecTabs* _tabs;
	TSSSpecInteger* _widowControl;
	BOOL _definedAlignment;
	BOOL _definedDecimalTab;
	BOOL _definedDefaultTabStops;
	BOOL _definedFill;
	BOOL _definedFirstLineIndent;
	BOOL _definedFollowingParagraphStyle;
	BOOL _definedHyphenate;
	BOOL _definedInitialListStyle;
	BOOL _definedKeepLinesTogether;
	BOOL _definedKeepWithNext;
	BOOL _definedLeftIndent;
	BOOL _definedLineSpacing;
	BOOL _definedOutlineLevel;
	BOOL _definedOutlineStyleType;
	BOOL _definedPageBreakBefore;
	BOOL _definedParagraphBorders;
	BOOL _definedParagraphRuleOffset;
	BOOL _definedParagraphRuleWidth;
	BOOL _definedRightIndent;
	BOOL _definedSpaceAfter;
	BOOL _definedSpaceBefore;
	BOOL _definedStroke;
	BOOL _definedTabs;
	BOOL _definedWidowControl;

}
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
@end

