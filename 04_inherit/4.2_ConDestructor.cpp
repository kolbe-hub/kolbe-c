#include <iostream>
#include <string>

using namespace std;

/**
 * 构造函数的调用是先父类再子类
 * 析构函数的调用是先子类再父类
 */
class Engine {
private:
    string _type;
    int _power;
public:
    Engine(string type, int power): _type(type), _power(power) { cout << "Engine 构造" << endl; }
    void show() { cout << "Engine show" << endl; }
    ~Engine() { cout << "Engine 析构" << endl; }
};

class Vehicle {
private:
    string _name;
public:
    Vehicle(string name): _name(name) { cout << "Vehicle 构造" << endl; }
    void run() { cout << "Vehicle run" << endl; }
    ~Vehicle() {cout << "Vehicle 析构" << endl; }
    string getName() { return _name; }
};

class Car:public Vehicle {
private:
    int _seats;
    string _color;
public:
    /**
     * 父类的构造器初始化可以通过在方法后面加 : 的方式进行调用
     */
    Car(int seats, string color, string type, int power, string name): engine(type, power), Vehicle(name) {
        cout << "Car 构造" << endl;
        _seats = seats;
        _color = color;
    }
    /**
     * 编译报错，因为Engine和Vehicle没有默认构造器，所以在构造Car必须手动调用父类的构造器
     */
    // Car(int seats, string color): _seats(seats), _color(color) {}
    void brake() { cout << "Car " << getName() << " 停车" << endl; };
    void display() { cout << "Car " << getName() << "有" << _seats << "个座位" << endl; };
    ~Car() { cout << "Car析构" << endl;};
    Engine engine;
};


/*
int main() {
    Car car(5, "red", "EA113", 130, "passat");
    car.run();
    car.brake();
    car.display();
    car.engine.show();
    return 0;
}*/
