//
//  main.cpp
//  Tree
//
//  Created by Kun on 11/30/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <iostream>
#include "string"
#include "tree.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Tree tree("柏杨");

    tree.desc();
    
    cout<<"+"<<tree.getType()<<"生长了4年"<<endl;
    tree.grow(4);
    
    tree.desc();
        
    return 0;
}
