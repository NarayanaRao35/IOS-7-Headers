/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSInputStream;

@interface PBMessageStreamReader : NSObject
{
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned int _position;
}

@property(readonly) unsigned int position; // @synthesize position=_position;
@property Class classOfNextMessage; // @synthesize classOfNextMessage=_classOfNextMessage;
- (id)nextMessage;
- (void)dealloc;
- (id)initWithStream:(id)arg1;

@end
