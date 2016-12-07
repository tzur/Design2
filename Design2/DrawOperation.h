// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

NS_ASSUME_NONNULL_BEGIN

@interface DrawOperation : NSObject

/// Create an object that perform a tonal operation on the processor.
/// operation is done subsquently.
- (instancetype)initAndDrawWithInput:(NSDictionary *)input;

@end

NS_ASSUME_NONNULL_END
