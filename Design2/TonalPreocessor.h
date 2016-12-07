// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TonalOperation, LTTexture;

/// Object responsible for processing tonal operations.
@interface TonalPreocessor : NSObject

/// Initializes with \c input the input texture and \c output the output texture. 
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;
  
/// The amount of brightness.
@property (nonatomic) CGFloat brightness;
 
/// The amount of contrast.
@property (nonatomic) CGFloat contrast;

/// The amount of saturation.
@property (nonatomic) CGFloat saturation;
  
@end

NS_ASSUME_NONNULL_END
