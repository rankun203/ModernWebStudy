//
//  dog.cpp
//  Dog
//
//  Created by Kun on 11/25/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "iostream"
#include "dog.h"

Dog::Dog(string t, string s, string c) {
    type  = t;
    size  = s;
    color = c;
}

void Dog::gnaw() {
    cout << "Gnawing..." << endl;
}


void Dog::guard() {
    cout << "Guarding..." << endl;
}


void Dog::eat() {
    cout << "Eating..." << endl;
}

string Dog::getType() {return type;}
string Dog::getSize() {return size;}
string Dog::getColor() {return color;}
