// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TonalOperation : NSObject

/// Create an object that perform a tonal operation on the processor.
/// operation is done subsquently.
- (instancetype)initAndChangeTonalValueWithInput:(NSDictionary *)input;

/// Create an object with input that can be altered later.
- (instancetype)initTonalValueWithInput:(NSDictionary *)input;

@end

NS_ASSUME_NONNULL_END
