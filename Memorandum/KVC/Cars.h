//
//  SumWithKVC.h
//  Memorandum
//
//  Created by 王仅 on 2018/11/27.
//  Copyright © 2018 memorandum. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Car;
@interface Cars : NSObject
@property (nonatomic, copy) NSArray<Car *> *carArray;
- (void)sumPrice;
- (void)sumPriceString;
@end

NS_ASSUME_NONNULL_END
