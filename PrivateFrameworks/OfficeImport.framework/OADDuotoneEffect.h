/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect  {
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}


- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setTransferMode2:(int)arg1;
- (void)setTransferMode1:(int)arg1;
- (int)transferMode2;
- (int)transferMode1;
- (id)color2;
- (id)color1;
- (void)setColor2:(id)arg1;
- (void)setColor1:(id)arg1;
- (void)setStyleColor:(id)arg1;

@end