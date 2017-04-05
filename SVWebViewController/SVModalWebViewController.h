//
//  SVModalWebViewController.h
//
//  Created by Fortify Communications on 05.04.17.
//  Copyright 2017 Home. All rights reserved.
//
//  https://github.com/fortify-communications/SVWebViewController

#import <UIKit/UIKit.h>

@class SVWebViewController;

@interface SVModalWebViewController : UINavigationController

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL *)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

@property (nonatomic, strong) UIColor *barsTintColor;
@property (nonatomic, weak) id<UIWebViewDelegate> webViewDelegate;
@property (nonatomic, strong) SVWebViewController *webViewController;

@end
