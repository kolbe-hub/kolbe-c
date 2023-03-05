#include <iostream>

using namespace std;

class Animal {
public:
    /**
     * 纯虚函数需要在函数的定义后面添加 = 0
     * 带有抽象方法的不允许新建对象，只能创建引用并指向子类
     */
    virtual void speak() = 0;
    virtual void eat() = 0;
    virtual ~Animal() { cout << "调用Animal的析构函数" << endl; };
};

class Cat:public Animal {
public:
    void speak() {cout << "猫叫" << endl;}
    void eat() {cout << "猫吃" << endl;}
    virtual ~Cat() { cout << "调用猫的析构函数" << endl; };
};
class Dog:public Animal {
public:
    void speak() {cout << "狗叫" << endl;}
    void eat() {cout << "狗吃" << endl;}
    virtual ~Dog() { cout << "调用狗的析构函数" << endl; };
};

/*
int main() {
    Animal *cat = new Cat();
    cat->speak();
    delete cat;
    Animal *dog = new Dog();
    dog->speak();
    delete dog;

    // 编译报错，抽象类不允许新建对象
    // Animal animal;
    return 0;
}*/
