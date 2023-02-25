#ifndef KOLBE_C___CLOCK_H
#define KOLBE_C___CLOCK_H

#include <iostream>

using namespace std;

/**
 * 定义一个类
 */
class Student {
    /**
     * 类的成员函数必须在类中声明，在类外定义
     */
public:
    /**
     * 类的构造器和类同名，且不能有返回值
     */
    Student(string name);
    void sayHello();
private:
    string name;
};

/**
 * 类的构造器在类外定义
 */
Student::Student(string name) {
    /**
     * this是个指针，this-> 表示引用指针对象的成员
     */
    this->name = name;
}

/**
 * 类的方法在类外定义
 */
void Student::sayHello() {
    cout << "Hello my name is :" << name << endl;
}

#endif //KOLBE_C___CLOCK_H
