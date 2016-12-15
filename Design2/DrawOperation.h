// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

NS_ASSUME_NONNULL_BEGIN

@interface DrawOperation : NSObject

/// Create an object that perform a tonal operation on the processor.
/// operation is done subsquently.
/// Initialize with \c points represent the drawing, a linear line will be connected between two
/// points, \c color the line color and \c thickness the line thickness.
- (instancetype)initWithLinePoints:(NSArray<$(CGPoint)> *)points withColor:(NSString *)color
                         thickness:(CGFloat)thickness;
@end

NS_ASSUME_NONNULL_END
