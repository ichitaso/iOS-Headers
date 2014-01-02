/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableString, NSString;

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying>
{
    struct GLKBigInt_s _mask;
    GLKShaderBlockNode *_parent;
    GLKShaderBlockNode *_next;
    GLKShaderBlockNode *_children;
    NSString *_label;
    NSString *_loopVar;
    int _type;
    int _unrollCt;
    unsigned int _index;
    NSMutableString *_blockText;
    int _propertyClass;
    _Bool _indexedMask;
}

+ (void)printTreeVerbose:(id)arg1;
+ (void)printTree:(id)arg1;
+ (void)setIndicesForRoot:(id)arg1 andReplaceLoopVar:(id)arg2 baseLabel:(id)arg3 basePropertyClass:(int)arg4 usingIndex:(unsigned int)arg5 indexString:(id)arg6;
+ (unsigned int)nodeCt:(id)arg1 nodeCt:(unsigned int *)arg2;
+ (void)insertNode:(id)arg1 afterSibling:(id)arg2;
+ (void)buildUnrollNodeArray:(id)arg1 array:(id)arg2;
+ (void)setMasksWithRoot:(id)arg1 treeRoot:(id)arg2 mask:(struct GLKBigInt_s *)arg3;
+ (struct GLKBigInt_s)maskForLabel:(id)arg1 root:(id)arg2 index:(int)arg3;
+ (id)copyTreeWithRootButNotSiblings:(id)arg1 parent:(id)arg2;
+ (id)copyTreeWithRoot:(id)arg1 parent:(id)arg2;
@property(nonatomic) _Bool indexedMask; // @synthesize indexedMask=_indexedMask;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) int propertyClass; // @synthesize propertyClass=_propertyClass;
@property(retain, nonatomic) NSMutableString *blockText; // @synthesize blockText=_blockText;
@property(nonatomic) int unrollCt; // @synthesize unrollCt=_unrollCt;
@property(nonatomic) struct GLKBigInt_s mask; // @synthesize mask=_mask;
@property(nonatomic) GLKShaderBlockNode *children; // @synthesize children=_children;
@property(nonatomic) GLKShaderBlockNode *next; // @synthesize next=_next;
@property(nonatomic) GLKShaderBlockNode *parent; // @synthesize parent=_parent;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *loopVar; // @synthesize loopVar=_loopVar;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (id)description;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

