/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)broadcast;
- (void)wait;
- (BOOL)waitUntilDate:(id)arg1;
- (void)signal;
- (void)finalize;
- (void)unlock;
- (void)lock;

@end