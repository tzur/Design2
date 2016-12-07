// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import "OperationEntry.h"

NS_ASSUME_NONNULL_BEGIN

/// Protocal for object implementing operations on textures
@protocol Operation <NSObject>

/// Updates the operation so it would do the revese operation. Return \c YES if succeeds, \c NO if
/// not.
- (BOOL)reverseOperation:(NSDictionary *)input;

/// Checks if \c operation can be aggregated into \c self. return \c YES and aggregate if it does,
/// \c NO if doesn't.
- (BOOL)aggregateOperationWith:(OperationEntry *)operation;

/// Return an \c OperationEntry for updating the session.
- (OperationEntry *)getOperationEntry;

/// Return \c YES if operation is reversable, \c NO if not.
- (BOOL)isOperationReversable;

/// Performs the operation
- (void)operate;
@end

NS_ASSUME_NONNULL_END
