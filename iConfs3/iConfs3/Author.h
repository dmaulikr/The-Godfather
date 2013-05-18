//
//  Author.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Author_h
#define iConfs3_Author_h
#import "Person.h"
#import "Paper.h"

@interface Author : Person
/*{
    @protected
    NSMutableDictionary *_papers;
}*/
@property (nonatomic) NSMutableDictionary* papers;

-(Paper*)getPaper:(NSString*)paperID;
-(NSArray*)getAllPapers;
-(BOOL)addPapper:(Paper*)p;
-(BOOL)removePaper:(NSString*)paperID;
@end


#endif
