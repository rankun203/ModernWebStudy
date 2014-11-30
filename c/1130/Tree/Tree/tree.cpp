//
//  tree.cpp
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "iostream"
#include "string"
#include "tree.h"


using namespace std;

Tree::Tree(string pType) {
    type = pType;
    age = 0;
    height = 0.0f;
    cout<<"+构造函数执行中"<<endl;
}
Tree::~Tree() {
    cout<<"+析构函数执行中"<<endl;
}
void Tree::grow(int year) {
    age = age + year;
    height = height + year * 2.1f;
}
int Tree::getAge() {
    return this->age;
}
string Tree::getType() {
    return type;
}
void Tree::setHeight(float pHeight){
    height = pHeight;
}
float Tree::getHeight(){
    return height;
}
string Tree::desc() {
    cout << endl << "!类型：" + type << endl;
    cout << "!年龄：" << age << endl;
    cout << "!高度：" << height << endl << endl;
    return "";
}
