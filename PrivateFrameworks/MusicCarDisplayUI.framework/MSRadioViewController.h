/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicCarDisplayUI/MSTableViewController.h>

#import "RURadioDataSourceDelegate.h"

@class NSArray, NSString, RURadioDataSource;

@interface MSRadioViewController : MSTableViewController <RURadioDataSourceDelegate>
{
    RURadioDataSource *_dataSource;
    NSArray *_featuredStations;
    NSArray *_myStations;
    NSString *_featuredStationNamesBrief;
}

- (void).cxx_destruct;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)radioDataSourceDidInvalidate:(id)arg1;
- (id)stationFromIndexPath:(id)arg1;
- (void)categorizeStations;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;

@end

