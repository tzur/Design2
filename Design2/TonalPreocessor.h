// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TonalOperation, LTTexture;

/// Object responsible for processing tonal operations.
@interface TonalPreocessor : NSObject

/// Initializes with \c input the input texture and \c output the output texture. 
- (instancetype)initWithInputTexture:(LTTexture *)input outputTexture:(LTTexture *)output;
  
/// Objects that defines the processor values.
@property (strong, nonatomic) TonalOperation *tonalOperation;
  
@end

NS_ASSUME_NONNULL_END
