//
//  TetrisViewController.h
//  XibTest
//
//  Created by SU on 2017/1/9.
//  Copyright © 2017年 LEC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TetrisViewController : UIViewController

@end

///-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

@interface SquareGroup : UIView

@property (strong, nonatomic) UIColor *color;

/// 提示下一个组合的面板
- (UIView *)tipBoard;

/// 回到起始位置
- (void)backToStartPoint:(CGPoint)startPoint;

/// 旋转
- (void)rotate:(BOOL(^)(NSArray *nextGroup))canRotate;

@end

///-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

@interface BasicSquare : UIButton

@property (strong, nonatomic) UIColor *color;

@end
