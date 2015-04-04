//
//  LXServer.h
//  CityApp
//
//  Created by Will Schreiber on 4/23/14.
//  Copyright (c) 2014 LXV. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LXServer : AFHTTPSessionManager

+ (LXServer *)shared;

//requests
- (void) requestPath:(NSString*)path withMethod:(NSString*)method withParamaters:params success:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;
- (void) requestPath:(NSString*)path withMethod:(NSString*)method withParamaters:(NSDictionary*)params constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block success:(void (^)(id responseObject))successCallback failure:(void (^)(NSError* error))failureCallback;

@end
