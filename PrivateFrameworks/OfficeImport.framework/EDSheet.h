/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWarnings, EDString, EDPageSetup, EDHeaderFooter, NSMutableArray, EDProcessors, EDWorkbook, ESDContainer, TSUPointerKeyDictionary, EDColorReference;

@interface EDSheet : OCDDelayedNode  {
    EDWorkbook *mWorkbook;
    EDString *mName;
    boolmHidden;
    boolmDisplayFormulas;
    boolmDisplayGridlines;
    boolmIsDialogSheet;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    TSUPointerKeyDictionary *mTextBoxMap;
    TSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

@property bool isDialogSheet;

+ (id)sheetWithWorkbook:(id)arg1;

- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)drawableEnumerator;
- (id)defaultGridlineColorReference;
- (void)setEscherDrawing:(id)arg1;
- (id)escherDrawing;
- (void)reduceMemoryIfPossible;
- (bool)isDialogSheet;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (id)edCommentForShape:(id)arg1;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (id)edTextBoxForShape:(id)arg1;
- (void)removeDrawableAtIndex:(unsigned int)arg1;
- (void)setDefaultGridlineColor:(id)arg1;
- (id)defaultGridlineColor;
- (void)doneWithNonRowContent;
- (void)setup;
- (id)headerFooter;
- (bool)isDisplayFormulas;
- (void)teardown;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (void)setDisplayGridlines:(bool)arg1;
- (void)setDisplayFormulas:(bool)arg1;
- (void)setIsDialogSheet:(bool)arg1;
- (void)applyProcessors;
- (id)warnings;
- (void)setPageSetup:(id)arg1;
- (id)pageSetup;
- (void)setHeaderFooter:(id)arg1;
- (void)addDrawable:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (id)processors;
- (id)drawables;
- (bool)isDisplayGridlines;
- (id)drawableAtIndex:(unsigned int)arg1;
- (unsigned int)drawableCount;
- (id)workbook;
- (void)setHidden:(bool)arg1;
- (bool)isHidden;

@end