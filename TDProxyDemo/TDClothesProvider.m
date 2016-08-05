//
//  TDClothesProvider.m
//  TDProxyDemo
//
//  Created by jojoting on 16/8/6.
//  Copyright © 2016年 jojoting. All rights reserved.
//

#import "TDClothesProvider.h"

@interface TDClothesProvider () <TDClothesProviderProtocol>

@end

@implementation TDClothesProvider

- (void)purchaseClothesWithSize:(TDClothesSize )size{
    NSString *sizeStr;
    switch (size) {
        case TDClothesSizeLarge:
            sizeStr = @"large size";
            break;
        case TDClothesSizeMedium:
            sizeStr = @"medium size";
            break;
        case TDClothesSizeSmall:
            sizeStr = @"small size";
            break;
        default:
            break;
    }
    NSLog(@"You've bought some clothes of %@",sizeStr);
}

@end
