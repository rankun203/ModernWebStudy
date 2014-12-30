//
//  main.cpp
//  StudentScore
//
//  Created by Kun on 12/9/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <iostream>
#include "Score.h"

int main(int argc, const char * argv[]) {
    
    Score score(40.5);
    
    std::cout<<score.getTotalScore()<<std::endl;
    
    return 0;
}
