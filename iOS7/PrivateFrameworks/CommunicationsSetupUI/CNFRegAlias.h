/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAccount, NSString;

@interface CNFRegAlias : NSObject
{
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
}

@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLocalPhoneNumberAlias;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (id)description;
- (void)setDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (long long)validationErrorReason;
- (long long)validationStatus;
- (_Bool)validate;
- (_Bool)isPhoneNumberAliasOnPhoneNumberAccount;
@property(readonly, nonatomic) long long type; // @dynamic type;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;

@end

