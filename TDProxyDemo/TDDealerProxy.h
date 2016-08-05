//
//  TDDealerProxy.h
//  TDProxyDemo
//
//  Created by jojoting on 16/8/5.
//  Copyright © 2016年 jojoting. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDBookProvider.h"
#import "TDClothesProvider.h"

@interface TDDealerProxy : NSProxy <TDBookProviderProtocol, TDClothesProviderProtocol>

+ (instancetype)dealerProxy;

@end
