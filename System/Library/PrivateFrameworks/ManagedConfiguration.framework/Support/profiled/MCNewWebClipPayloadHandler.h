/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class UIWebClip;

@interface MCNewWebClipPayloadHandler : MCNewPayloadHandler {

	UIWebClip* _setAsideClip;

}
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)savedWebClipIdentifier;
-(id)_findInstalledClipWithIdentifier:(id)arg1 ;
-(void)remove;
-(BOOL)isInstalled;
@end
