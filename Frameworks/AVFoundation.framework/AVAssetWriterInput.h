/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVAssetWriterInputHelper, NSDictionary, AVWeakReference, AVAssetWriterInputInternal;

@interface AVAssetWriterInput : NSObject  {
    AVAssetWriterInputInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property(readonly) NSDictionary * outputSettings;
@property(copy) NSArray * metadata;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property BOOL expectsMediaDataInRealTime;
@property(retain) struct opaqueCMFormatDescription { }* sampleBufferFormatHint;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(getter=_status,readonly) int status;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (BOOL)_isAttachedToPixelBufferAdaptor;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (void)markAsFinished;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (BOOL)isReadyForMoreMediaData;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (id)_sourcePixelBufferAttributes;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setSampleBufferFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (struct opaqueCMFormatDescription { }*)sampleBufferFormatHint;
- (id)_weakReferenceToAssetWriter;
- (void)_transitionToTerminalStatus:(int)arg1;
- (BOOL)_prepareToFinishWritingReturningError:(id*)arg1;
- (void)_prepareToEndSession;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (BOOL)expectsMediaDataInRealTime;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (void)_setHelper:(id)arg1;
- (id)outputSettings;
- (int)_status;
- (id)_helper;
- (void)finalize;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (id)mediaType;
- (void)setMetadata:(id)arg1;
- (id)metadata;

@end
