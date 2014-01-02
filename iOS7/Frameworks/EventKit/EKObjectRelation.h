/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKObject, NSString;

// Not exported
@interface EKObjectRelation : NSObject
{
    EKObject *_owner;
    NSString *_relationName;
    _Bool _dirty;
    _Bool _loaded;
    NSString *_inverseName;
}

@property(readonly, nonatomic) NSString *inverseName; // @synthesize inverseName=_inverseName;
@property(readonly, nonatomic) NSString *relationName; // @synthesize relationName=_relationName;
@property(readonly, nonatomic) EKObject *owner; // @synthesize owner=_owner;
- (void)_removeRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;
- (void)_addRelatedObject:(id)arg1 setInverse:(_Bool)arg2 dirty:(_Bool)arg3;
- (id)committedValue;
- (_Bool)validate:(id *)arg1;
- (void)relatedObjectDidChange;
- (_Bool)isDirty;
- (void)didCommit;
- (void)refresh;
- (void)rollback;
- (void)reset;
- (void)updatePersistentObject;
- (_Bool)isWeak;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;

@end

