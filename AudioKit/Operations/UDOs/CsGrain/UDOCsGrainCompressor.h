//
//  UDOCompressor.h
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 6/22/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSStereoAudio.h"
#import "OCSParameter+Operation.h"

/** Stereo compressor from Boulanger Labs' csGrain application.
 Stereo audio input and output.
 
 The threshold will normally be 0 or less, but if higher the threshold will begin removing
 low-level signal energy such as background noise.
 
 A compression ratio value of 2 will advance the output just one decibel for every input gain of two;
 3 will advance just one in three; 20 just one in twenty, etc.
 
 Inverse ratios will cause signal expansion: .5 gives two for one, .25 four for one, etc.
 The value 1 will result in no change.
 */

@interface UDOCsGrainCompressor : OCSStereoAudio

/** Instantiates the compressor
 
 @param sourceStereo      Input to the left and right channels.
 @param dBThreshold       The lowest decibel level that will be allowed through.
 @param compressionRatio  The ratio of compression(>1) or exapansion(<1) when the signal level is above the knee.
 @param attackTime        The attack time in seconds. A typical value is 0.01 seconds.
 @param releaseTime       The release time in seconds. A typical value is 0.1 seconds.
 @return                  And instance of the compressor.
 */
- (instancetype)initWithSourceStereoAudio:(OCSStereoAudio *)sourceStereo
                                threshold:(OCSControl *)dBThreshold
                         compressionRatio:(OCSControl *)compressionRatio
                               attackTime:(OCSControl *)attackTime
                              releaseTime:(OCSControl *)releaseTime;

@end