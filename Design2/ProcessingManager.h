// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

@class LTTexture, ProcessorFactory;

/// Object that is responsible for activate the appropriate processors with respect to its given
/// \c Operation array. This object will feed the processors input texture with its latest output
/// texture.
@interface ProcessingManager : NSObject
  
/// Initialize with \c processorFactory an object that creates processors from a given operation
///\c output that is the texture to write to.
- (instancetype)initWithProcessorFactory:(ProcessorFactory *)processorFactory
                           OutputTexture:(LTTexture *)output;
  
/// run the given \c operations at there appropriate processor on the given \c input texture. The
/// \c operation[i] output texture is the \c operations[i+1] input texture.
- (void)processOperationArray:(NSArray<id<Operation>> *)operations
               onInputTexture:(LTTexture *)input;

/// Process the given \c operation on the current texture with the appropriate processor.
- (void)processOperation:(id<Operation>)operation;
  
@end

NS_ASSUME_NONNULL_END
