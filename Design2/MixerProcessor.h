// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MixerOperation;

/// Object responsible for processing mixer operations.
@interface MixerProcessor : NSObject

/// Initializes with \c input texture and \c output the output texture;
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;
  
/// Objects that defines the processor values.
@property (strong, nonatomic) MixerOperation *mixerOperation;
  
@end

NS_ASSUME_NONNULL_END
