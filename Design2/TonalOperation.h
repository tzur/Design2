// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

@interface TonalOperation : NSObject <Operation>

/// Initialize with \c brightness the amount of brightness, \c contrast the amount of contrast
/// and \c saturation the amount of saturation.
- (instancetype)initWithBrightness:(CGFloat)brightness contrast:(CGFloat)contrast
                        saturation:(CGFloat)saturation;

@end

NS_ASSUME_NONNULL_END
