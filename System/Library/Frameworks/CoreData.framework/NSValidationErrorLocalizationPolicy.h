/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSBundle, NSString, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {

	NSURL* _url;
	NSBundle* _localizationBundle;
	NSString* _modelStringsFileName;
	NSDictionary* _localizationDictionary;
	BOOL _hasSetLocalizationDictionary;

}
-(id)localizedEntityNameForEntity:(id)arg1 ;
-(id)localizedPropertyNameForProperty:(id)arg1 ;
-(id)localizedModelStringForKey:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)arg1 ;
-(void)_ensureLocalizationDictionaryIsInitialized;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 value:(void*)arg2 ;
-(id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end
