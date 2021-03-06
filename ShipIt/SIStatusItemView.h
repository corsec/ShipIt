//
//  SIDroppableView.h
//  ShipIt!
//
//  Created by doomspork on 5/14/11.
//  Copyright 2011 Codez4Mac.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define StatusItemViewPaddingWidth  6
#define StatusItemViewPaddingHeight 3

@interface SIStatusItemView : NSView <NSMenuDelegate>{
	NSStatusItem *statusItem;
	NSString *title;
    NSObject *delegate;
	BOOL isMenuVisible;
    BOOL isDragActive;
}
@property (retain) NSObject *delegate;
@property (retain) NSStatusItem *statusItem;
@property (retain) NSString *title;

- (void)setTitle:(NSString *)newTitle;
- (NSString *)title;
@end
