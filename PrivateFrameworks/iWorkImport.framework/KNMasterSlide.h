/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNClassicStylesheetRecord, NSArray, NSString;

@interface KNMasterSlide : KNAbstractSlide <TSSThemeAsset, TSKTransformableObject> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSArray *mBodyListStyles;
    NSArray *mBodyParagraphStyles;
    KNClassicStylesheetRecord *mClassicStylesheetRecord;
    NSString *mName;
    } mObjectRect;
    NSString *mThumbnailTextForBodyPlaceholder;
    NSString *mThumbnailTextForTitlePlaceholder;
}

@property(copy) NSArray * bodyListStyles;
@property(copy) NSArray * bodyParagraphStyles;
@property(readonly) KNClassicStylesheetRecord * classicStylesheetRecord;
@property(retain) NSString * name;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } objectRect;
@property(retain) NSString * thumbnailTextForBodyPlaceholder;
@property(retain) NSString * thumbnailTextForTitlePlaceholder;

+ (void)initialize;
+ (id)masterGuideColor;
+ (id)p_defaultMasterGuideColor;
+ (void)setMasterGuideColor:(id)arg1;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)alignmentGuides;
- (id)alignmentGuidesForEditing;
- (id)bodyListStyles;
- (id)bodyParagraphStyles;
- (id)childEnumerator;
- (id)classicStylesheetRecord;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1 andSlideNode:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)generateObjectPlaceholderIfNecessary;
- (id)imagePlaceholders;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
- (BOOL)isObjectVisible;
- (BOOL)isThemeContent;
- (BOOL)isThemeEquivalent:(id)arg1;
- (SEL)mapThemeAssetSelector;
- (id)name;
- (id)nonPlaceholderObjects;
- (id)objectForProperty:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })objectRect;
- (id)p_defaultTagForDrawable:(id)arg1;
- (id)p_defaultThumbnailTextForPlaceholder:(id)arg1;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setBodyListStyles:(id)arg1;
- (void)setBodyParagraphStyles:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setThumbnailTextForBodyPlaceholder:(id)arg1;
- (void)setThumbnailTextForTitlePlaceholder:(id)arg1;
- (id)tagforNewPlaceholderInfo:(id)arg1;
- (id)thumbnailTextForBodyPlaceholder;
- (id)thumbnailTextForPlaceholder:(id)arg1;
- (id)thumbnailTextForTitlePlaceholder;
- (void)updatePlaceholderText;

@end
