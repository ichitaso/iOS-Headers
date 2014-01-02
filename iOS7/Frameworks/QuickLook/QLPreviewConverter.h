/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString, NSURLRequest, NSURLResponse, QLPreviewParts;

@interface QLPreviewConverter : NSObject
{
    QLPreviewParts *_previewParts;
    NSDictionary *_options;
}

+ (_Bool)isSafeRequest:(id)arg1;
+ (_Bool)isSafeURL:(id)arg1;
+ (_Bool)canConvertDocumentType:(id)arg1;
+ (_Bool)isSpreadSheetDocumentType:(id)arg1;
+ (_Bool)isRTFDocumentType:(id)arg1;
+ (_Bool)isLPDFDocumentType:(id)arg1;
+ (_Bool)isCSVDocumentType:(id)arg1;
+ (_Bool)isIWorkDocumentType:(id)arg1;
+ (_Bool)isOfficeDocumentType:(id)arg1;
+ (id)_spreadSheetUTIs;
+ (id)_csvUTIs;
+ (id)_lpdfUTIs;
+ (id)_rtfUTIs;
+ (id)_iWorkUTIs;
+ (id)_officeUTIs;
- (_Bool)htmlErrorDisabled;
- (void)setHtmlErrorDisabled:(_Bool)arg1;
- (void)finishedAppendingData;
- (void)appendDataArray:(id)arg1;
- (void)appendData:(id)arg1;
- (id)safeRequestForRequest:(id)arg1;
@property(readonly, nonatomic) NSURLResponse *previewResponse;
@property(readonly, nonatomic) NSURLRequest *previewRequest;
@property(readonly, nonatomic) QLPreviewParts *previewParts;
@property(readonly, nonatomic) NSString *previewUTI;
@property(readonly, nonatomic) NSString *previewFileName;
- (_Bool)isComputed;
- (_Bool)isCancelled;
- (void)cancel;
- (void)finishConverting;
- (void)_register;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;

@end

