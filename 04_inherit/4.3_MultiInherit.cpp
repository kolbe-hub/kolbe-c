#include <iostream>
#include <string>

using namespace std;

class Bed {
public:
    Bed() { cout << "床构造函数" << endl;}
    ~Bed() { cout << "床析构函数" << endl;}
    void sleep() { cout << "睡觉" << endl; }
    void sit() { cout << "坐在床上" << endl; }
};

class Sofa {
public:
    Sofa() { cout << "沙发构造函数" << endl;}
    ~Sofa() { cout << "沙发析构函数" << endl;}
    void sit() { cout << "坐在沙发上" << endl; }
};

/**
 * 多继承示例
 */
class SofaBed: public Sofa, public Bed {
public:
    SofaBed() { cout << "沙发床构造函数" << endl;}
    ~SofaBed() { cout << "沙发床析构函数" << endl;}
};

int main() {
    SofaBed sofaBed;
    // 当多继承有相同的方法时，需要使用 :: 的方式手动指定调用哪个方法
    sofaBed.Sofa::sit();
    sofaBed.sleep();
}