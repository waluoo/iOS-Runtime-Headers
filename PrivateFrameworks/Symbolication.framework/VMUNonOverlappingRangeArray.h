/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUNonOverlappingRangeArray : VMURangeArray  {
}


- (struct _VMURange { unsigned long long x1; unsigned long long x2; })largestUnusedWithInUse:(id)arg1;
- (id)subtract:(id)arg1 mergeRanges:(BOOL)arg2;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (void)mergeRanges:(id)arg1;
- (void)sortAndMergeRanges;
- (void)_mergeAllBitsOfRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3;
- (void)mergeRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 excludingRanges:(id)arg2;
- (void)mergeRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;

@end