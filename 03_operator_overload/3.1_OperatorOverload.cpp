#include <iostream>

using namespace std;

/**
 * 3.1 操作符重载
 */
class A {
private:
    int _x;
    int _y;
public:
    A(int x = 0, int y = 0): _x(x), _y(y) {}
    void show() const;
    A operator + (const A& a) const;
    A operator - (const A& a) const;
};
void A::show() const {
    cout << "(_x, _y) = " << "(" << _x << "," << _y << ")" << endl;
}
A A::operator+(const A &a) const {
    return A(_x + a._x, _y + a._y);
}
A A::operator-(const A &a) const {
    return A(_x - a._x, _y - a._y);
}
/*
int main() {
    A a1(1, 2);
    A a2(4, 5);
    a1.show();
    a2.show();
    A a = a1 + a2;
    a.show();
    return 0;
}*/
