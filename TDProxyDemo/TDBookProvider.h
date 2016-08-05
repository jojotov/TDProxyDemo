//
//  TDBookProvider.h
//  TDProxyDemo
//
//  Created by jojoting on 16/8/6.
//  Copyright © 2016年 jojoting. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TDBookProviderProtocol <NSObject>

- (void)purchaseBookWithTitle:(NSString *)bookTitle;

@end

@interface TDBookProvider : NSObject

@end
