// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Operation;

@interface TextureOperation : NSObject <Operation>
  
- (instancetype)initWithTexture:(LTTexture *)texture;
  
@end

NS_ASSUME_NONNULL_END
