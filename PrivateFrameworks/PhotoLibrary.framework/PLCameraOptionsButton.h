/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibrary/PLReorientingButton.h>

@class PLCameraOverlayButtonLabel;

@interface PLCameraOptionsButton : PLReorientingButton
{
    PLCameraOverlayButtonLabel *_titleLabel;
    PLCameraOverlayButtonLabel *_pressedTitleLabel;
}

- (void)setSelected:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isInButtonBar:(BOOL)arg2;

@end
