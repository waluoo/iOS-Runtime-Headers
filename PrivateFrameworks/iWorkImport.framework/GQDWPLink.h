/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;

@interface GQDWPLink : GQDWPInlineList  {
    GQDSStyle *mCharStyle;
    struct __CFString { } *mHref;
}


- (id)characterStyle;
- (int)readStyleFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct __CFString { }*)href;
- (void)dealloc;

@end