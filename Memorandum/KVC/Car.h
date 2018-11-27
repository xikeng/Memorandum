//
//  Car.h
//  Memorandum
//
//  Created by 王仅 on 2018/11/27.
//  Copyright © 2018 memorandum. All rights reserved.
//  KVC 可以用来求数组中的 平均值@avg  和@sum 最大值@max 最小值@min 。。。
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Car : NSObject
@property (nonatomic, assign) double    price;
@property (nonatomic, strong) NSString *priceString;
@end

NS_ASSUME_NONNULL_END
