//
//  main.cpp
//  Time
//
//  Created by Kun on 12/9/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <iostream>
#include "Time.h"
#include <unistd.h>

int main(int argc, const char * argv[]) {
    
    int i=0, j=0, k=0, microSecond=1, second=1000*1000*microSecond;
    
    Time time(i, j, k);

    for (time.resetHour(); time.getHour()<24; time.plusHour()) {
        for (time.resetMinute(); time.getMinute()<60; time.plusMinute()) {
            for (time.resetSecond(); time.getSecond()<60; time.plusSecond()) {
                time.display();
                usleep(second);
            }
        }
    }
    
    return 0;
}
