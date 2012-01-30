//
//  ZDSStreamJSONParser.h
//
//  Created by Marcus Zarra on 10/28/11.
//  Copyright (c) 2011 Cocoa Is My Girlfriend. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#import "YAJLParser.h"

@interface ZDSStreamJSONParser : NSObject <YAJLParserDelegate>

@property (nonatomic, assign) NSInteger skipDictionaryCount;
@property (nonatomic, assign) NSObject<YAJLParserDelegate> *parent;
@property (nonatomic, assign) NSManagedObjectContext *moc;
@property (nonatomic, assign) NSManagedObject *currentObject;

@property (nonatomic, retain) NSString *currentKey;
@property (nonatomic, retain) ZDSStreamJSONParser *childParser;

- (id)initWithManagedObjectContext:(NSManagedObjectContext*)aMOC;

@end
