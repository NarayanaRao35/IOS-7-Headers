/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GeoServices/GEOSearchProvider.h>

#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    id _finished;
    id _spellingSuggestion;
    id _refinement;
    BOOL _cancelled;
}

+ (id)_searchURLForRequest:(id)arg1;
+ (unsigned short)provider;
+ (void)setUsePersistentConnection:(BOOL)arg1;
+ (int)defaultLocalSearchProviderID;
+ (int)localSearchProviderID;
+ (void)_resetURL;
+ (id)searchProviderURL;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)cancel;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(void)arg5 refinement:(id)arg6 error:(void)arg7 isCompletions:(id)arg8;
- (void)dealloc;
- (id)init;

@end
