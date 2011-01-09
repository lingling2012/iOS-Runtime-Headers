/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */



@interface CKClientComposeService : CKService 
{
}


- (id)initWithServiceID:(id)arg1;
- (id)abPropertyTypes;
- (BOOL)isValidAddress:(id)arg1;
- (id)headerTitleForComposeRecipients:(id)arg1 mediaObjects:(id)arg2 subject:(id)arg3;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (id)copyEntityForAddressString:(id)arg1;
- (void)sendMessage:(id)arg1;

@end