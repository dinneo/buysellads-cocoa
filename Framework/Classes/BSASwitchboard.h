/*
 * AppController.h
 * Classes
 * 
 * Created by Gregory Barchard on 23/09/2010.
 * 
 * Copyright (c) 2010 BuySellAds.com
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of the project's author nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

//
//  BSASwitchboard.h
//  BSAAdFramework
//
//  Created by Rick Fillion on 1/25/10.
//  Copyright 2010 BuySellAds. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define kBodegaFeaturedZoneId @"1245410"

@interface BSASwitchboard : NSObject {
    CFMutableDictionaryRef connections;
    CFMutableDictionaryRef connectionsData;
    NSUserDefaults * defaults;
}

+ (NSString *)baseAdsURL; 
+ (NSString *)baseStatsURL;
+ switchboard;
- (void) adsForKey:(NSString *)key target: (id)target selector:(SEL)sel;
- (void) registerImpressionForAdIds:(NSArray *)adIdentifiers zoneId:(NSNumber *)zoneIdentifier target:(id)target selector:(SEL)sel;
- (void) registerClickForAdId:(NSNumber *)adIdentifier zoneId:(NSNumber *)zoneIdentifier target:(id)target selector:(SEL)sel;


@end
