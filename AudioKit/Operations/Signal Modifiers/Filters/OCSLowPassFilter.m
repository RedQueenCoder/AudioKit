//
//  OCSLowPassFilter.m
//  Objective-C Sound
//
//  Auto-generated from scripts by Aurelius Prochazka on 11/6/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//
//  Implementation of Csound's tone:
//  http://www.csounds.com/manual/html/tone.html
//

#import "OCSLowPassFilter.h"

@interface OCSLowPassFilter () {
    OCSAudio *asig;
    OCSControl *khp;
}
@end

@implementation OCSLowPassFilter

- (instancetype)initWithAudioSource:(OCSAudio *)audioSource
                     halfPowerPoint:(OCSControl *)halfPowerPoint
{
    self = [super initWithString:[self operationName]];
    if (self) {
        asig = audioSource;
        khp = halfPowerPoint;
    }
    return self;
}

- (NSString *)stringForCSD {
    return [NSString stringWithFormat:
            @"%@ tone %@, %@",
            self, asig, khp];
}

@end