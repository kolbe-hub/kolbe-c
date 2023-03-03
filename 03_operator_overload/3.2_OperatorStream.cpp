#include <iostream>

using namespace std;

/**
 * 3.2 输入输出运算符重载
 * 1）标准的输入输出只支持基本数据类型，如果需要直接对类的对象进行输入输出，则需要在类中重载
 * 2）输入输出运算符只能重载成类的友元函数
 */
class A {
private:
    int _x;
    int _y;
public:
    A(int x = 0, int y = 0): _x(x), _y(y) {}
    friend ostream & operator << (ostream& os, const A& a);
    friend istream & operator >> (istream& is, A& a);
};

ostream & operator << (ostream& os, const A& a) {
    os << "(" << a._x << "," << a._y << ")";
    return os;
}
istream & operator >> (istream& is, A& a) {
    is >> a._x >> a._y;
    return is;
}

/*
int main() {
    A a1(1, 2);
    cout << "a1:" << a1 << endl;
    cout << "请重新输入a1对象数据：" << endl;
    cin >> a1;
    cout << "重新输入后的a1：" << a1 << endl;
    return 0;
}*/
