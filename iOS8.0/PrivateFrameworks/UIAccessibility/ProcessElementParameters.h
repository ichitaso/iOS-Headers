//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ProcessElementParameters : NSObject
{
    BOOL _grouped;
    BOOL _onlyIncludeVisible;
    BOOL _forSpeakThis;
    BOOL _didCutOffElements;
    unsigned int _maximumNumberOfElements;
    CDUnknownBlockType _shouldAddElement;
}

@property(copy, nonatomic) CDUnknownBlockType shouldAddElement; // @synthesize shouldAddElement=_shouldAddElement;
@property(nonatomic) BOOL didCutOffElements; // @synthesize didCutOffElements=_didCutOffElements;
@property(nonatomic) unsigned int maximumNumberOfElements; // @synthesize maximumNumberOfElements=_maximumNumberOfElements;
@property(nonatomic) BOOL forSpeakThis; // @synthesize forSpeakThis=_forSpeakThis;
@property(nonatomic) BOOL onlyIncludeVisible; // @synthesize onlyIncludeVisible=_onlyIncludeVisible;
@property(nonatomic) BOOL grouped; // @synthesize grouped=_grouped;
- (void)dealloc;

@end

