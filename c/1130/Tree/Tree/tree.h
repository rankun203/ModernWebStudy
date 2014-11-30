//
//  tree.h
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#ifndef Tree_tree_h
#define Tree_tree_h

#include "string"
using namespace std;

//定义类：Tree
class Tree {

//定义私有成员
private:
    int age;
    string type;
    float height;
    
//定义公共成员
public:
    Tree(string type);
    ~Tree();
    void grow(int year);
    int getAge();
    string getType();
    void setHeight(float height);
    float getHeight();
    string desc();
};

#endif
