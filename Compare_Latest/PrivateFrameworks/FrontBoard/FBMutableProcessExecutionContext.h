//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBProcessExecutionContext.h>

@class NSArray, NSDictionary, NSURL;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext
{
}


// Remaining properties
@property(retain, nonatomic) NSArray *arguments;
@property(nonatomic) BOOL checkForLeaks;
@property(nonatomic) BOOL disableASLR;
@property(retain, nonatomic) NSDictionary *environment;
@property(nonatomic) unsigned int launchAssertionFlags;
@property(nonatomic) int launchIntent;
@property(retain, nonatomic) NSURL *standardErrorURL;
@property(retain, nonatomic) NSURL *standardOutputURL;
@property(nonatomic) BOOL waitForDebugger;
@property(nonatomic) double watchdogExtension;
@end

