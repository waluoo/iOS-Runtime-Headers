/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageBody, MutableMessageHeaders;

@interface OutgoingMessage : MailMessage  {
    MessageBody *_messageBody;
    MutableMessageHeaders *_messageHeaders;
}


- (id)headers;
- (void)dealloc;
- (id)headersIfAvailable;
- (void)setMutableHeaders:(id)arg1;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageData;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (id)messageStore;
- (void)setMessageBody:(id)arg1;
- (id)mutableHeaders;
- (unsigned int)messageSize;

@end