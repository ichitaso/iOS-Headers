/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WXOfficeArt.h>

@interface WXOfficeArt (Private)
+ (void)readVml:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;
+ (void)readWrapDistance:(struct _xmlNode *)arg1 parentElement:(struct _xmlNode *)arg2 state:(id)arg3 to:(id)arg4;
+ (void)readWrap:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;
+ (void)readPosition:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(_Bool)arg4;
+ (void)readClientData:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;
+ (void)readOAX:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;
@end

