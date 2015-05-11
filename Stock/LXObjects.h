//
//  LXObjects.h
//  Stock
//
//  Created by Will Schreiber on 4/3/15.
//  Copyright (c) 2015 LXV. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (Extensions)

+ (NSMutableDictionary*) create:(NSString*)oT;

- (NSString*) ID;
- (NSString*) localID;
- (NSString*) createdAt;
- (NSString*) updatedAt;
- (NSString*) objectType;
- (NSString*) pluralObjectType;

- (BOOL) updatedMoreRecentThan:(NSMutableDictionary*)otherObject;

// saving and syncing

- (void) sync;

- (void) saveBoth:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;
- (void) saveLocal;
- (void) saveLocal:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;
- (void) saveRemote;
- (void) saveRemote:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;

- (void) destroyBoth;
- (void) destroyBoth:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;
- (void) destroyLocal;
- (void) destroyLocal:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;
- (void) destroyRemote;
- (void) destroyRemote:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;


@end
