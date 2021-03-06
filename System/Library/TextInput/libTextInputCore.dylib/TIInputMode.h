/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSLocale;

@interface TIInputMode : NSObject <NSCopying> {

	NSString* _languageWithRegion;
	NSString* _variant;
	NSLocale* _locale;
	Class _inputManagerClass;
	Class _keyboardFeatureSpecializationClass;
	Class _multilingualInputManagerClass;
	NSString* _normalizedIdentifier;

}

@property (nonatomic,readonly) NSString * normalizedIdentifier;                       //@synthesize normalizedIdentifier=_normalizedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * languageWithRegion; 
@property (nonatomic,readonly) NSString * variant; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) Class inputManagerClass; 
@property (nonatomic,readonly) Class keyboardFeatureSpecializationClass; 
@property (nonatomic,readonly) Class multilingualInputManagerClass; 
@property (nonatomic,readonly) BOOL supportsMultilingualKeyboard; 
@property (nonatomic,readonly) BOOL spaceAutocorrectionEnabled; 
+(id)inputModeWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)normalizedIdentifier;
-(NSString *)languageWithRegion;
-(NSLocale *)locale;
-(id)initWithNormalizedIdentifier:(id)arg1 ;
-(Class)inputManagerClass;
-(Class)keyboardFeatureSpecializationClass;
-(Class)multilingualInputManagerClass;
-(BOOL)supportsMultilingualKeyboard;
-(BOOL)spaceAutocorrectionEnabled;
-(NSString *)variant;
@end

