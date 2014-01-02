/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface IMPerson : NSObject
{
    _Bool _registered;
    int _recordID;
}

+ (void)_setCachedQueriesEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool _registered; // @synthesize _registered;
@property(readonly, nonatomic) int _recordID; // @synthesize _recordID;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSData *imageDataWithoutLoading;
@property(retain, nonatomic) NSData *imageData;
- (void)_abPersonChanged:(id)arg1;
@property(readonly, nonatomic) NSArray *groups;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIMPerson:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueID;
- (_Bool)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (void)save;
@property(readonly, nonatomic) NSArray *mobileNumbers;
@property(nonatomic) NSArray *phoneNumbers;
- (id)allHandlesForProperty:(id)arg1;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (id)valuesForProperty:(id)arg1;
- (id)valuesForIMProperty:(id)arg1;
@property(readonly, nonatomic) _Bool isInAddressBook;
@property(copy, nonatomic) NSArray *emails;
@property(readonly, nonatomic) NSArray *allEmails;
- (id)emailHandlesForService:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(_Bool)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *fullName;
@property(copy, nonatomic) NSString *nickname;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *abbreviatedName;
@property(readonly, nonatomic) NSString *companyName;
@property(readonly, nonatomic) _Bool isCompany;
- (void)dealloc;
- (void)finalize;
@property(readonly, nonatomic) void *_recordRef;
@property(readonly, nonatomic) int recordID;
- (id)initWithABRecordID:(int)arg1;
- (id)init;

@end

