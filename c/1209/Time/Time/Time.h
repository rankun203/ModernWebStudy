//
//  Time.h
//  Time
//
//  Created by Kun on 12/9/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#ifndef __Time__Time__
#define __Time__Time__

#include "stdio.h"
#include <iostream>

using namespace std;

class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time();
    Time(int hour, int minute, int seconed);
    void plusHour();
    void resetHour();
    int getHour();
    
    void plusMinute();
    void resetMinute();
    int getMinute();
    
    void plusSecond();
    void resetSecond();
    int getSecond();
    
    void display();
};

#endif /* defined(__Time__Time__) */
