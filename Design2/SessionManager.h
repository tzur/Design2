// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

@class RenderTask;

/// Object responsible for handling of \c Session objects .
@interface SessionManager : NSObject

/// Replaces the current \c Session being worked on.
- (void)replaceWorkingSession:(Session *)session;

/// Adds editing \c operation to the session being worked on.
- (void)addOperation:(id<Operation>)operation;

/// Undo last performed operation in currently worked on \c Session.
- (RenderTask *)undoOperation;

/// Redo last undone operation in currently worked on \c Session.
- (RenderTask *)redoOperation;

///Returns \c RenderTask object that contains an \c LTTexture and \c NSArray<id<Operation>> that
// activating the operations on the texture will give the desire texture.
- (RenderTask *)renderTask;

/// Returns all the operations of the current session.
- (NSArray<id<Operation>> *)operations;

@end

NS_ASSUME_NONNULL_END

