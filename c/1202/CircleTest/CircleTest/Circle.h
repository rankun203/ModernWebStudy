//
//  Circle.h
//  CircleTest
//
//  Created by Kun on 12/2/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#ifndef CircleTest_Circle_h
#define CircleTest_Circle_h

using namespace std;

class Circle {
private:
    float radius;
public:
    static const double PI;
    
    Circle(float radius);
    float getRadius();
    float getCircumference();
    float getArea();
    void printInfo();
};

#endif
