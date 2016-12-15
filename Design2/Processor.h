// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

/// Object that responsible for processing input texture into output texture with respect to its
/// current values. Implementations of this protocol should define actual way of setting the input
/// and output texture and the adjusting the processor values.
@protocol Processor <NSObject>

/// Run the processor.
- (void)process;

/// Adapt the processor settings to the given \c operation settings. Each implementation should
/// only handle its own kind of operation.
- (void)updateValuesWithOperation:(id<Operation>)operation;

/// Process the given \c randerTask.
- (void)processRenderTask:(RenderTask *)renderTask;

/// Defines a binary texture that allows processing operation where the value is 1.
@property (strong, nonatomic) LTTexture *mask;
  
@end

NS_ASSUME_NONNULL_END
