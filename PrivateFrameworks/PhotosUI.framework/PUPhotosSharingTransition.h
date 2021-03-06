/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotosSharingTransitionDelegate>, PUPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController<PUPhotosSharingTransitionViewController>;

@interface PUPhotosSharingTransition : PUModalTransition {
    UICollectionViewLayout *__transitionLayout;
    <PUPhotosSharingTransitionDelegate> *_delegate;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    UIViewController<PUPhotosSharingTransitionViewController> *_sharingTransitionViewController;
}

@property(setter=_setTransitionLayout:,retain) UICollectionViewLayout * _transitionLayout;
@property <PUPhotosSharingTransitionDelegate> * delegate;
@property(retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;
@property(retain) UIViewController<PUPhotosSharingTransitionViewController> * sharingTransitionViewController;

- (void).cxx_destruct;
- (void)_setTransitionLayout:(id)arg1;
- (id)_transitionLayout;
- (void)animateDismissTransition;
- (void)animatePresentTransition;
- (id)delegate;
- (id)photosSharingTransitionContext;
- (void)setDelegate:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setSharingTransitionViewController:(id)arg1;
- (id)sharingTransitionViewController;

@end
