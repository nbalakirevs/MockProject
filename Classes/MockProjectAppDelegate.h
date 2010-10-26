//
//  MockProjectAppDelegate.h
//  MockProject
//
//  Created by Nikita Balakirevs on 10/26/10.
//  Copyright 2010 Grand Centrix GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MockProjectAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

