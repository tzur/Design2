// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@protocol Processor;

@class DrawOperation, LTVector2;

/// Object responsible for processing draw operations.
@interface DrawProcessor : NSObject <Processor>

/// Initializes with \c input texture and \c output the output texture;
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;

/// The processor will draw a line between the given \c startPoint to the given \c endPoint at the
/// given \c color and \c thickness.
/// The mapping is the following
- (void)addLineBetweenStartingPoint:(CGPoint)startPoint andEndPoint:(CGPoint)endPoint
                          withColor:(UIColor *)color andThickness:(CGFloat)thickness;

@end

NS_ASSUME_NONNULL_END
