/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPLinkHTMLGeneratorDelegate.h>

@protocol LPLinkHTMLTextGeneratorDelegate;
@class WebView, LPLinkHTMLGenerator, NSString, LPLinkMetadata, NSURL;

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate> {

	WebView* _webView;
	LPLinkHTMLGenerator* _DOMGenerator;
	NSString* _generatedFragmentText;
	NSString* _generatedDocumentText;
	id<LPLinkHTMLTextGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<LPLinkHTMLTextGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL generateEmailCompatibleMarkup; 
@property (nonatomic,copy) LPLinkMetadata * metadata; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * HTMLFragmentString; 
@property (nonatomic,copy,readonly) NSString * HTMLDocumentString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)setDelegate:(id<LPLinkHTMLTextGeneratorDelegate>)arg1 ;
-(id<LPLinkHTMLTextGeneratorDelegate>)delegate;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(BOOL)generateEmailCompatibleMarkup;
-(void)setGenerateEmailCompatibleMarkup:(BOOL)arg1 ;
-(id)linkHTMLGenerator:(id)arg1 URLForResource:(id)arg2 withMIMEType:(id)arg3 ;
-(id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 ;
-(NSString *)HTMLFragmentString;
-(NSString *)HTMLDocumentString;
@end

