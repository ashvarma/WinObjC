//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#pragma once

#import <Foundation/FoundationExport.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSPort.h>

@class NSPort;

FOUNDATION_EXPORT_CLASS
@interface NSPortMessage : NSObject
- (instancetype)initWithSendPort:(NSPort*)sendPort receivePort:(NSPort*)receivePort components:(NSArray*)components STUB_METHOD;
- (BOOL)sendBeforeDate:(NSDate*)aDate STUB_METHOD;
@property (readonly, copy) NSArray* components STUB_PROPERTY;
@property (readonly, retain) NSPort* receivePort STUB_PROPERTY;
@property (readonly, retain) NSPort* sendPort STUB_PROPERTY;
@property uint32_t msgid STUB_PROPERTY;

@end