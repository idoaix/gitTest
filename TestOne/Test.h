//
//  Test.h
//  TestOne
//
//  Created by wangxiaodi on 2017/9/7.
//  Copyright © 2017年 wangxiaodi. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol APIServiceProtocol <NSObject>

- (void)request;

@end

@interface Test : NSObject <APIServiceProtocol>

@end
