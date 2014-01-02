/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray;

// Not exported
@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying>
{
    NSArray *mArray;
}

+ (id)argumentCollectionFromFormula:(struct TSCEFormula *)arg1 inOwner:(struct __CFUUID *)arg2 usingCalcEngine:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastElement;
- (id)firstElement;
- (id)reverseElementEnumerator;
- (id)elementEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)wrappedChartFormulaWithID:(CDStruct_a91f2c80)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFormula:(struct TSCEFormula *)arg1 inOwner:(struct __CFUUID *)arg2 usingCalcEngine:(id)arg3;
- (id)initWithArray:(id)arg1;

@end

