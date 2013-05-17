//
//  Event.h
//  iConfs3
//
//  Created by Eduardo Joel Pereira Beja Martins on 15/05/13.
//  Copyright (c) 2013 G10PI. All rights reserved.
//

#ifndef iConfs3_Event_h
#define iConfs3_Event_h

#import <Foundation/NSObject.h>

@interface Event: NSObject
/*{
    @protected
    NSDate *_date;
    NSString *_title;
    NSString *_theme;
    Speaker *_speaker;
    BOOL userVoted;
    NSInteger vote;
    NSInteger rating;
    NSInteger eventID;
}*/
@property (nonatomic) NSDate* date;
@property (nonatomic) NSString* title;
@property (nonatomic) NSString* theme;
@property (nonatomic) Speaker* speaker;
@property (nonatomic) BOOL userVoted;
@property (nonatomic) int vote;
@property (nonatomic) int rating;
@property (nonatomic) int eventID;

-(Event*)initWithData:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th;
-(Event*)initWithDataAndSpeaker:(int)eID date:(NSDate*)d title:(NSString*)t theme:(NSString*)th speaker: (Speaker*)s;
-(void)vote:(int)vote;
-(NSString*)getTitle;
-(NSString*)getTheme;
-(Speaker*)getSpeaker;
-(void)setSpeaker:(Speaker*)s;
-(int)getVote;
-(void)rate:(int)r;
-(void)getRate;
-(NSDate*)getDate;
-(void)setDate:(NSDate*)d;
@end

#endif