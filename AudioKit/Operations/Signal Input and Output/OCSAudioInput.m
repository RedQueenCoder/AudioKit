//
//  OCSAudioInput.m
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 7/22/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSAudioInput.h"

@implementation OCSAudioInput

- (instancetype)init {
    self = [super initWithString:[self operationName]];
    return self; 
}

- (NSString *)stringForCSD {
    return [NSString stringWithFormat:@"%@, aUnused ins", self];
}

@end