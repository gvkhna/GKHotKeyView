//
//  GKHotKeyViewAppDelegate.h
//  GKHotKeyView
//
//  Created by Gaurav Khanna on 11/3/10.
//  Copyright (c) 2010 GK Apps. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "GKHotKeyCenter.h"

@interface GKHotKeyViewAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    NSTextField *testLabel;
}

@property (nonatomic, strong) IBOutlet NSWindow *window;
@property (nonatomic, strong) IBOutlet NSTextField *testLabel;

@end
