//
//  UIHelper.h
//  JSONKitDemo
//
//  Created by apple on 14-4-17.
//  Copyright (c) 2014年 ___A-EYE___. All rights reserved.
//

#import <UIKit/UIKit.h>

#define COLOR(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

@interface UIHelper : NSObject

@end

@interface UIColor(Additions)

+ (UIColor *)colorWithHexString:(NSString *)hexString;

@end

@interface UIImage (Additions)

+ (UIImage *)imageWithHexString:(NSString *)hexString;

@end

@interface UIView(Layout)

@property (assign, nonatomic) CGFloat x;
@property (assign, nonatomic) CGFloat y;
@property (assign, nonatomic) CGFloat width;
@property (assign, nonatomic) CGFloat height;
@property (assign, nonatomic) CGPoint origin;
@property (assign, nonatomic) CGSize  size;
@property (assign, nonatomic) CGFloat centerX;
@property (assign, nonatomic) CGFloat centerY;
@property (nonatomic, assign) CGFloat maxX;
@property (nonatomic, assign) CGFloat maxY;

@end

