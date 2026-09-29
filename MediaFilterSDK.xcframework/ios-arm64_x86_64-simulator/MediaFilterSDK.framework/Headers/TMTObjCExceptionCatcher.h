//
//  TMTObjCExceptionCatcher.h
//  MediaFilterSDK
//
//  Created by Vladislav Yermakov on 28.07.2026.
//
//  Minimal bridge that lets Swift run a block guarded by an Objective-C
//  @try/@catch. Swift cannot natively catch NSExceptions, so this thin shim
//  remains in Objective-C on purpose — it is the only ObjC left in the
//  ObjectDump introspection stack.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TMTObjCExceptionCatcher : NSObject

/// Runs `tryBlock`. If it raises an NSException, the exception is caught and
/// returned; otherwise returns nil. This mirrors the semantics of wrapping a
/// call in @try/@catch from Swift.
+ (nullable NSException *)catchException:(NS_NOESCAPE void (^)(void))tryBlock;

@end

NS_ASSUME_NONNULL_END
