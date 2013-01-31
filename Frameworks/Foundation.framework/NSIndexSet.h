/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    struct { 
        unsigned int _isEmpty : 1; 
        unsigned int _hasSingleRange : 1; 
        unsigned int _cacheValid : 1; 
        unsigned int _reservedArrayBinderController : 29; 
    } _indexSetFlags;
    union { 
        struct { 
            struct _NSRange { 
                unsigned int location; 
                unsigned int length; 
            } _range; 
        } _singleRange; 
        struct { 
            void *_data; 
            void *_reserved; 
        } _multipleRanges; 
    } _internal;
}

+ (id)indexSetWithIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)indexSetWithIndex:(unsigned int)arg1;
+ (id)indexSet;
+ (id)indexSetWithIndexes:(const unsigned int*)arg1 count:(unsigned int)arg2;
+ (id)indexSetWithIndexes:(unsigned int)arg1;
+ (id)indexSetWithIndices:(unsigned int*)arg1 count:(unsigned int)arg2;

- (id)description;
- (unsigned int)hash;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (id)initWithIndexSet:(id)arg1;
- (void)enumerateIndexesUsingBlock:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)containsIndex:(unsigned int)arg1;
- (unsigned int)indexGreaterThanIndex:(unsigned int)arg1;
- (unsigned int)firstIndex;
- (Class)classForCoder;
- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateRangesUsingBlock:(id)arg1;
- (id)indexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesPassingTest:(id)arg1;
- (unsigned int)indexInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexPassingTest:(id)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (id)_numberEnumerator;
- (BOOL)intersectsIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)containsIndexes:(id)arg1;
- (unsigned int)indexLessThanOrEqualToIndex:(unsigned int)arg1;
- (unsigned int)indexGreaterThanOrEqualToIndex:(unsigned int)arg1;
- (unsigned int)indexLessThanIndex:(unsigned int)arg1;
- (void)enumerateRangesWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)indexesWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (unsigned int)indexWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)enumerateIndexesWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (BOOL)containsIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)_indexOfRangeContainingIndex:(unsigned int)arg1;
- (unsigned int)_indexClosestToIndex:(unsigned int)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3;
- (unsigned int)_indexOfRangeBeforeOrContainingIndex:(unsigned int)arg1;
- (unsigned int)_indexOfRangeAfterOrContainingIndex:(unsigned int)arg1;
- (BOOL)isEqualToIndexSet:(id)arg1;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (id)initWithIndexes:(const unsigned int*)arg1 count:(unsigned int)arg2;
- (unsigned int)_indexAtIndex:(unsigned int)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (unsigned int)__getContainmentVector:(out BOOL*)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)countOfIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)rangeCount;
- (unsigned int)lastIndex;
- (unsigned int)getIndexes:(unsigned int*)arg1 maxCount:(unsigned int)arg2 inIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithIndex:(unsigned int)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)pl_indexSetByExtractingIndexes:(id)arg1;
- (id)pl_shortDescription;
- (id)_gkIndexSetByAddingIndex:(int)arg1;
- (id)_gkIndexSetByRemovingIndex:(int)arg1;
- (BOOL)isSingleContiguousRange;
- (id)initWithIndices:(unsigned int*)arg1 count:(unsigned int)arg2;

@end