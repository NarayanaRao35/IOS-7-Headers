/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSManagedObject.h"

@class NSString;

@interface TDSlice : NSManagedObject
{
    struct CGRect _sliceRect;
}

- (void)awakeFromFetch;
@property(nonatomic) struct CGRect sliceRect; // @dynamic sliceRect;
@property(nonatomic) struct CGRect primitiveSliceRect;

// Remaining properties
@property(retain, nonatomic) NSString *sliceRectString; // @dynamic sliceRectString;

@end

