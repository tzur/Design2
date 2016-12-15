// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

NS_ASSUME_NONNULL_BEGIN


@interface MixerOperation : NSObject


/// Initialize with \c alpha the amount of alpha blending, \c bounds the bounds of the mixer texture
/// and \c angle the angle of the mixer texture.
- (instancetype)initWithAlphaBlending:(CGFloat)alpha withBounds:(CGRect)bounds
                             andAngle:(CGFloat)angle;

@end

NS_ASSUME_NONNULL_END
