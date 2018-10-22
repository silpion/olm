/*
 Copyright 2018 New Vector Ltd

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0OLMPKEncryption
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "OLMPkMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface OLMPkEncryption : NSObject

/**
 Set the recipient's public key for encrypting to.

 @param recipientKey the recipient's public key.
 */
- (void)setRecipientKey:(NSString*)recipientKey;

/**
 Encrypt a plaintext for the recipient.

 @param message the message to encrypt.
 @param error the error if any.
 @return the encrypted message.
 */
- (OLMPkMessage *)encryptMessage:(NSString*)message error:(NSError* _Nullable *)error;

@end

NS_ASSUME_NONNULL_END
