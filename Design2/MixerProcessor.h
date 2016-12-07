// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MixerOperation;

/// Object responsible for processing mixer operations.
@interface MixerProcessor : NSObject

/// Initializes with \c input texture and \c output the output texture;
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;
 
/// Secondary texture for blending.
@property (strong, nonatomic) LTTexture *secondaryTexture;

/// The alpha blending.
@property (nonatomic) CGFloat alpha;
  
@end

NS_ASSUME_NONNULL_END
