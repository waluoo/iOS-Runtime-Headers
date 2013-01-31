/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableSet, NSString, NSMutableDictionary;

@interface CMArchiveManager : NSObject <OCCancelDelegate> {
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    unsigned int mPageCount;
    NSString *mPassphrase;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    float mCommitInterval;
    BOOL mAutoCommit;
}

@property(copy) NSString * passphrase;

+ (id)resourceTypeToMIME:(int)arg1;
+ (int)blipTypeToResourceType:(int)arg1;
+ (id)resourceTypeToExtension:(int)arg1;

- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;
- (void)setPassphrase:(id)arg1;
- (id)passphrase;
- (BOOL)isProgressive;
- (id)appendResourcePathToName:(id)arg1;
- (id)resourcePathPrefix;
- (void)setResourcePathPrefix:(id)arg1;
- (id)cssStylesheetString;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (int)resourceCount;
- (id)cachedPathForDrawable:(id)arg1;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)_validateData:(id)arg1 withType:(int*)arg2;
- (void)setAutoCommit:(BOOL)arg1;
- (void)setCommitInterval:(float)arg1;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithType:(int)arg1;
- (id)copyResourceWithName:(id)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (BOOL)isThumbnail;
- (BOOL)setIsOnPhone:(BOOL)arg1;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (BOOL)isOnPhone;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)setHTMLHeight:(int)arg1;
- (void)setHTMLWidth:(int)arg1;
- (void)setPageCount:(unsigned int)arg1;
- (unsigned int)pageCount;

@end