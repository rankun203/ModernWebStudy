//
//  Circle.cpp
//  CircleTest
//
//  Created by Kun on 12/2/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include "iostream"
#include "Circle.h"

using namespace std;

Circle::Circle(float pRadius) {
    radius = pRadius;
}
float Circle::getRadius(){
    return radius;
}
float Circle::getCircumference(){
    if(radius != 0.0f) {
        return 2.0f * PI * radius;
    } else {
        return 0.0f;
    }
}
float Circle::getArea(){
    if(radius != 0.0f) {
        return PI * radius * radius;
    } else {
        return 0.0f;
    }
}
void Circle::printInfo(){
    cout << "The Radius of the Circle is: " << getRadius() << endl;
    cout << "The Circumference of the Circle is: " << getCircumference() << endl;
    cout << "The Area of the Circle is: " << getArea() << endl;
}

const double Circle::PI = 3.1415926f;
