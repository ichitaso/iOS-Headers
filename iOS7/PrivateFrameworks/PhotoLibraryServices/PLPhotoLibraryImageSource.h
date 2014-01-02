/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLImageSource.h>

@interface PLPhotoLibraryImageSource : PLImageSource
{
    int _imageFormat;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)newImageForAsset:(id)arg1 createMetadata:(id *)arg2;
- (id)description;
@property(readonly, nonatomic) int imageFormat;
- (unsigned short)sourceIdentifier;
- (id)initWithImageFormat:(int)arg1;

@end

