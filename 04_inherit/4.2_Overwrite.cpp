#include <iostream>
#include <string>
using namespace  std;

class Vehicle {
public:
    void run() { cout << "Vehicle run" << endl; }
};
class Car:public Vehicle {
public:
    void run() { cout << "Car run" << endl; }
};

/*
int main() {
    Car car;
    // 如果子类覆盖了父类的方法，则默认调用子类的方法
    car.run();
    // 如果想调用父类的方法，可以通过 :: 的方式调用
    car.Vehicle::run();
}*/
