//
//  FLSuccessfulResult.h
//  FishLampCocoa
//
//  Created by Mike Fullerton on 6/23/13.
//  Copyright (c) 2013 Mike Fullerton. All rights reserved.
//

#import "FishLampCore.h"

@interface FLSuccessfulResult : NSObject
+ (id) successfulResult;
@end

#define FLSuccess [FLSuccessfulResult successfulResult]