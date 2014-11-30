//
//  main.cpp
//  Dog
//
//  Created by Kun on 11/21/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

// 包含基本的
#include <iostream>
#include <string.h>

// std类中包含cin和cout行为，Dog类的几个行为在输出信息的时候会用到cout，
// 使用std命名空间可以不用每次调用cout都加上std::out
using namespace std;

/**
 * 定义一个Dog类，包括3个属性和3种行为
 */
class Dog {
public:
    string color;
    string type;
    string size;
    
    // 啃骨头行为，输出：啃骨头
    void gnaw() {
        cout << "正在啃骨头…" << endl;
    }
    
    // 看家行为，输出：看家
    void guard() {
        cout << "正在看家…" << endl;
    }
    
    // 吃狗粮行为，输出：吃狗粮
    void eat() {
        cout << "正在吃狗粮…" << endl;
    }
};


// 创建一个main方法来操作上面的Dog类
int main() {

    // 创建一个Dog类的对象，取名为myDog
    Dog myDog;
    
    // 调用dog的各种行为
    myDog.eat();
    myDog.gnaw();
    myDog.guard();
    
    // 给dog对象赋值
    myDog.color = "白色";
    myDog.type = "加菲";
    myDog.size = "大";
    
    cout << "myDog.color: " << myDog.color << endl;
    cout << "myDog.type: " << myDog.type << endl;
    cout << "myDog.size: " << myDog.size << endl;
    
    
    return 0;
}
