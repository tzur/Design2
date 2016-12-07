// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Yuval Dar.

NS_ASSUME_NONNULL_BEGIN

@interface OperationEntry : NSObject

/// Name of operation
@property (strong, nonatomic) NSString *operationName;

/// Dictionary for all the input needed for creating the operation.
@property (strong, nonatomic) NSDictionary *oprationInput;

@end

NS_ASSUME_NONNULL_END
