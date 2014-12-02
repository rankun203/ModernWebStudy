//
//  main.cpp
//  CircleTest
//
//  Created by Kun on 12/2/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <iostream>
#include "Circle.h"

int main(int argc, const char * argv[]) {

    Circle circle(3.5);
    
    cout << "-----\function Call:" << endl;
    
    cout << "circle.getRadius(): " << circle.getRadius() << endl;
    cout << "circle.getCircumference(): " << circle.getCircumference() << endl;
    cout << "circle.getArea(): " << circle.getArea() << endl;
    
    cout << "-----\nprintInfo():" << endl;
    
    circle.printInfo();
    
    return 0;
}
