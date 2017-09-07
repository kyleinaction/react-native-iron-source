#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif
#import "RCTEventDispatcher.h"
#import "IronSource/IronSource.h"

@interface RNIronSourceRewardedVideo : NSObject <RCTBridgeModule, ISRewardedVideoDelegate>

@end
