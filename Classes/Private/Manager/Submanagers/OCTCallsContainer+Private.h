//
//  OCTCallsContainer+Private.h
//  objcTox
//
//  Created by Chuong Vu on 6/10/15.
//  Copyright (c) 2015 dvor. All rights reserved.
//

#import "OCTCallsContainer.h"

@interface OCTCallsContainer (Private)

- (void)addCall:(OCTCall *)call;
- (void)removeCall:(OCTCall *)call;
- (void)updateCall:(OCTCall *)call
       updateBlock:(void (^)(OCTCall *callToUpdate))updateBlock;
@end
