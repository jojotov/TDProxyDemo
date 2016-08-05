//
//  TDBookProvider.m
//  TDProxyDemo
//
//  Created by jojoting on 16/8/6.
//  Copyright © 2016年 jojoting. All rights reserved.
//

#import "TDBookProvider.h"

@interface TDBookProvider () <TDBookProviderProtocol>

@end
@implementation TDBookProvider

- (void)purchaseBookWithTitle:(NSString *)bookTitle{
    NSLog(@"You've bought \"%@\"",bookTitle);
}

@end
