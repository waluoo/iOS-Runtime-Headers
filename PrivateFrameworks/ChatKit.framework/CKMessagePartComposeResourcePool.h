/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagePartComposeResourcePool : NSObject  {
}

+ (void)removeComposeImagesWithID:(id)arg1 forProvider:(int)arg2;
+ (void)addComposeImages:(id)arg1 withID:(id)arg2 forProvider:(int)arg3;
+ (void)removeAllPartsForProviderID:(int)arg1;
+ (void)relinquishProviderID:(int)arg1;
+ (int)requestProviderID;
+ (id)composeImagesWithPartID:(id)arg1 providerID:(int)arg2;


@end