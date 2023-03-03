#include <iostream>
using namespace std;

/**
 * 1）友元不能被继承
 * 2）友元不能传递
 * 3）友元在类中不限制声明的位置
 * 4）友元是单相的
 */
class Circle {
    /**
     * 友元函数
     */
    friend void getArea(Circle &circle);
    /**
     * 友元类
     */
    friend class A;
public:
    Circle(float radius);
    ~Circle();
private:
    float _radius;
    const float PI = 3.14;
};
class A {
public:
    void getCircle(Circle &circle);
    void getName();
};
void A::getCircle(Circle &circle) {
    cout << circle._radius << endl;
}
void A::getName() {}


Circle::Circle(float radius) {
    _radius = radius;
    cout << "初始的圆半径为：" << _radius << endl;
}
Circle::~Circle() {}
void getArea(Circle &circle) {
    cout << "圆的半径是：" << circle._radius << endl;
    cout << "圆的面积是：" << circle.PI * circle._radius * circle._radius << endl;
}
/*
int main() {
    Circle circle(10);
    getArea(circle);
    A a;
    a.getCircle(circle);
    return 0;
}*/
