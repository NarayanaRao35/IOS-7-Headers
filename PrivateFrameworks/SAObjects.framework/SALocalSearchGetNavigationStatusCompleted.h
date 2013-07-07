/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSNumber, NSString, SALocalSearchAceNavigationEta, SALocalSearchRoute;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNavigationStatusCompleted;
@property(retain, nonatomic) SALocalSearchRoute *route;
@property(retain, nonatomic) SALocalSearchAceNavigationEta *overallEta;
@property(retain, nonatomic) SALocalSearchAceNavigationEta *nextManeuverEta;
@property(retain, nonatomic) NSNumber *navigating;
@property(retain, nonatomic) NSNumber *etaInMinutes;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end
