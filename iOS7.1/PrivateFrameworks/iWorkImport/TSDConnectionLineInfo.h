//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDShapeInfo.h>

@class TSDDrawableInfo;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineInfo : TSDShapeInfo
{
    TSDDrawableInfo *mConnectedFrom;
    TSDDrawableInfo *mConnectedTo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
}

+ (id)cleanupInfos:(id)arg1 duringCommand:(id)arg2 updateGeometries:(BOOL)arg3;
@property(retain, nonatomic) TSDDrawableInfo *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(retain, nonatomic) TSDDrawableInfo *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (void)acceptVisitor:(id)arg1;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (id)commandForSettingConnectionLineType:(int)arg1;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (BOOL)canAnchor;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)computeLayoutInfoGeometry;
- (id)presetKind;
- (Class)editorClass;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)saveGeometryToArchive:(struct GeometryArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ConnectionLineArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ConnectionLineArchive *)arg1 unarchiver:(id)arg2;
- (id)titleForBuildChunk:(id)arg1;

@end
