//
//  main.cpp
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Tree tree;
    
    cout<<"树生长了4年"<<endl;
    tree.grow(4);
    
    cout<<"树的年龄是："<<tree.getAge()<<" 岁"<<endl;
    
    return 0;
}
