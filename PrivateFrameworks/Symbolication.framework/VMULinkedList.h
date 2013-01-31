/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMULinkedListEntry;

@interface VMULinkedList : NSObject  {
    VMULinkedListEntry *_head;
    VMULinkedListEntry *_tail;
}

+ (id)linkedList;

- (void)remove:(id)arg1;
- (id)head;
- (void)removeAllObjects;
- (id)init;
- (id)popTail;
- (void)pushHead:(id)arg1;
- (id)tail;

@end