/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDictionary;

@interface TLITunesTone : NSObject {

	BOOL _purchased;
	BOOL _ringtone;
	BOOL _protected;
	BOOL _private;
	NSString* _identifier;
	NSString* _name;
	NSString* _filePath;
	NSNumber* _pid;
	NSString* _artworkFile;
	unsigned long long _duration;
	NSDictionary* _playbackProperties;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                            //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) NSNumber * pid;                                 //@synthesize pid=_pid - In the implementation block
@property (getter=isPurchased,nonatomic,readonly) BOOL purchased;              //@synthesize purchased=_purchased - In the implementation block
@property (getter=isRingtone,nonatomic,readonly) BOOL ringtone;                //@synthesize ringtone=_ringtone - In the implementation block
@property (nonatomic,readonly) NSString * artworkFile;                         //@synthesize artworkFile=_artworkFile - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                    //@synthesize duration=_duration - In the implementation block
@property (getter=isProtected,nonatomic,readonly) BOOL protected;              //@synthesize protected=_protected - In the implementation block
@property (getter=isPrivate,nonatomic,readonly) BOOL private;                  //@synthesize private=_private - In the implementation block
@property (nonatomic,readonly) NSDictionary * playbackProperties;              //@synthesize playbackProperties=_playbackProperties - In the implementation block
-(unsigned long long)duration;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)filePath;
-(id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2 ;
-(NSDictionary *)playbackProperties;
-(NSString *)artworkFile;
-(BOOL)isProtected;
-(BOOL)isRingtone;
-(BOOL)isPurchased;
-(NSNumber *)pid;
-(BOOL)isPrivate;
@end
