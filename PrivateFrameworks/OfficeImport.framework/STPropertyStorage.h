/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface STPropertyStorage : NSObject
{
    struct _SsrwPropertyStorage *m_pPropertyStorage;
}

- (void)setBlobDocumentPropertyWithName:(id)arg1 to:(id)arg2;
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2;
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2;
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(long)arg2;
- (void)setDocumentPropertyWithId:(int)arg1 to:(id)arg2;
- (id)getDocumentPropertyWithName:(id)arg1 propType:(int *)arg2;
- (id)getStringDocumentPropertyWithId:(int)arg1;
- (short)getShortDocumentPropertyWithId:(int)arg1;
- (long)getLongDocumentPropertyWithId:(int)arg1;
- (id)getDocumentPropertyWithId:(int)arg1 propType:(int *)arg2;
- (void)dealloc;
- (void)close;
- (id)initWithPropertyStorage:(struct _SsrwPropertyStorage *)arg1;

@end
