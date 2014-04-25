//  Boobalan Munusamy
//  Copyright (c) 2013 Boobalan Munusamy. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ParserXMLDelegate
@required

- (NSMutableArray*)parseData:(NSDictionary*)data;

@end

@interface CXMLParser : NSObject<NSXMLParserDelegate>
{
    NSMutableArray *dictionaryStack;
    NSMutableString *textInProgress;
    
    NSError * __strong *errorPointer;
}

+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError **)errorPointer;

@end
