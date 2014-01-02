/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVChat.h>

@interface IMAVChat (Lookup_Private)
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(_Bool)arg2;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_acceptedChats;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_outgoingInvitations;
+ (id)_incomingInvitations;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_chatListLock;
+ (id)_nonFinalChat;
+ (id)_activeChat;
+ (id)_connectedChat;
+ (id)_chatList;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_avChatArray;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)acceptedChats;
+ (id)connectedChats;
+ (id)connectingChats;
+ (id)outgoingInvitations;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)activeChat;
+ (id)connectedChat;
+ (id)chatList;
@end

