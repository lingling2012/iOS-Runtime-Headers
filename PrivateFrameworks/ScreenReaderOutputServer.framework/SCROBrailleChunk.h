/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSMutableAttributedString, NSString;

@interface SCROBrailleChunk : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _brailleSelection;
    NSMutableAttributedString *_brailleString;
    int _contractionMode;
    BOOL _hasTextSelection;
    BOOL _isFocused;
    BOOL _isTechnical;
    NSString *_language;
    BOOL _showDotsSevenAndEight;
    BOOL _showEightDot;
    NSString *_text;
    } _textSelection;
    int _token;
}

@property(readonly) NSString * language;

+ (void)initialize;

- (id)_tableIdentifierForLanguage:(id)arg1;
- (void)_translateAsLiteraryTextWithPrimaryTable:(BOOL)arg1;
- (void)_translateAsTechnicalTextWithPrimaryTable:(BOOL)arg1;
- (id)brailleWithIBeamLocation:(int*)arg1 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)focused;
- (BOOL)hasSelection;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 token:(int)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8 technical:(BOOL)arg9;
- (id)initWithText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 token:(int)arg4 focused:(BOOL)arg5 contractionMode:(int)arg6 showEightDot:(BOOL)arg7 showDotsSevenAndEight:(BOOL)arg8;
- (BOOL)isFocusedOrSelected;
- (id)language;
- (int)locationForIndex:(int)arg1;
- (int)token;
- (void)translate;

@end
