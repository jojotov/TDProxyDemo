//
//  TDClothesProvider.h
//  TDProxyDemo
//
//  Created by jojoting on 16/8/6.
//  Copyright © 2016年 jojoting. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, TDClothesSize){
    TDClothesSizeSmall = 0,
    TDClothesSizeMedium,
    TDClothesSizeLarge
};

@protocol TDClothesProviderProtocol <NSObject>

- (void)purchaseClothesWithSize:(TDClothesSize )size;

@end

@interface TDClothesProvider : NSObject

@end
