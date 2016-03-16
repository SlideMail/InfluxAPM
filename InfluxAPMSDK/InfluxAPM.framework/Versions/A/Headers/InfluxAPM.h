//
//  InfluxAPM
//
//  Created by Marcin Butanowicz on 16/02/16.
//  Copyright © 2016 com.InfluxAPM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InfluxAPM : NSObject
/**
 To initialize InfluxAPM SDK call this methods within your App Delegate and provide your private token, retrived via InfluxAPM's web site.
 @param tokenId make sure this value is not empty!
 */
+ (void)startInfluxAPMWithToken:(NSString *)tokenId;

/**
 Setup custom identifier, which let you localize particular device among all of them
 @param userId unique identifier
 */
+ (void)setupUserId:(NSString *)userId;



/**
 Start measure your own custom event, to stop doing this just call stopEvent:.
 @param eventName custom name of your event.
 */
+ (void)startTrack:(NSString *)eventName;

/**
 Start measure your own custom event, with extra unique ID. 
 Using this method you are able to track the same event name for a different IDs like user@email.com.
 @param eventName custom name of your event.
 @param uniqueId unique Id for particular event name
 */
+ (void)startTrack:(NSString *)eventName uniqueId:(NSString *)uniqueId;


/**
 Finish measure.
 @param custom name of your event which should be the same as called for beginEvent.
 */
+ (void)endTrack:(NSString *)eventName;

/**
 Finish measure with unexpected error.
 @param eventName custom name of your event which should be the same as called for beginEvent.
 @param error measurement has finished with error.
 */
+ (void)endTrack:(NSString *)eventName withError:(NSError *)error;

/**
 Finish measure.
 @param eventName custom name of your event which should be the same as called for beginEvent.
 @param uniqueId uniqueId for particular event name.
 */
+ (void)endTrack:(NSString *)eventName uniqueId:(NSString *)uniqueId;


/**
 Finish measure with unexpected error.
 @param eventName custom name of your event which should be the same as called for beginEvent.
 @param error measurement has finished with error.
 @param uniqueId uniqueId for particular event name.
 */
+ (void)endTrack:(NSString *)eventName withError:(NSError *)error uniqueId:(NSString *)uniqueId;




/**
 Track user exception, caught by "@try @catch"
 Using this method you gonna track custom exception.
 @param exception User exception.
 */
+ (void)trackException:(NSException *)exception;


/**
 Add custom network hostname to monitor reachability.
 @param hostname custom hostname.
 */
+ (void)addNetworkHostname:(NSString *)hostname;

@end


