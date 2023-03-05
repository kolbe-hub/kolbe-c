#include <iostream>

using namespace std;

class Base1 {
public:
    virtual void func() { cout << "Base1 func" << endl; };
};

class Base2 {
public:
    virtual void func() { cout << "Base2 func" << endl; };
};

class Son: public Base1, public Base2 {
public:
    virtual void func() { cout << "Son func" << endl; }
};
/*

int main() {
    Son son;
    Base1 *b1 = &son;
    b1->func();
    Base2 *b2 = &son;
    b2->func();
    return 0;
}*/
