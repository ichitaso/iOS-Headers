/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudServices/SecureBackup.h>

@interface SecureBackup (Internal)
- (void)_backupWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_changeSMSTargetWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_startSMSChallengeWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_uncachePassphraseWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_cachePassphraseWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_disableWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_recoverWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_enableWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)_getAccountInfoWithInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (id)_CreateSecureBackupConnection:(id)arg1;
@end

