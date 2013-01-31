/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotFieldItem : NSObject  {
    boolmChildItems;
    boolmExpanded;
    boolmCalculatedMember;
    boolmMissed;
    boolmHidden;
    boolmDetailsHidden;
    int mType;
    unsigned int mItemIndex;
}

+ (id)pivotFieldItem;

- (int)type;
- (id)init;
- (void)setItemIndex:(unsigned int)arg1;
- (unsigned int)itemIndex;
- (void)setDetailsHidden:(bool)arg1;
- (bool)detailsHidden;
- (void)setMissed:(bool)arg1;
- (bool)missed;
- (void)setCalculatedMember:(bool)arg1;
- (bool)calculatedMember;
- (void)setChildItems:(bool)arg1;
- (bool)childItems;
- (void)setExpanded:(bool)arg1;
- (bool)expanded;
- (bool)hidden;
- (void)setType:(int)arg1;
- (void)setHidden:(bool)arg1;

@end