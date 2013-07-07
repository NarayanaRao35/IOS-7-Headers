/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "RCCaptureAudioFileOutputRecordingDelegate.h"

@class AVCaptureConnection, AVCaptureSession, MPAudioDeviceController, NSDate, NSObject<OS_dispatch_queue>, NSString, RCAudioInputWaveformDataSource, RCCaptureAudioFileOutput, RCSavedRecording;

@interface RCAudioInputDevice : NSObject <RCCaptureAudioFileOutputRecordingDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureConnection *_captureConnection;
    RCCaptureAudioFileOutput *_captureAudioOutput;
    MPAudioDeviceController *_audioDeviceController;
    NSString *_pickedRouteName;
    RCSavedRecording *_activeRecording;
    NSDate *_pauseStartDate;
    double _totalPausedTime;
    double _duration;
    unsigned int _backgroundTaskIdentifier;
    int _recordingState;
    NSObject<OS_dispatch_queue> *_recordingsModelQueue;
    BOOL _audioInputAvailable;
    BOOL _interrupted;
    BOOL _lastRecordingDidStop;
    BOOL _recordingSampleBuffers;
    BOOL _waitingForCaptureSessionDidStart;
    BOOL _isInterrupted;
    id _sampleBufferHandlerBlock;
    RCAudioInputWaveformDataSource *_activeWaveformDataSource;
    NSDate *_recordingStartDate;
}

+ (id)sharedInputDevice;
@property(retain, nonatomic) NSDate *recordingStartDate; // @synthesize recordingStartDate=_recordingStartDate;
@property(readonly, nonatomic) BOOL isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(readonly, nonatomic) BOOL audioInputAvailable; // @synthesize audioInputAvailable=_audioInputAvailable;
@property(retain, nonatomic) RCAudioInputWaveformDataSource *activeWaveformDataSource; // @synthesize activeWaveformDataSource=_activeWaveformDataSource;
@property(copy, nonatomic) id sampleBufferHandlerBlock; // @synthesize sampleBufferHandlerBlock=_sampleBufferHandlerBlock;
- (void).cxx_destruct;
- (void)_setDisableSBMediaHUD:(BOOL)arg1;
- (BOOL)_openCaptureSessionAndWaitUntilRunning;
- (BOOL)_attachCaptureSessionDeviceInput;
- (void)_closeCaptureSession;
- (void)_handleRecordingDidFinishCapturing;
- (void)_handleRecordingDidFinishCapturingAfterCompletionSound;
- (void)_adjustDurationForPauseIfNecessary;
- (void)_updateAudioInputAvailable;
- (void)_beginRecordingWithRecordingOutputURL:(id)arg1;
- (void)_unregisterForCatpureSessionNotifications;
- (void)_registerForCatpureSessionNotifications;
- (void)_sessionErrored:(id)arg1;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_interruptionDidEnd:(id)arg1;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_availableModesDidChange:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2;
- (void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
@property(readonly, nonatomic) BOOL shouldSuspend;
@property(readonly, nonatomic) double elapsedRecordingTime;
- (void)endRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)_setPostPrepareRequestedState:(int)arg1;
- (BOOL)beginRecording;
- (BOOL)isPreparing;
@property(readonly, nonatomic) BOOL isPaused;
@property(readonly, nonatomic) BOOL isRecording;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
