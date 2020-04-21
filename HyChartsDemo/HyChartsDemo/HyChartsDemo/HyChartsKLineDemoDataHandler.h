//
//  HyChartsKLineDemoDataHandler.h
//  HyChartsDemo
//
//  Created by Hy on 2018/4/21.
//  Copyright © 2018 Hy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HyCharts.h"

NS_ASSUME_NONNULL_BEGIN

@interface HyChartsKLineDemoDataHandler : NSObject



+ (void)handleWithArray:(NSArray *)array
              dataSorce:(id<HyChartKLineDataSourceProtocol>)dataSorce;

@end

NS_ASSUME_NONNULL_END
