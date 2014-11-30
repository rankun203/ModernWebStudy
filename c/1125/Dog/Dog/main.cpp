//
//  main.cpp
//  Dog
//
//  Created by Kun on 11/21/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <iostream>
#include <string>
#include "dog.h"
#include "dog.cpp"

using namespace std;

int main() {

    Dog myDog("White", "Gafeey", "Big");
    
    myDog.eat();
    myDog.gnaw();
    myDog.guard();
    
    cout << "myDog.color : " << myDog.getColor() << endl;
    cout << "myDog.type  : " << myDog.getType() << endl;
    cout << "myDog.size  : " << myDog.getSize() << endl;
    
    
    return 0;
}
