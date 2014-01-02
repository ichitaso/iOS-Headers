/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDCanvasDelegate-Protocol.h"

@class NSArray, TSDCanvas, TSKDocumentRoot;

// Not exported
@interface TSDImager : NSObject <TSDCanvasDelegate>
{
    NSArray *mInfos;
    struct CGColor *mBackgroundColor;
    struct CGRect mUnscaledClipRect;
    double mViewScale;
    struct CGSize mScaledImageSize;
    struct CGSize mMaximumScaledImageSize;
    _Bool mUseScaledImageSize;
    _Bool mDistortedToMatch;
    _Bool mImageMustHaveEvenDimensions;
    _Bool mShouldReuseBitmapContext;
    struct UIEdgeInsets mContentInset;
    TSKDocumentRoot *mDocumentRoot;
    TSDCanvas *mCanvas;
    struct CGRect mActualScaledClipRect;
    _Bool mDrawingIntoPDF;
    _Bool mIsPrinting;
    struct CGContext *mReusableBitmapContext;
    struct CGRect mReusableBounds;
    struct CGRect mReusableIntegralBounds;
    struct CGRect mReusableActualScaledClipRect;
    struct CGSize mReusableScaledImageSize;
    id mPostRenderAction;
}

@property(nonatomic) _Bool isPrinting; // @synthesize isPrinting=mIsPrinting;
@property(nonatomic) _Bool shouldReuseBitmapContext; // @synthesize shouldReuseBitmapContext=mShouldReuseBitmapContext;
@property(nonatomic) _Bool imageMustHaveEvenDimensions; // @synthesize imageMustHaveEvenDimensions=mImageMustHaveEvenDimensions;
@property(nonatomic) _Bool distortedToMatch; // @synthesize distortedToMatch=mDistortedToMatch;
@property(readonly, nonatomic) struct CGRect actualScaledClipRect; // @synthesize actualScaledClipRect=mActualScaledClipRect;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) struct CGRect unscaledClipRect; // @synthesize unscaledClipRect=mUnscaledClipRect;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
- (struct CGImage *)p_newImageInReusableContext;
- (void)p_drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;
- (_Bool)p_configureCanvas;
- (_Bool)isPrintingCanvas;
- (_Bool)isCanvasDrawingIntoPDF:(id)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (id)documentRoot;
- (_Bool)drawPageInContext:(struct CGContext *)arg1 createPage:(_Bool)arg2;
- (id)pdfData;
- (struct CGImage *)newImage;
@property(nonatomic) struct CGSize maximumScaledImageSize;
@property(nonatomic) struct CGSize scaledImageSize;
@property(nonatomic) double viewScale;
- (void)setPostRenderAction:(id)arg1;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

