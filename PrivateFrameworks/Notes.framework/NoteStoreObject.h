/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Notes/NoteCollectionObject.h>

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject
{
}

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)predicateForNotes;
- (unsigned int)maximumServerIntId;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NoteAccountObject *account; // @dynamic account;
@property(retain, nonatomic) NSSet *changes; // @dynamic changes;
@property(retain, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *syncAnchor; // @dynamic syncAnchor;

@end
