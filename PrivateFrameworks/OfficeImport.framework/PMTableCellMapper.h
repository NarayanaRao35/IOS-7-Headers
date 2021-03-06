/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class CMStyle, OADTableCell;

__attribute__((visibility("hidden")))
@interface PMTableCellMapper : CMMapper
{
    OADTableCell *mCell;
    CMStyle *mStyle;
    int mColIndex;
    unsigned int mRowIndex;
    float mWidth;
}

- (float)widthWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;
- (id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned int)arg2 columnIndex:(int)arg3 parent:(id)arg4;
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(int)arg2;
- (void)mapBordersWithState:(id)arg1;
- (id)rowMapper;
- (id)tableMapper;

@end

