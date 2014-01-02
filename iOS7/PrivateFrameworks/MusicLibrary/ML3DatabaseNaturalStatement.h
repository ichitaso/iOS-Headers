/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString;

// Not exported
@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding>
{
    NSString *_sql;
    NSMutableArray *_parameters;
}

+ (_Bool)supportsSecureCoding;
+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;
@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *sql; // @synthesize sql=_sql;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2;
- (id)initWithSQL:(id)arg1 parameters:(id)arg2;

@end

