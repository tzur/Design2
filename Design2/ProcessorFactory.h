// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Processor, Operation;

/// Object that is responsible for creating \c Processor from a \c Operation.
@interface ProcessorFactory : NSObject

/// Returns the appropriate \c Processor with respect to the given \c operation.
- (id<Processor>)processorWithOperation:(id<Operation>)operation;
  
@end

NS_ASSUME_NONNULL_END
