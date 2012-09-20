/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@class JSONHTTPRequest, NSString;

@interface VUAuthenticator : NSObject <JSONHTTPRequestDelegate> {
    int _authenticatorState;
    NSString *_account;
    JSONHTTPRequest *_authenticationRequest;
}

@property(readonly) int authenticatorState;
@property(readonly) NSString * account;

+ (id)sharedAuthenticator;

- (int)authenticatorState;
- (void)invalidateAuthentication;
- (void)loadCredentials;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2;
- (void)_notifyFailure;
- (void)_notifyStateChange;
- (void)request:(id)arg1 didReceiveObject:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
- (id)account;

@end