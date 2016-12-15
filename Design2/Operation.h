// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.


NS_ASSUME_NONNULL_BEGIN

/// Protocal for object implementing operations on textures
@protocol Operation <NSObject>

/// Holds all the needed values for preforming this operation.
@property (readonly, nonatomic) NSDictionary *operationValues;
  
@end

NS_ASSUME_NONNULL_END
