// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Processor;

@class MixerOperation;

/// Object responsible for processing mixer operations.
@interface MixerProcessor : NSObject <Processor>

/// Initializes with \c input texture and \c output the output texture;
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;
 
/// Secondary texture for blending.
@property (strong, nonatomic) LTTexture *secondaryTexture;

/// The alpha blending.
@property (nonatomic) CGFloat alpha;

/// The angle of the seconday texture, the angle is in radians from Y axis.
@property (nonatomic) CGFloat angle;

/// The bounds of the secondary texture.
@property (nonatomic) CGRect bounds;

@end

NS_ASSUME_NONNULL_END
