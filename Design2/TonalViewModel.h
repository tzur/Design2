// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TonalPreocessor, SessionManager;

@interface TonalViewModel : NSObject

/// Initializes with the given \c processor.
- (instancetype)initWithSessionManager:(SessionManager *)sessionManager
                        tonalProcessor:(TonalPreocessor *)tonalProcessor;

- (void)processOperationArray:(NSArray<TonalOperation *> *)operations;

/// Undo the last operation.
- (void)undo;

/// The current amount of brightnesss at the view. Change of this value will result in changing \c
/// processor brightness.
@property (nonatomic) CGFloat brightness;
 
/// The current amount of contrast at the view. Change of this value will result in changing \c
/// processor contrast.
@property (nonatomic) CGFloat contrast;

/// The current amount of saturation at the view. Change of this value will result in changing \c
/// processor saturation.
@property (nonatomic) CGFloat saturation;
  
@end

NS_ASSUME_NONNULL_END
