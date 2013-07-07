/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject
{
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;
- (id)_postProcessingVideoLayers;
- (id)_postProcessingRootLayer;
- (BOOL)_hasPostProcessingLayers;
- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (void)finalize;
- (void)dealloc;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;

@end
