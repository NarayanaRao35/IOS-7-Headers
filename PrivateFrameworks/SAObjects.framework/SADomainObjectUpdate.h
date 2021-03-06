/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SADomainObjectCommand.h"

@class SADomainObject;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectUpdate;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SADomainObject *setFields;
@property(retain, nonatomic) SADomainObject *removeFields;
@property(retain, nonatomic) SADomainObject *identifier;
@property(retain, nonatomic) SADomainObject *addFields;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

