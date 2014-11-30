//
//  tree.cpp
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "tree.h"

Tree::Tree() {}
void Tree::grow(int year) {
    age = age + year;
}
int Tree::getAge() {
    return this->age;
}
