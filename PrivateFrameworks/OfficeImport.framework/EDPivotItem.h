/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDPivotItem : NSObject  {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (int)type;
- (void)dealloc;
- (id)init;
- (id)itemIndexes;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (unsigned int)repeatedItemCounts;
- (void)setType:(int)arg1;

@end