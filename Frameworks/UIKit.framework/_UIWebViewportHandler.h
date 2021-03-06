/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIWebViewportHandlerDelegate>;

@interface _UIWebViewportHandler : NSObject {
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        boolallowsUserScaling; 
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        boolallowsUserScaling; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _availableViewSize;
    BOOL _classicViewportMode;
    } _configuration;
    } _defaultConfiguration;
    <_UIWebViewportHandlerDelegate> *_delegate;
    } _documentBounds;
    BOOL _initialConfigurationHasBeenSentToDelegate;
    unsigned int _webkitDefinedConfigurationFlags;
}

@property(readonly) BOOL allowsUserScaling;
@property(readonly) struct CGSize { float x1; float x2; } availableViewSize;
@property(getter=isClassicViewportMode,readonly) BOOL classicViewportMode;
@property <_UIWebViewportHandlerDelegate> * delegate;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property(readonly) float initialScale;
@property(readonly) float maximumScale;
@property(readonly) float minimumScale;
@property(readonly) struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; } rawViewConfiguration;
@property(readonly) unsigned int webkitDefinedConfigurationFlags;

- (id).cxx_construct;
- (BOOL)allowsUserScaling;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize { float x1; float x2; })arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5;
- (struct CGSize { float x1; float x2; })availableViewSize;
- (void)clearWebKitViewportConfigurationFlags;
- (id)delegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (float)initialScale;
- (float)integralInitialScale;
- (float)integralScaleForScale:(float)arg1 keepingPointFixed:(struct CGPoint { float x1; float x2; }*)arg2;
- (BOOL)isClassicViewportMode;
- (float)maximumScale;
- (float)minimumScale;
- (float)minimumScaleForViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)overrideViewportConfiguration:(struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; }*)arg1;
- (struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; })rawViewConfiguration;
- (void)resetViewportConfiguration:(struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; }*)arg1;
- (void)setAvailableViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)update:(id)arg1;
- (float)viewportHeight;
- (float)viewportWidth;
- (unsigned int)webkitDefinedConfigurationFlags;

@end
