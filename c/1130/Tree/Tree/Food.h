//
//  Food.h
//
//  Created by Kun on 1/6/15.
//  Copyright (c) 2015 Kun. All rights reserved.
//


#include "string"
#include "ctime"
using namespace std;

class Food {
    
private:
    tm deadline;
    long remainDays;
    
public:
    Food();
    ~Food();
    void ShowInfor();
    void RecordInfor();
    void Check();
};
