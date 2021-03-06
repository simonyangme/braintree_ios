@import Foundation;
@import XCTest;

@class BTClient;

@interface BTClientSpecHelper : NSObject

+ (BTClient *)asyncClientForTestCase:(XCTestCase *)testCase withOverrides:(NSDictionary *)overrides;

+ (BTClient *)deprecatedClientForTestCase:(XCTestCase *)testCase withOverrides:(NSDictionary *)overrides;

+ (BTClient *)clientForTestCase:(XCTestCase *)testCase withOverrides:(NSDictionary *)overrides async:(BOOL)async;

@end
