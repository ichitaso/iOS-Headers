/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@class NSArray, NSIndexSet;

// Not exported
@interface GQDTNumberFormat : NSObject <GQDNameMappable>
{
    char *mUid;
    struct __CFString *mFormatString;
    struct __CFString *mCurrencyCode;
    long long mDecimalPlaces;
    _Bool mUseAccountingStyle;
    _Bool mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    _Bool mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    _Bool mIsCustom;
    _Bool mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    _Bool mBaseUsesMinusSign;
    _Bool mUseScientificFormattingAutomatically;
    _Bool mIgnoreDecimalPlacesForZeroValue;
    _Bool mIsTextFormat;
    _Bool mFormatContainsSpecialTokens;
    _Bool mFormatContainsIntegerToken;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString *mSuffixString;
}

+ (const struct StateSpec *)stateForReading;
- (_Bool)useAccountingStyle;
- (int)valueType;
- (struct __CFString *)createStringFromDouble:(double)arg1;
- (id)stringFromDouble:(double)arg1;
- (_Bool)hasValidDecimalPlaces;
- (void)dealloc;

@end

