#include <iostream>

using namespace std;

class Animal {
public:
    void move() {
        cout << "动物行为" << endl;
    }
};

/**
 * 公有继承中，父类的public和protected成员，在子类中访问权限仍然是public和protected
 */
class Cat:public Animal {
public:
    Cat(string name) {
        _name = name;
    }
    void walk() {
        cout << "会走" << endl;
    }
private:
    string _name;
};

/**
 * 在保护继承中，父类的public和protected成员，在子类中访问权限全部变为protected
 */
class Dog:protected Animal {
public:
    Dog(string name) {
        _name = name;
    }
    void walk() {
        cout << "调用父类的移动" << endl;
        move();
    }
private:
    string _name;
};

/**
 * 在保护继承中，父类的public和protected成员，在子类中访问权限全部变为private
 */
class Bird:private Animal {
private:
    string _name;
public:
    Bird(string name) {
        _name = name;
    }
    void walk() {
        move();
    }
};

class SmallBird:public Bird {
public:
    void call() {
        // 编译报错，因为在父类中，是私有继承Animal，所以move变成了private，不可访问
        // move();

    }
};

class SmallDog:public Dog {
public:
    void call() {
        // 编译通过，因为在父类中，是保护继承Animal，所以move变成了protected，所以子类均可访问
        move();
    }
};


int main() {
    Cat cat("猫");
    cat.move();
    cat.walk();

    Dog dog("狗");
    dog.walk();
    // 此时父类的move()在子类中访问权限变成了protected，所以外界不可访问
    // dog.move();
    return 0;
}