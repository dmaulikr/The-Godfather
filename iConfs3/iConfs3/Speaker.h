//
//  Speaker.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Speaker_h
#define iConfs3_Speaker_h
#import "Person.h"

@interface Speaker : Person
/*{
@protected
    NSString *_resume;
}*/
@property (nonatomic) NSString* resume;

-(Speaker*)initWithData: (NSString*) n work: (NSString*) h image:(NSString*)imgPath personID: (int)pID resume: (NSString*)r;
-(NSString*)getResume;
-(void)setResume:(NSString*)r;
@end


#endif
