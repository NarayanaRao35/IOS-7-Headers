/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SSAccount;

@interface SUScriptAccount : SUScriptObject
{
    SSAccount *_account;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setServiceType:(int)arg1 enabled:(id)arg2;
- (void)_commitChanges;
@property(retain) id socialEnabled;
@property(retain) id purchaseHistoryEnabled;
@property(retain) id lockerEnabled;
@property(copy) NSString *kind;
@property(copy) NSString *identifier;
@property(retain) NSNumber *dsID;
@property(copy) NSString *credits;
@property(readonly, getter=isPrimaryLockerAccount) id primaryLockerAccount;
- (id)_className;
- (void)setSecureToken:(id)arg1;
- (BOOL)isSecureTokenValid;
- (BOOL)isPrimaryAccount;
@property(retain) SSAccount *account;
- (void)dealloc;
- (id)init;

@end

