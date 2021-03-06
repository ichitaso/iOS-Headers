/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MFAddressConcatenator : NSObject
{
    NSString *_andNMoreFormat;
    NSString *_andNMoreNoEllipsisFormat;
    NSString *_oneAddressFormat;
    NSString *_nAddressesFormat;
    NSString *_truncatedAddressFormat;
}

+ (id)defaultRecipientListConcatenator;
@property(retain, nonatomic) NSString *truncatedAddressFormat; // @synthesize truncatedAddressFormat=_truncatedAddressFormat;
@property(retain, nonatomic) NSString *nAddressesFormat; // @synthesize nAddressesFormat=_nAddressesFormat;
@property(retain, nonatomic) NSString *oneAddressFormat; // @synthesize oneAddressFormat=_oneAddressFormat;
@property(retain, nonatomic) NSString *andNMoreNoEllipsisFormat; // @synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat;
@property(retain, nonatomic) NSString *andNMoreFormat; // @synthesize andNMoreFormat=_andNMoreFormat;
- (id)commaSeparatedAddressListWithAddressCount:(unsigned long long)arg1 prefixForAddressAtIndex:(id)arg2 stringForAddressAtIndex:(void)arg3 lengthValidationBlock:(id)arg4;
- (void)getCommaSeparatedAddressList:(out id *)arg1 andListSuffix:(out id *)arg2 withAddressCount:(unsigned long long)arg3 prefixForAddressAtIndex:(id)arg4 stringForAddressAtIndex:(void)arg5 lengthValidationBlock:(id)arg6;
- (void)dealloc;

@end

