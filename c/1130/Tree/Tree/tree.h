//
//  tree.h
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#ifndef Tree_tree_h
#define Tree_tree_h

//定义类：Tree
class Tree {

//定义私有成员
private:
    int age;
    
//定义公共成员
public:
    Tree();
    ~Tree();
    void grow(int year);
    int getAge();
};

#endif
