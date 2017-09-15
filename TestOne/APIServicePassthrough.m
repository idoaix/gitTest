//
//  APIServicePassthrough.m
//  TestOne
//
//  Created by wangxiaodi on 2017/9/8.
//  Copyright © 2017年 wangxiaodi. All rights reserved.
//

#import "APIServicePassthrough.h"
@implementation APIServicePassthrough

- (instancetype)initWithApiService:(id<APIServiceProtocol>)apiService {
    if (self = [super init]) {
        self.apiService = apiService;
        NSLog(@"abc");
    }
    return self;
}

@end
