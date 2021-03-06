/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKComposeRemoteViewController, GKUITheme, NSMutableArray, NSString;

@interface GKComposeHostedViewController : GKHostedViewController {
    NSMutableArray *_emailsToAddAsRecipients;
    NSMutableArray *_playerIDsToAddAsRecipients;
    unsigned int _rid;
    GKUITheme *_theme;
}

@property(readonly) GKComposeRemoteViewController * _remote;
@property(copy) NSString * defaultMessage;
@property(retain) NSMutableArray * emailsToAddAsRecipients;
@property(retain) NSMutableArray * playerIDsToAddAsRecipients;
@property unsigned int rid;
@property(retain) GKUITheme * theme;

- (id)_presentingViewController;
- (id)_remote;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)dealloc;
- (id)defaultMessage;
- (void)didGetRemoteViewController;
- (id)emailsToAddAsRecipients;
- (id)hostSideViewControllerClassName;
- (id)playerIDsToAddAsRecipients;
- (unsigned int)rid;
- (id)serviceSideViewControllerClassName;
- (void)setDefaultMessage:(id)arg1;
- (void)setEmailsToAddAsRecipients:(id)arg1;
- (void)setPlayerIDsToAddAsRecipients:(id)arg1;
- (void)setRid:(unsigned int)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
