// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

@class LTTexture, ProcessorFactory;

/// Object that is responsible for activate the appropriate processors with respect to its given
/// \c Operation array. This object will feed the processors input texture with its latest output
/// texture.
@interface SessionProcessor : NSObject
  
/// Initialize with \c output that is the texture to write to.
- (instancetype)initWithOutputTexture:(LTTexture *)output;
  
/// run the given \c operations at there appropriate processor on the given \c input texture. The
/// \c operation[i+1] is performed on the texture outputed by \c operations[i] .
- (void)processOperationArray:(NSArray<id<Operation>> *)operations
               onInputTexture:(LTTexture *)input;

/// Process the given \c operation on the current texture with the appropriate processor.
- (void)processOperation:(id<Operation>)operation;
  
@end

NS_ASSUME_NONNULL_END
