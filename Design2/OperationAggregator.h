// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

/// Object that repsonsible for aggeragating operations objects.
@interface OperationAggregator : NSObject

/// Returns an aggregation of the given \c operations. All operations must be of the same class. On
/// error returns \c nil.
+ (id<Operation> _Nullable)aggregateOperationArray:(NSArray<id<Operation>> *)operations;
  
@end

NS_ASSUME_NONNULL_END
