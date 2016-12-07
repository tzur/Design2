// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

NS_ASSUME_NONNULL_BEGIN

@interface MixerOperation : NSObject


/// Initialize with \c texture the texture to user mixer with and \c alpha.
- (instancetype)initWithTexture:(LTTexture *)texture alphaBlending:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
