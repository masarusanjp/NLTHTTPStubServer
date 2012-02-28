//
//  NLTHTTPStubConnection.h
//  NLTHTTPStubServer
//
//  Created by  on 12/02/28.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTTPConnection.h"
#import "NLTHTTPStubResponse.h"

@class NLTHTTPStubServer;

@interface NLTHTTPStubConnection : HTTPConnection
@property(nonatomic,assign) NLTHTTPStubServer *stubServer; 
@end
