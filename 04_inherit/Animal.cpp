#include <iostream>

using namespace std;

class Animal {
public:
    void move() {
        cout << "动物行为" << endl;
    }
};

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

int main() {
    Cat cat("猫");
    cat.move();
    cat.walk();
    return 0;
}