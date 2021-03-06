/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIWishlistDelegate>, SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, UIBarButtonItem, _UIBackdropView, _UIContentUnavailableView;

@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate> {
    _UIBackdropView *_backdropView;
    <SKUIWishlistDelegate> *_delegate;
    UIBarButtonItem *_deleteButton;
    BOOL _editing;
    _UIContentUnavailableView *_emptyWishlistView;
    SKUIItemListTableViewController *_itemListViewController;
    BOOL _reloadOnNextAppear;
    SKUISyncWishlistOperation *_syncOperation;
    SKUIWishlist *_wishlist;
    int _wishlistState;
}

@property <SKUIWishlistDelegate> * delegate;

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (void)_deleteItemsAtIndexPaths:(id)arg1;
- (void)_destroyEmptyWishlistView;
- (void)_doneAction:(id)arg1;
- (id)_emptyWishlistView;
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishSyncWithResult:(BOOL)arg1 didChange:(BOOL)arg2 error:(id)arg3;
- (BOOL)_isEditingEnabled;
- (id)_itemListViewController;
- (void)_reloadChildView;
- (void)_reloadForAccountsChanged;
- (void)_reloadNavigationBarAnimated:(BOOL)arg1;
- (void)_reloadWishlist;
- (void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_signInAction:(id)arg1;
- (void)_syncWishlist;
- (void)_toggleEditAction:(id)arg1;
- (void)_updateDeleteButton;
- (id)_wishlist;
- (void)_wishlistDidChangeNotification:(id)arg1;
- (int)_wishlistState;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end
