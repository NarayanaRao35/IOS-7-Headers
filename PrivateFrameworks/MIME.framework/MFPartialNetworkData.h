/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData;

@interface MFPartialNetworkData : NSObject
{
    NSMutableData *_rawData;
    NSMutableData *_unixData;
}

- (void)purgeCaches;
- (void)dealloc;
- (id)copyDataWithUnixLineEndings;
- (id)dataWithUnixLineEndings;
- (unsigned int)rawDataLength;
- (id)rawData;
- (void)setRawData:(id)arg1;
- (void)appendRawData:(id)arg1;

@end

