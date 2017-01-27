/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSSelectorList, RWIProtocolCSSStyle, RWIProtocolCSSRuleId, NSString, NSArray;

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSSelectorList * selectorList; 
@property (assign,nonatomic) int sourceLine; 
@property (assign,nonatomic) long long origin; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
@property (nonatomic,retain) RWIProtocolCSSRuleId * ruleId; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (nonatomic,copy) NSArray * media; 
-(RWIProtocolCSSStyle *)style;
-(long long)origin;
-(void)setOrigin:(long long)arg1 ;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceLine:(int)arg1 ;
-(void)setRuleId:(RWIProtocolCSSRuleId *)arg1 ;
-(RWIProtocolCSSRuleId *)ruleId;
-(int)sourceLine;
-(RWIProtocolCSSSelectorList *)selectorList;
-(void)setSelectorList:(RWIProtocolCSSSelectorList *)arg1 ;
-(id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4 ;
-(NSArray *)media;
-(void)setMedia:(NSArray *)arg1 ;
@end
