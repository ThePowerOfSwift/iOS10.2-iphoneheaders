/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosExtras/VideosExtras-Structs.h>
@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridSectionHeaderStyle : NSObject {

	NSString* _textStyle;
	NSDictionary* _defaultFontAttributes;
	UIColor* _textColor;
	double _textBaselineHeight;
	double _textBaselineDescender;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) NSString * textStyle;                              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultFontAttributes;              //@synthesize defaultFontAttributes=_defaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) double textBaselineHeight;                         //@synthesize textBaselineHeight=_textBaselineHeight - In the implementation block
@property (assign,nonatomic) double textBaselineDescender;                      //@synthesize textBaselineDescender=_textBaselineDescender - In the implementation block
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(NSDictionary *)defaultFontAttributes;
-(void)setDefaultFontAttributes:(NSDictionary *)arg1 ;
-(double)textBaselineHeight;
-(void)setTextBaselineHeight:(double)arg1 ;
-(double)textBaselineDescender;
-(void)setTextBaselineDescender:(double)arg1 ;
@end

