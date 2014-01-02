/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload
{
    NSArray *_apnInfos;
    _Bool _wasInstalled;
}

+ (id)apnDomainName;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(nonatomic) _Bool wasInstalled; // @synthesize wasInstalled=_wasInstalled;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)description;
- (id)stubDictionary;
- (id)_strippedAPNDefaults;
- (id)apnDefaults;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void)_finishInitializationWithContents:(id)arg1;
- (_Bool)_checkForValidContents:(id)arg1 outError:(id *)arg2;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;

@end

