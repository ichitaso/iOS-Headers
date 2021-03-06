/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfileConnection.h>

@interface MCProfileConnection (Deprecated)
- (void)setDelegate:(id)arg1;
- (id)profileFromProfileData:(id)arg1 outError:(id *)arg2;
- (id)queueProfileDataForAcceptance:(id)arg1 outError:(id *)arg2;
- (id)queueProfileForInstallation:(id)arg1 outError:(id *)arg2;
- (id)queueProfileDataForInstallation:(id)arg1 outError:(id *)arg2;
- (id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id *)arg3;
- (BOOL)isPasscodeRequiredByPolicy;
- (id)passcodeExpiryDate;
- (BOOL)validatePasscode:(id)arg1;
- (BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(char *)arg4 outEffectiveSettingsChanged:(char *)arg5 outError:(id *)arg6;
- (void)setPasscodeWasSetInBackup:(BOOL)arg1;
- (int)restrictedBoolValueForFeature:(id)arg1;
- (id)valueForFeature:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (int)effectiveRestrictedBoolValueForSetting:(id)arg1;
@end

