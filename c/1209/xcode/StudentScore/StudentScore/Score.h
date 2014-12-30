//
//  Score.h
//  StudentScore
//
//  Created by Kun on 12/9/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#ifndef __StudentScore__Score__
#define __StudentScore__Score__

#include <stdio.h>

class Score {
private:
    static long totalScore;
public:
    long getTotalScore();
    Score();
    Score(long score);
    ~Score();
};

#endif /* defined(__StudentScore__Score__) */
