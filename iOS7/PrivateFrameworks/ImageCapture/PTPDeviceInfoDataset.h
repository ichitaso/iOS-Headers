/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSString;

@interface PTPDeviceInfoDataset : NSObject
{
    NSMutableData *_content;
    _Bool _dirty;
    unsigned short _standardVersion;
    unsigned int _vendorExtensionID;
    unsigned short _vendorExtensionVersion;
    NSString *_vendorExtensionDescription;
    unsigned short _functionalMode;
    NSMutableArray *_operationsSupported;
    NSMutableArray *_eventsSupported;
    NSMutableArray *_devicePropertiesSupported;
    NSMutableArray *_captureFormats;
    NSMutableArray *_imageFormats;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_deviceVersion;
    NSString *_serialNumber;
    _Bool _readOnlyObject;
}

- (id)canonicalManufacturer;
- (void)setSerialNumber:(id)arg1;
- (id)serialNumber;
- (void)setDeviceVersion:(id)arg1;
- (id)deviceVersion;
- (void)setModel:(id)arg1;
- (id)model;
- (void)setManufacturer:(id)arg1;
- (id)manufacturer;
- (void)setImageFormats:(id)arg1;
- (id)imageFormats;
- (void)setCaptureFormats:(id)arg1;
- (id)captureFormats;
- (void)setDevicePropertiesSupported:(id)arg1;
- (id)devicePropertiesSupported;
- (void)setEventsSupported:(id)arg1;
- (id)eventsSupported;
- (void)setOperationsSupported:(id)arg1;
- (id)operationsSupported;
- (void)setFunctionalMode:(unsigned short)arg1;
- (unsigned short)functionalMode;
- (void)setVendorExtensionDescription:(id)arg1;
- (id)vendorExtensionDescription;
- (void)setVendorExtensionVersion:(unsigned short)arg1;
- (unsigned short)vendorExtensionVersion;
- (void)setVendorExtensionID:(unsigned int)arg1;
- (unsigned int)vendorExtensionID;
- (void)setStandardVersion:(unsigned short)arg1;
- (unsigned short)standardVersion;
- (id)description;
- (id)content;
- (void)updateContent;
- (void)dealloc;
- (id)initWithMutableData:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setContent:(id)arg1;
- (id)init;

@end

