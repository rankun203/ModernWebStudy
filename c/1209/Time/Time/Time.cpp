//
//  Time.cpp
//  Time
//
//  Created by Kun on 12/9/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "Time.h"

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}
Time::Time(int _hour, int _minute, int _seconed){
    hour = _hour;
    minute = _minute;
    second = _seconed;
}
void Time::plusHour(){
    ++hour;
}
void Time::plusMinute(){
    ++minute;
}
void Time::plusSecond(){
    ++second;
}
void Time::resetHour(){
    hour = 0;
}
void Time::resetMinute(){
    minute = 0;
}
void Time::resetSecond(){
    second = 0;
}
int Time::getHour(){
    return hour;
}
int Time::getMinute(){
    return minute;
}
int Time::getSecond(){
    return second;
}



void Time::display(){
    printf("%02d:%02d:%02d\n", hour, minute, second);
}