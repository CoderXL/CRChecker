//
//  CRCounter.h
//  CRChecker
//
//  Created by 崔 明辉 on 14-12-25.
//  Copyright (c) 2014年 崔 明辉. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRCounter : NSObject

+ (void)addCustomClassPrefix:(NSString *)argPrefix;

+ (NSDictionary *)counterDictionary;

+ (void)increaseWithClass:(Class)argClass;

+ (void)decreaseWithClass:(Class)argClass;

@end
