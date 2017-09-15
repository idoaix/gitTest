//
//  APIServicePassthrough.h
//  TestOne
//
//  Created by wangxiaodi on 2017/9/8.
//  Copyright © 2017年 wangxiaodi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APIService.h"
@interface APIServicePassthrough : NSObject

@property (nonatomic, weak) id<APIServiceProtocol> apiService;

- (instancetype)initWithApiService:(id<APIServiceProtocol>)apiService;

@end
