// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.


NS_ASSUME_NONNULL_BEGIN

/// Object responsible for handling of \c Session objects .
@interface SessionManager : NSObject

/// Replaces the current \c Session being worked on.
- (void)replaceWorkingSession:(Session *)session;

/// Adds editing \c operation to the session being worked on.
- (void)addOperation:(Operation *)operation;

/// Undo last performed operation in currently worked on \c Session.
- (Operation *)undoOperation;

/// Redo last undone operation in currently worked on \c Session.
- (Operation *)redoOperation;

/// Returns an \c NSArray of \c Operation objects applied on the working \c Session
- (NSArray<Operation *> *)operationsSequence;

/// Returns the original \c LTTexture being worked on.
- (LTTexture *)originalTexture;

@end

NS_ASSUME_NONNULL_END

/// TODO: textureOperation, ViewModel.
