//
//  GKHotKeyViewAppDelegate.m
//  GKHotKeyView
//
//  Created by Gaurav Khanna on 11/3/10.
//  Copyright (c) 2010 GK Apps. All rights reserved.
//

#import "GKHotKeyViewAppDelegate.h"

@implementation GKHotKeyViewAppDelegate

@synthesize window;
@synthesize testLabel;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
    
    
    [GKHotKeyCenter sharedCenter];
}


@end
