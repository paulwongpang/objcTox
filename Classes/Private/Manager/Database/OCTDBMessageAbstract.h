//
//  OCTDBMessageAbstract.h
//  objcTox
//
//  Created by Dmytro Vorobiov on 24.04.15.
//  Copyright (c) 2015 dvor. All rights reserved.
//

#import "RLMObject.h"
#import "OCTDBFriend.h"
#import "OCTDBMessageText.h"
#import "OCTDBMessageFile.h"
#import "OCTMessageAbstract.h"

@interface OCTDBMessageAbstract : RLMObject

// Realm truncates an NSDate to the second. A fix for this is in progress.
// See https://github.com/realm/realm-cocoa/issues/875
@property NSTimeInterval dateInterval;
@property BOOL isOutgoing;
@property OCTDBFriend *sender;

/**
 * MessageAbstract should have on of the following properties.
 */
@property OCTDBMessageText *textMessage;
@property OCTDBMessageFile *fileMessage;

- (instancetype)initWithMessageAbstract:(OCTMessageAbstract *)message realm:(RLMRealm *)realm;

/**
 * Please note that OCTFriend isn't stored in database.
 * OCTMessageAbstract object will have sender with filled friendNumber and empty other fields.
 */
- (OCTMessageAbstract *)message;

@end
