/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSURLConnectionRequestDelegate.h>

@class NSDate, NSArray, NSDictionary, NSString, NSMutableArray, SSURLConnectionRequest, NSNumber, SSItemOffer, NSURL, SSItemImageCollection;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {

	NSDate* _expirationDate;
	NSArray* _offers;
	NSDictionary* _properties;
	NSString* _tellAFriendBody;
	NSString* _tellAFriendBodyMIMEType;
	NSMutableArray* _tellAFriendHandlers;
	SSURLConnectionRequest* _tellAFriendRequest;
	NSString* _tellAFriendSubject;

}

@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * allItemOffers; 
@property (nonatomic,readonly) SSItemOffer * defaultItemOffer; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSString * itemTitle; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isHighDefinition,nonatomic,readonly) BOOL highDefinition; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) NSURL * viewItemURL; 
@property (nonatomic,readonly) float averageUserRating; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) SSItemImageCollection * imageCollection; 
@property (nonatomic,readonly) NSArray * thumbnailImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setExpirationDate:(id)arg1 ;
-(id)podcastFeedURL;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)genreIdentifier;
-(id)networkName;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)videoDetails;
-(SSItemImageCollection *)imageCollection;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)_offers;
-(id)_tellAFriendDictionary;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(NSArray *)thumbnailImages;
-(NSURL *)viewItemURL;
-(id)sendGiftURL;
-(id)viewReviewsURL;
-(void)dealloc;
-(NSString *)description;
-(id)bundleIdentifier;
-(NSString *)itemTitle;
-(id)shortDescription;
-(id)valueForProperty:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isRestricted;
-(id)bundleVersion;
-(id)seriesName;
-(id)composerName;
-(BOOL)isCompilation;
-(id)releaseDate;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)seasonNumber;
-(id)longDescription;
-(id)collectionIdentifier;
-(float)averageUserRating;
-(id)softwareType;
-(id)priceDisplay;
-(id)initWithItemDictionary:(id)arg1 ;
-(id)playableMedia;
-(id)mediaKind;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(id)tellAFriendBody;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(id)tweetInitialText;
-(id)tweetURL;
-(BOOL)isGameCenterEnabled;
-(id)genreName;
-(id)buyParameters;
-(NSString *)itemKind;
-(NSString *)artistName;
-(id)collectionName;
-(long long)numberOfUserRatings;
-(id)releaseDateString;
-(NSNumber *)ITunesStoreIdentifier;
-(id)contentRating;
-(BOOL)isHighDefinition;
-(id)indexInCollection;
-(SSItemOffer *)defaultItemOffer;
@end

