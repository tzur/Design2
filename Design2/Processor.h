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

/// Adapt the processor settings to the given \c operation settings. It have no effect on settings
/// that do not appear at \c operation.
- (void)updateValuesWithOperation:(id<Operation>)operation;
  
@end

NS_ASSUME_NONNULL_END
