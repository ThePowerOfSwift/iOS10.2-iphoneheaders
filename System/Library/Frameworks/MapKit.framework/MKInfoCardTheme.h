/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, UIFont;


@protocol MKInfoCardTheme <NSObject>
@property (nonatomic,readonly) unsigned long long themeType; 
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) BOOL isVibrantTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * highlightedRowColor; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * titleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@required
-(UIColor *)backgroundColor;
-(UIColor *)tintColor;
-(UIColor *)textColor;
-(UIColor *)lightTextColor;
-(UIFont *)titleFont;
-(id)iconFontToMatch:(id)arg1;
-(unsigned long long)themeType;
-(BOOL)isDarkTheme;
-(BOOL)isVibrantTheme;
-(UIColor *)separatorLineColor;
-(UIColor *)rowColor;
-(UIColor *)selectedRowColor;
-(UIColor *)highlightedRowColor;
-(UIFont *)largeTitleFont;
-(UIFont *)bodyFont;
-(UIFont *)boldBodyFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)sectionHeaderFont;
-(UIFont *)attributionFont;
-(UIFont *)smallAttributionFont;

@end
