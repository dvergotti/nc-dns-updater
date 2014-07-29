//
//  NCUIPService.h
//  NC DNS Updater
//
//  Created by Spencer Müller Diniz on 7/28/14.
//  Copyright (c) 2014 SPENCER. All rights reserved.
//

#import <Foundation/Foundation.h>

@class  NCUNamecheapDomain;

@interface NCUIPService : NSObject

+ (void)getExternalIPAddressWithCompletionBlock:(void (^)(NSString * ipAddress, NSError* error))completionBlock;
+ (void)updateNamecheapDomain:(NCUNamecheapDomain *)namecheapDomain withIP:(NSString *)ip;
+ (BOOL)isStringAnIP:(NSString *)stringValue;

@end