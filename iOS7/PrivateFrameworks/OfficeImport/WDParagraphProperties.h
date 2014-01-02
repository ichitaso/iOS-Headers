/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class WDCharacterProperties, WDDocument;

// Not exported
@interface WDParagraphProperties : NSObject <NSCopying>
{
    WDDocument *mDocument;
    WDCharacterProperties *mCharacterProperties;
    unsigned int mCharacterPropertiesOverridden:1;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_a6f875df *mOriginalProperties;
    CDStruct_a6f875df *mTrackedProperties;
}

- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (_Bool)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (_Bool)isTablePartOverridden;
- (void)setTablePart:(unsigned short)arg1;
- (unsigned short)tablePart;
- (void)addTabStopDeletedPosition:(short)arg1;
- (short)tabStopDeletedPositionAt:(unsigned long long)arg1;
- (void)setTabStopDeletedPositionCount:(unsigned long long)arg1;
- (unsigned long long)tabStopDeletedPositionCount;
- (void)removeTabStopAddedWithPosition:(short)arg1;
- (void)addTabStopAdded:(CDStruct_bd9d81e1 *)arg1;
- (CDStruct_bd9d81e1 *)tabStopAddedAt:(unsigned long long)arg1;
- (void)setTabStopAddedCount:(unsigned long long)arg1;
- (unsigned long long)tabStopAddedCount;
- (_Bool)isKinsokuOffOverridden;
- (void)setKinsokuOff:(_Bool)arg1;
- (_Bool)kinsokuOff;
- (_Bool)isWidowControlOverridden;
- (void)setWidowControl:(_Bool)arg1;
- (_Bool)widowControl;
- (_Bool)isSuppressLineNumbersOverridden;
- (void)setSuppressLineNumbers:(_Bool)arg1;
- (_Bool)suppressLineNumbers;
- (_Bool)isSuppressAutoHyphensOverridden;
- (void)setSuppressAutoHyphens:(_Bool)arg1;
- (_Bool)suppressAutoHyphens;
- (_Bool)isKeepLinesTogetherOverridden;
- (void)setKeepLinesTogether:(_Bool)arg1;
- (_Bool)keepLinesTogether;
- (_Bool)isKeepNextParagraphTogetherOverridden;
- (void)setKeepNextParagraphTogether:(_Bool)arg1;
- (_Bool)keepNextParagraphTogether;
- (_Bool)isOutlineLevelOverridden;
- (void)setOutlineLevel:(unsigned short)arg1;
- (unsigned short)outlineLevel;
- (_Bool)isJustificationOverridden;
- (void)setJustification:(int)arg1;
- (int)justification;
- (_Bool)isFirstLineIndentOverridden;
- (void)setFirstLineIndent:(short)arg1;
- (short)firstLineIndent;
- (_Bool)isRightIndentOverridden;
- (void)setRightIndent:(short)arg1;
- (short)rightIndent;
- (_Bool)isLeftIndentOverridden;
- (void)setLeftIndent:(short)arg1;
- (short)leftIndent;
- (_Bool)isLineSpacingRuleOverridden;
- (void)setLineSpacingRule:(int)arg1;
- (int)lineSpacingRule;
- (_Bool)isLineSpacingOverridden;
- (void)setLineSpacing:(short)arg1;
- (short)lineSpacing;
- (_Bool)isSpaceAfterAutoOverridden;
- (void)setSpaceAfterAuto:(_Bool)arg1;
- (_Bool)spaceAfterAuto;
- (_Bool)isSpaceAfterOverridden;
- (void)setSpaceAfter:(unsigned short)arg1;
- (unsigned short)spaceAfter;
- (_Bool)isSpaceBeforeAutoOverridden;
- (void)setSpaceBeforeAuto:(_Bool)arg1;
- (_Bool)spaceBeforeAuto;
- (_Bool)isSpaceBeforeOverridden;
- (void)setSpaceBefore:(unsigned short)arg1;
- (unsigned short)spaceBefore;
- (_Bool)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (_Bool)isBarBorderOverridden;
- (id)mutableBarBorder;
- (id)barBorder;
- (_Bool)isBetweenBorderOverridden;
- (id)mutableBetweenBorder;
- (id)betweenBorder;
- (_Bool)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (_Bool)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (_Bool)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (_Bool)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (_Bool)isAnchorLockOverridden;
- (void)setAnchorLock:(_Bool)arg1;
- (_Bool)anchorLock;
- (_Bool)isWrapCodeOverridden;
- (void)setWrapCode:(BOOL)arg1;
- (BOOL)wrapCode;
- (_Bool)isVerticalPositionOverridden;
- (void)setVerticalPosition:(long long)arg1;
- (long long)verticalPosition;
- (_Bool)isHorizontalPositionOverridden;
- (void)setHorizontalPosition:(long long)arg1;
- (long long)horizontalPosition;
- (_Bool)isVerticalAnchorOverridden;
- (void)setVerticalAnchor:(int)arg1;
- (int)verticalAnchor;
- (_Bool)isHorizontalAnchorOverridden;
- (void)setHorizontalAnchor:(int)arg1;
- (int)horizontalAnchor;
- (_Bool)isWrapOverridden;
- (void)setWrap:(_Bool)arg1;
- (_Bool)wrap;
- (_Bool)isHorizontalSpaceOverridden;
- (void)setHorizontalSpace:(long long)arg1;
- (long long)horizontalSpace;
- (_Bool)isVerticalSpaceOverridden;
- (void)setVerticalSpace:(long long)arg1;
- (long long)verticalSpace;
- (_Bool)isHeightRuleOverridden;
- (void)setHeightRule:(int)arg1;
- (int)heightRule;
- (_Bool)isHeightOverridden;
- (void)setHeight:(long long)arg1;
- (long long)height;
- (_Bool)isWidthOverridden;
- (void)setWidth:(long long)arg1;
- (long long)width;
- (_Bool)isDropCapOverridden;
- (void)setDropCap:(CDStruct_5c52f79b)arg1;
- (CDStruct_5c52f79b)dropCap;
- (_Bool)isListIndexOverridden;
- (void)setListIndex:(unsigned long long)arg1;
- (unsigned long long)listIndex;
- (_Bool)isListOverridden;
- (void)setList:(id)arg1;
- (id)list;
- (_Bool)isListLevelOverridden;
- (void)setListLevel:(unsigned char)arg1;
- (unsigned char)listLevel;
- (_Bool)isPageBreakBeforeOverridden;
- (void)setPageBreakBefore:(_Bool)arg1;
- (_Bool)isPageBreakBefore;
- (_Bool)isTableStyleOverridden;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (void)clearBaseStyle;
- (_Bool)isBaseStyleOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (_Bool)isAnythingOverridden;
- (void)clearChararacterProperties;
- (_Bool)isCharacterPropertiesOverridden;
- (void)setCharacterProperties:(id)arg1;
- (id)mutableCharacterProperties;
- (id)characterProperties;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

