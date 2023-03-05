#include <iostream>

using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "动物叫声" << endl;
    };
};
class Cat:public Animal {
public:
    /**
     * 派生类重写父类的虚方法时，无论是否加virtual关键字，都将被认为是虚函数
     */
    void speak() override {
        cout << "猫的叫声" << endl;
    }
};
class SmallCat:public Cat {
public:
    /**
     * 派生类重写父类的虚方法时，无论是否加virtual关键字，都将被认为是虚函数
     */
    void speak() override {
        cout << "小猫的叫声" << endl;
    }
};
class Dog:public Animal {
public:
    virtual void speak() {
        cout << "狗的叫声" << endl;
    }
};

/*
int main() {
    Cat cat;
    */
/**
     * 如果不将speak定义成虚函数，将只会调用Animal的Speak
     * 通过虚函数可以实现父类调用子类的方法，从而实现多态的特性
     *//*

    Animal *pa = &cat;
    pa->speak();
    Dog dog;
    Animal *pb = &dog;
    pb->speak();
    SmallCat smallCat;
    Animal *pc = &smallCat;
    pc->speak();
    return 0;
}*/
