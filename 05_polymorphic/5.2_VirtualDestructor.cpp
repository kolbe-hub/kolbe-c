#include <iostream>
using namespace std;

class Base {
public:
    /**
     * 如果没有将父类的析构函数声明成虚函数，那么在使用父类指针调用时，不会自动调用子类的析构，导致子类的对象得不到正常释放
     */
    virtual ~Base() { cout << "Base析构" << endl; };
};
class Derive:public Base {
public:
    ~Derive() { cout << "Derive析构" << endl; }
};
/*
int main() {
    Base *b = new Derive;
    delete b;
    return 0;
}*/
