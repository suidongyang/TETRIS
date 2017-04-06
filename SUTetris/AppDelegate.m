//
//  AppDelegate.m
//  SUTetris
//
//  Created by SU on 2017/3/31.
//  Copyright © 2017年 LEC. All rights reserved.
//

#import "AppDelegate.h"
#import "TetrisViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.rootViewController = [[TetrisViewController alloc] init];
    [self.window makeKeyAndVisible];
    
//    NSArray *familyNames = [UIFont familyNames];
//    for( NSString *familyName in familyNames )
//    {
//        NSArray *fontNames = [UIFont fontNamesForFamilyName:familyName];
//        for( NSString *fontName in fontNames )
//        {
//            printf( "\tFont: %s \n", [fontName UTF8String] );
//        }
//    }
    
    return YES;
}



@end
