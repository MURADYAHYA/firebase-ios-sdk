//
//  FIRStackFrameTests.m
//  FirebaseCrashlytics-iOS-Unit-unit
//
//  Created by Sam Edson on 3/10/20.
//

#import <XCTest/XCTest.h>

#import "FIRStackFrame.h"
#import "FIRStackFrame_Private.h"

@interface FIRStackFrameTests : XCTestCase

@end

@implementation FIRStackFrameTests

- (void)testBasicSymbolicatedCheck {
  FIRStackFrame *stackFrame = [FIRStackFrame stackFrameWithSymbol:@"SYMBOL" file:@"FILE" line:54321];
  XCTAssertEqualObjects(stackFrame.symbol, @"SYMBOL");
  XCTAssertEqualObjects(stackFrame.fileName, @"FILE");
  XCTAssertEqual(stackFrame.lineNumber, 54321);
}

- (void)testIntUIntConversion {
  FIRStackFrame *stackFrame = [FIRStackFrame stackFrameWithSymbol:@"SYMBOL" file:@"FILE" line:100];
  XCTAssertEqual(stackFrame.lineNumber, 100);

  FIRStackFrame *stackFrame2 = [FIRStackFrame stackFrameWithSymbol:@"SYMBOL" file:@"FILE" line:-100];
  XCTAssertEqual(stackFrame2.lineNumber, 4294967196);
}

- (void)testDescription {
  FIRStackFrame *stackFrame = [FIRStackFrame stackFrameWithSymbol:@"FIRStackFrameTests" file:@"testDescription" line:35];
  XCTAssertEqualObjects([stackFrame description], @"{testDescription - FIRStackFrameTests:35}");
}

@end
