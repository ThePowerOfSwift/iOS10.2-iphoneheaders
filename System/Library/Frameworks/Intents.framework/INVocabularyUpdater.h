/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection
+(id)_sharedAppInstance;
+(void)clearAllCustomVocabulary;
-(void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(/*^block*/id)arg3 ;
-(void)setCustomPhotoAlbumNames:(id)arg1 ;
@end
