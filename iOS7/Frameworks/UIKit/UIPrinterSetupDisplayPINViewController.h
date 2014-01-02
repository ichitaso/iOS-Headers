/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class PKPrinter;

// Not exported
@interface UIPrinterSetupDisplayPINViewController : UIViewController
{
    PKPrinter *_printer;
}

@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void)enterPIN;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showDisplayMessage:(long long)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1;

@end

