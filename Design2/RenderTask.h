// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "RenderTask.h"

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

@class LTTexture;

/// Object that encapsulates series of operations to be preform on a single texture.
@interface RenderTask : NSObject

/// Initialize with \c operations the array of operations to render on the given \c texture.
- (instancetype)initWithOperationArray:(NSArray<id<Operation>> *)operations
                               texture:(LTTexture *)texture;

/// The operations to run on the \c texture. The order of the array matters.
@property (readonly, nonatomic) NSArray<id<Operation>> *operations;

/// The texture to start running the \c operations on.
@property (readonly, nonatomic) LTTexture *texture;
  
@end

NS_ASSUME_NONNULL_END
