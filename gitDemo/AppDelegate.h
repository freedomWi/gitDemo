//
//  AppDelegate.h
//  gitDemo
//
//  Created by 王凌风 on 2018/1/10.
//  Copyright © 2018年 王凌风. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

