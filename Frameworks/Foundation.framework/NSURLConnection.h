/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLConnectionInternal, NKAssetDownload;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal *_internal;
}

@property(readonly) NKAssetDownload * newsstandAssetDownload;

+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (void)_setSweeperInterval:(unsigned int)arg1;
+ (unsigned int)_sweeperInterval;
+ (BOOL)canHandleRequest:(id)arg1;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
+ (void)_resourceLoadLoop:(id)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;
+ (void)HS_sendAsynchronousRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)setDefersCallbacks:(BOOL)arg1;
- (BOOL)defersCallbacks;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)start;
- (id)_cfInternal;
- (id)_dlInternal;
- (id)connectionProperties;
- (void)download;
- (void)setDelegateQueue:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)currentRequest;
- (id)originalRequest;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)newsstandAssetDownload;

@end