//
//  HyChartModel.h
//  HyChartsDemo
//
//  Created by Hy on 2018/3/17.
//  Copyright © 2018 Hy. All rights reserved.
//


#import "HyChartModelProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HyChartValuePositonProviderProtocol <NSObject>
@property (nonatomic,copy, readonly) CGFloat (^valuePositon)(NSNumber *value);
@property (nonatomic,copy, readonly) CGFloat (^valueHeight)(NSNumber *value);
@end

@interface HyChartModel : NSObject<HyChartModelProtocol>

@property (nonatomic, assign) CGFloat position;
@property (nonatomic, assign) CGFloat visiblePosition;
@property (nonatomic, strong) NSNumberFormatter *numberFormatter;

- (void)setValuePositonProvider:(id<HyChartValuePositonProviderProtocol>)provider;

@end

NS_ASSUME_NONNULL_END
