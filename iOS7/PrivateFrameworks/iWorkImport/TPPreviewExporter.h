/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TPRenderingExporter.h>

#import "TSKImageExporter-Protocol.h"

// Not exported
@interface TPPreviewExporter : TPRenderingExporter <TSKImageExporter>
{
}

@property(nonatomic) _Bool scaleToFit;
@property(nonatomic) unsigned long long height;
@property(nonatomic) unsigned long long width;
- (id)p_renderingExporterDelegate;

@end

