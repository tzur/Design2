// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import "Operation.h"

NS_ASSUME_NONNULL_BEGIN

@class LTTexture;

/// Object representing an editing activity.
@interface Session : NSObject

/// Array of \c Operation objects performed in this session. Where the first \c Operation
/// is with index 0 .
@property (readonly, nonatomic) NSMutableArray<id<Operation>> *operations;

/// The \c LTTexture being worked on (as loaded) without the changes applied by the sequence of
/// operations.
@property (strong, nonatomic) LTTexture *originalTexture;

/// Index of the last performed \c Operation in this session. This index can be only in the range
/// (0, \c operations.count)
@property (nonatomic) NSUInteger currentOperation;

/// This object's unique identifier.
@property (readonly, nonatomic) NSString *sessionID;

@end

NS_ASSUME_NONNULL_END
