//
//  tree.cpp
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "iostream"
#include "tree.h"

using namespace std;

Tree::Tree() {
    cout<<"~构造函数执行中"<<endl;
}
Tree::~Tree() {
    cout<<"~析构函数执行中"<<endl;
}
void Tree::grow(int year) {
    age = age + year;
}
int Tree::getAge() {
    return this->age;
}
