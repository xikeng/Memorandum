//
//  SumWithKVC.m
//  Memorandum
//
//  Created by 王仅 on 2018/11/27.
//  Copyright © 2018 memorandum. All rights reserved.
//

#import "Cars.h"
#import "Car.h"

@implementation Cars

- (instancetype)init {
    self = [super init];
    if (self) {
        NSMutableArray *mutableArray = [NSMutableArray arrayWithCapacity:10];
        for (int i = 1; i < 10; i = i * 10000) {
            Car *car        = [[Car alloc] init];
            car.price       = i;
            car.priceString = [NSString stringWithFormat:@"%d", i];
            [mutableArray addObject:car];
        }
        _carArray = mutableArray.copy;
    }
    return self;
}

- (void)sumPrice {
    NSNumber *number = [_carArray valueForKeyPath:@"@sum.price"];
    NSLog(@"sum.price=%@", number);
}

- (void)sumPriceString {
    NSNumber *number = [_carArray valueForKeyPath:@"@sum.priceString.floatValue"];
    NSLog(@"sum.priceString=%@", number);
}
@end
