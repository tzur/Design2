// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MainViewModel : NSObject

@class SessionLoadCompletion, SessionSaveCompletion;
  
/// Initialize with \c setssionIO object that deals with I/O of \c Session, \c proecessingManager
/// object that responsible for processing the texture and \c sessionManager object that responsible
/// for exposing API to a given session.
- (instancetype)intWithSessionIO:(SessionIO *)sessionIO
              sessionProcessor:(SessionProcessor *)sessionProcessor
                    sessionManager:(SessionManager *)sessionManager;

/// Undo the last operation.
- (void)undo;
  
/// Redo the last operation.
- (void)redo;

/// Loads a session with the given \c sessionID. The result will be at \c completion block.
- (void)loadSessionWithSessionId:(NSString *)sessionID completion:(SessionLoadCompletion)completion;
  
/// Creates a new session from the given \c image.
- (Session *)createNewSessionWithImage:(UIImage *)image;

/// Saves the current session. The result will be at \c completion block.
- (void)saveCurrentSessionWithCompletion:(SessionSaveCompletion)completion;
  
@end

NS_ASSUME_NONNULL_END
