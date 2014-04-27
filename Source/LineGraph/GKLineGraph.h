//
//  GKLineGraph.h
//  GraphKit
//
//  Created by Michal Konturek on 21/04/2014.
//  Copyright (c) 2014 Michal Konturek. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GKLineGraphDataSource;

@interface GKLineGraph : UIView

@property (nonatomic, assign) BOOL animated;
@property (nonatomic, assign) CFTimeInterval animationDuration;

@property (nonatomic, assign) id<GKLineGraphDataSource> dataSource;

@property (nonatomic, assign) CGFloat lineWidth;

//@property (nonatomic, strong) NSArray *titleLabels;
//@property (nonatomic, strong) NSArray *valueLabels;

@property (nonatomic, assign) CGFloat margin;

- (void)draw;
- (void)reset;

@end

@protocol GKLineGraphDataSource <NSObject>

- (NSInteger)numberOfLines;
- (UIColor *)colorForLineAtIndex:(NSInteger)index;
- (NSArray *)valuesForLineAtIndex:(NSInteger)index;

@optional
- (CFTimeInterval)animationDurationForLineAtIndex:(NSInteger)index;

- (NSString *)titleForLineAtIndex:(NSInteger)index;

@end
