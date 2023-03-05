#include <iostream>
#include <string>

using namespace std;

class Base {
public:
    void move() {
        cout << "基类move" << endl;
    }
};

class Derive:public Base {
public:
    void call() {
        cout << "子类call" << endl;
    }
};

/*
int main() {
    Derive derive;
    // 通过对象赋值
    Base base = derive;
    // 通过对象引用赋值
    Base& rBase = derive;
    // 通过对象地址赋值
    Base* pBase = &derive;

    base.move();
    rBase.move();
    pBase->move();

    // 编译报错，因为只能调用基类的
    // base.call();

}
*/
