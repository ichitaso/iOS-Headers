/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPUIGraphicalAttachment.h>

@class TSTExpressionNode;

// Not exported
@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment
{
    TSTExpressionNode *mExpressionNode;
    _Bool mActive;
    _Bool mSelected;
    _Bool mNeverShowsMenu;
    struct CGSize mTextSize;
    struct CGRect mMenuRect;
    struct CGImage *mCachedImage;
    double mCachedImageScreenScale;
    _Bool mInInvalidate;
}

@property(nonatomic) double cachedImageScreenScale; // @synthesize cachedImageScreenScale=mCachedImageScreenScale;
@property(nonatomic, getter=neverShowsMenu) _Bool neverShowsMenu; // @synthesize neverShowsMenu=mNeverShowsMenu;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=mSelected;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=mActive;
@property(retain, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=mExpressionNode;
- (id).cxx_construct;
- (id)description;
- (void)saveToArchive:(struct TokenAttachmentArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct TokenAttachmentArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)invalidate;
@property(nonatomic) struct CGImage *cachedImage;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2;
- (id)copyIntoContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;

@end

