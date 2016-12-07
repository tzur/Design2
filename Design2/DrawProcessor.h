// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class DrawOperation;

/// Object responsible for processing draw operations.
@interface DrawProcessor : NSObject

/// Initializes with \c input texture and \c output the output texture;
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;
  
/// Objects that defines the processor values.
@property (strong, nonatomic) DrawOperation *mixerOperation;
  
@end

NS_ASSUME_NONNULL_END
