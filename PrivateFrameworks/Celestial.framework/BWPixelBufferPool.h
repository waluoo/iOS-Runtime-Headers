/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWVideoFormat, NSDictionary, NSString;

@interface BWPixelBufferPool : NSObject {
    NSDictionary *_additionalPixelBufferAttributes;
    unsigned long long _capacity;
    NSString *_name;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    NSDictionary *_pixelBufferPoolAuxAttributes;
    int _pixelBufferPoolCreateError;
    long long _pixelBufferPoolOnce;
    BWVideoFormat *_videoFormat;
    bool_clientProvidesPool;
}

@property(readonly) unsigned long long capacity;
@property(readonly) struct __CVPixelBufferPool { }* cvPixelBufferPool;
@property(readonly) struct __CFDictionary { }* cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (int)_ensurePool;
- (unsigned long long)capacity;
- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (struct __CFDictionary { }*)cvPixelBufferPoolAuxAttributes;
- (void)dealloc;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(bool)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (struct __CVBuffer { }*)newPixelBuffer;
- (int)preallocate;
- (void)preallocateWithCompletionHandler:(id)arg1;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;

@end