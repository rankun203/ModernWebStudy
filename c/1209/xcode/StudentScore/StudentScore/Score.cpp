//
//  Score.cpp
//  StudentScore
//
//  Created by Kun on 12/9/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "Score.h"

long Score::getTotalScore(){
    return totalScore;
}

Score::Score(){}
Score::Score(long score){
    totalScore = score;
}
Score::~Score(){}
