//
//  LXSession.h
//  CityApp
//
//  Created by Will Schreiber on 4/23/14.
//  Copyright (c) 2014 LXV. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
#import <CoreLocation/CoreLocation.h>

@interface LXSession : NSObject <CLLocationManagerDelegate>

+(LXSession*) thisSession;

@property (strong, nonatomic) NSMutableDictionary* user;


//setup
- (void) setVariables;


//savomg
+ (NSString*) documentsPathForFileName:(NSString*) name;
+ (NSString*) writeImageToDocumentsFolder:(UIImage*)image;


//locations
@property (strong, nonatomic) CLLocationManager* locationManager;
+ (CLLocation*) currentLocation;
- (BOOL) hasLocation;
+ (BOOL) locationPermissionDetermined;
- (void) startLocationUpdates;


// notifications
+ (BOOL) areNotificationsEnabled;

@end
