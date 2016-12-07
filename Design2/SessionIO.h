// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// Object responsible for perform IO operations on \c Session objects.
@interface SessionIO : NSObject

/// Loads the \c Session with the given \c sessionID. After loading the \c Session successfuly
/// completion block is called with either the loaded session and nil error. In the case of error
/// in loading the \c Session , \c completion will be called with nil session and the error.
- (void)loadSession:(NSUInteger)sessionID
         completion:(void (^)(Session *, NSError *))completion;

/// Saves the given \c session, calls \c completion with either nil or an error message in the case
/// of either succesful or failed saving (in corrospondance).
- (void)saveSession:(Session *)session
         completion:(void (^)(NSError *))completion;


/// Returns a new editing \c Session with the given \c image .
- (Session *)createSessionFromImage:(UIImage *)image;


@end

NS_ASSUME_NONNULL_END
