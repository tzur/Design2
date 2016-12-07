// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@class DrawOperation, LTVector2;

/// Object responsible for processing draw operations.
@interface DrawProcessor : NSObject

/// Initializes with \c input texture and \c output the output texture;
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;

/// The current start point of the draw.
@property (strong, nonatomic) CGPoint startingPoint;

/// The current end point of the draw.
@property (strong, nonatomic) CGPoint endPoint;

/// The color of the draw.
@property (strong, nonatomic) CGColor color;
  
/// The draw thickness.
@property (strong, nonatomic) CGFloat thickness;

@end

NS_ASSUME_NONNULL_END
