//
//  dog.h
//  Dog
//
//  Created by Kun on 11/25/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#ifndef Dog_dog_h
#define Dog_dog_h

#include "string"
using namespace std;

class Dog {
    
private:
    string type;
    string size;
    string color;
    
public:
    Dog(){}
    Dog(string t, string s, string c);

    void gnaw();
    
    void guard();
    
    void eat();
    string getType();
    string getSize();
    string getColor();
    
};

#endif

