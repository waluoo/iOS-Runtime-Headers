/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DADataHandler : NSObject  {
    void *_container;
}

@property void* container;

+ (id)newDataHandlerForDataclass:(int)arg1 container:(void*)arg2;

- (void)dealloc;
- (int)dataclass;
- (id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3;
- (BOOL)closeDBAndSave:(BOOL)arg1;
- (void)openDB;
- (BOOL)wipeServerIds;
- (void)drainContainer;
- (struct __CFArray { }*)copyOfAllLocalObjectsInContainer;
- (BOOL)saveContainer;
- (void*)copyLocalObjectFromId:(int)arg1;
- (int)getIdFromLocalObject:(void*)arg1;
- (id)initWithContainer:(void*)arg1;
- (void)setContainer:(void*)arg1;
- (void*)container;

@end