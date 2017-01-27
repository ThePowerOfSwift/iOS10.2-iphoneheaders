/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class GQUProgressiveHelper, NSString;

@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle> {

	GQUProgressiveHelper* mHelper;
	CFDictionaryRef mQuickLookProperties;
	CFDictionaryRef mAttachmentsURLs;
	CFDictionaryRef mComputedAttachments;
	CFStringRef mUuidStr;
	CFStringRef mUriScheme;
	BOOL mPreviewStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(BOOL)arg2 ;
-(void)startProgressiveData;
-(BOOL)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(void)setCurrentSheetUri:(CFStringRef)arg1 ;
-(BOOL)appendData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 resourceName:(CFStringRef)arg3 ;
-(void)closeAttachment:(CFStringRef)arg1 ;
-(CFURLRef)getAttachmentURL:(CFStringRef)arg1 mimeType:(CFStringRef)arg2 ;
-(void)dealloc;
-(id)initWithHandler:(id)arg1 ;
@end
