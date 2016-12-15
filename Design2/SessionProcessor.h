// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Processor;

@class LTTexture, ProcessorFactory, RebderTask;

/// Process completion block. On error \c outputTexture will be nil and \c error will be set.
typedef void (^ProcessOperationCompletion)(LTTexture * _Nullable outputTexture,
                                            NSError * _Nullable error);
/// Object that is responsible for activate the appropriate processors with respect to its given
/// \c Operation array. This object will feed the processors input texture with its latest output
/// texture.
@interface SessionProcessor : NSObject <Processor>
  
/// Initialize with \c output that is the texture to write to.
- (instancetype)initWithProcessorFactory:(ProcessorFactory *)processorFactory
                           OutputTexture:(LTTexture *)output;
  
@end

NS_ASSUME_NONNULL_END

/// TODO: completion.
/// TODO: inject processors.
/// TODO: undo inside feature, outside feature.
/// TODO: Draw - array? alpha blend? fix the processor.
/// My opinion Mixer - should be save as texture always.
/// Mask drawing?
